import type {
  EditorApi,
  InfoviewApi,
  InfoviewConfig,
} from '@leanprover/infoview-api';
import {
  JSONRPCClient,
  JSONRPCServer,
  JSONRPCServerAndClient,
} from 'json-rpc-2.0';

export class RPCEditorApi implements EditorApi {
  private panel?: { conn: JSONRPCServerAndClient; api: InfoviewApi };

  initPanel(api: InfoviewApi) {
    const socket = new WebSocket('ws://localhost:6174');

    const conn = new JSONRPCServerAndClient(
      new JSONRPCServer(),
      new JSONRPCClient((request) => {
        const send = () => {
          try {
            socket.send(JSON.stringify(request));
            return Promise.resolve();
          } catch (error) {
            return Promise.reject(error);
          }
        };
        if (socket.readyState === socket.CONNECTING) {
          socket.addEventListener('open', send);
        } else {
          send();
        }
      }),
    );

    socket.onmessage = (event) => {
      conn.receiveAndSend(JSON.parse(event.data.toString()));
    };

    socket.onclose = (event) => {
      conn.rejectAllPendingRequests(`Connection is closed (${event.reason}).`);
    };

    conn.addMethod('initialize', ({ loc }) => api.initialize(loc));

    conn.addMethod('serverNotification', ({ method, params }) =>
      api.gotServerNotification(method, params),
    );

    conn.addMethod('clientNotification', ({ method, params }) =>
      api.sentClientNotification(method, params),
    );

    conn.addMethod('serverRestarted', ({ result }) =>
      api.serverRestarted(result),
    );

    conn.addMethod('serverStopped', ({ reason }) => api.serverStopped(reason));

    conn.addMethod('changedCursorLocation', ({ loc }) =>
      api.changedCursorLocation(loc),
    );

    this.panel = { conn, api };
  }

  async saveConfig(config: InfoviewConfig) {
    return this.panel?.conn.request('saveConfig', { config });
  }

  async sendClientRequest(uri: string, method: string, params: any) {
    return this.panel?.conn.request('sendClientRequest', {
      uri,
      method,
      params,
    });
  }

  async sendClientNotification(uri: string, method: string, params: any) {
    this.panel?.conn.notify('sendClientNotification', { uri, method, params });
  }

  async subscribeServerNotifications(method: string): Promise<void> {
    this.panel?.conn.notify('subscribeServerNotifications', { method });
  }

  async unsubscribeServerNotifications(method: string): Promise<void> {
    this.panel?.conn.notify('unsubscribeServerNotifications', { method });
  }

  async subscribeClientNotifications(method: string): Promise<void> {
    this.panel?.conn.notify('subscribeClientNotifications', { method });
  }

  async unsubscribeClientNotifications(method: string): Promise<void> {
    this.panel?.conn.notify('unsubscribeClientNotifications', { method });
  }

  async copyToClipboard(text: string): Promise<void> {
    this.panel?.conn.notify('copyToClipboard', { text });
  }

  async insertText(text: string, kind: any, pos?: any): Promise<void> {
    this.panel?.conn.notify('insertText', { text, kind, pos });
  }

  async applyEdit(te: any): Promise<void> {
    this.panel?.conn.notify('applyEdit', { te });
  }

  async showDocument(show: any): Promise<void> {
    this.panel?.conn.notify('showDocument', { show });
  }

  async restartFile(uri: string): Promise<void> {
    this.panel?.conn.notify('restartFile', { uri });
  }

  async createRpcSession(uri: any): Promise<string> {
    return this.panel?.conn.request('createRpcSession', { uri });
  }

  async closeRpcSession(sessionId: string): Promise<void> {
    this.panel?.conn.notify('closeRpcSession', { sessionId });
  }
}
