# xcid - X id of current window

xcid is a simple tool (inspired by [`xcwd`]) that prints the X11 window id of
the currently focused window.

[`xcwd`]: https://github.com/schischi/xcwd

The main goal is to be used with programs that allow embedding themselves in
another window, like `dmenu`:

    dmenu_run -w `xcid`

## Build and usage

Requires development version of the X11 libraries:

    gcc `pkg-config --cflags --libs x11` -o xid xid.c
    
    ./xid
