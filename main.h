#include <X11/Xlib.h>
#include <xdo.h>
#include <stdio.h>
Display *dpy;
Window w, wfocus;
xdo_t * x;
int height, snum, revert_to, _pid_, prio;
bool tuning;
XWindowAttributes attribs;
char loop_log[30];
