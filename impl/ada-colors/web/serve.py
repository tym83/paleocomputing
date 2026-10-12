"""Serve a directory with the headers that make a page cross-origin isolated.

GitHub Pages cannot send them, so the page carries a service worker that adds
them; in a test the server sends them itself and the worker stays idle.
Usage: python3 serve.py <directory> <port>
"""
import functools
import http.server
import sys


class Isolated(http.server.SimpleHTTPRequestHandler):
    def end_headers(self):
        self.send_header("Cross-Origin-Opener-Policy", "same-origin")
        self.send_header("Cross-Origin-Embedder-Policy", "require-corp")
        self.send_header("Cross-Origin-Resource-Policy", "cross-origin")
        super().end_headers()

    def log_message(self, *args):
        pass


Isolated.extensions_map[".js"] = "text/javascript"
Isolated.extensions_map[".wasm"] = "application/wasm"
handler = functools.partial(Isolated, directory=sys.argv[1])
http.server.ThreadingHTTPServer(("127.0.0.1", int(sys.argv[2])), handler).serve_forever()
