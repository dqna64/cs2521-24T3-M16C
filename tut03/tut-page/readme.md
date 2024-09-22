## Run locally

Host this directory as a HTTP server.

Make sure you run from this directory.

```sh
$ npm i -g live-server
$ live-server
```

Now go to http://127.0.0.1:8080

## Misc
To insert image assets that are in the same directory of this repo:

```html
            <img
              class="local"
              src="name-of-image-in-same-dir-as-tut-page.png"
            />
```

Must have `class="local"`.

See script tag at bottom of tut-page.html