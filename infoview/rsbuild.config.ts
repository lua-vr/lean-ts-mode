import { defineConfig } from '@rsbuild/core';

export default defineConfig({
  html: {
    tags: [
      // Base layout (spacing, icons, tooltips, flex structure) comes from
      // the infoview package itself -- the same stylesheet the VS Code
      // extension links in alongside its own theme CSS. It's fetched from
      // the same place as the infoview script (see src/index.ts), and
      // inserted before our own stylesheet so index.css can override just
      // the parts we want to theme.
      {
        tag: 'link',
        attrs: {
          rel: 'stylesheet',
          href: 'https://unpkg.com/@leanprover/infoview/dist/index.css',
        },
        head: true,
        append: false,
      },
    ],
  },
});
