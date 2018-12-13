/* This is xid, copryright (c) 2018 Naomi Nitel <naominitel@gmail.com>
 * Feel free to copy and redistribute in terms of the BSD license */

#include <stdlib.h>
#include <stdio.h>
#include <X11/Xlib.h>

int main(int argc, const char *argv[]) {
    Display *dpy;
    Window w;

    (void)argc;
    (void)argv;

    dpy = XOpenDisplay(NULL);
    if (!dpy)
      exit(EXIT_FAILURE);
    XGetInputFocus(dpy, &w, (int[1]){});

    printf("%lu\n", w);
    return EXIT_SUCCESS;
}

