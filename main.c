#include <X11/X.h>
#include <unistd.h>
#include <X11/Xlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <err.h>
#include "main.h"
#include <xdo.h>
#include <sys/resource.h>

void log_(char msg_[]){
    printf("[DEBUG INFO]: %s\n", msg_);
}

void enable(){
    setpriority(PRIO_PROCESS, _pid_, -20);
    printf("window priority:%d\n", prio);
}

void disable(){
    setpriority(PRIO_PROCESS, _pid_, 0);
}

void root_check(){
    if(getuid() != 0){
	errx(2, "please exec with root\n");
    }
}

int main(){
    root_check();
    tuning = true;
    x = xdo_new(NULL);
    if(!(dpy = XOpenDisplay(0))){
        errx(1, "cannot open display '%s'", XDisplayName(0));
    } else {
        snum = DefaultScreen(dpy);
        height = DisplayHeight(dpy, snum);
        while (1) {
            XGetInputFocus(dpy, &wfocus, &revert_to);
	    x = xdo_new(NULL);
	    _pid_ = xdo_get_pid_window(x, wfocus);
	    prio = getpriority(PRIO_PROCESS, _pid_);
	    sprintf(loop_log, "pid: %d prio is: %d\n", _pid_, prio);
	    log_(loop_log);
            XGetWindowAttributes(dpy, wfocus, &attribs);
            if (height == attribs.height){
                enable();
            } else {
                disable();
            }
            sleep(1);
        }
    }

}
