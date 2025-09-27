import type { InfoviewApi } from '@leanprover/infoview-api';
import { RPCEditorApi } from './api.ts';
import './es-module-shims-options.js';
import 'es-module-shims';

import './index.css';

const host = `http://${location.host}/imports`;

const imports = {
  '@leanprover/infoview': 'https://unpkg.com/@leanprover/infoview/dist/index.production.min.js',
  'react': 'https://unpkg.com/@leanprover/infoview/dist/react.production.min.js',
  'react/jsx-runtime': 'https://unpkg.com/@leanprover/infoview/dist/react-jsx-runtime.production.min.js',
  'react-dom': 'https://unpkg.com/@leanprover/infoview/dist/react-dom.production.min.js',
};

const rootEl = document.querySelector('#root');

const editorApi = new RPCEditorApi();
importShim.addImportMap({ imports });

importShim('@leanprover/infoview').then((mod: any) => {
  const api: InfoviewApi = mod.renderInfoview(editorApi, rootEl);
  editorApi.initPanel(api);
});
