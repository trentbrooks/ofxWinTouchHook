# ofxWinTouchHook
windows 7 + 8 touch for OF

- using 'hooks' to catch touch events before the window processes the events
- no need to modify glfw/glu source with hooks
- tested on win7+8 with OF 0.9 with Visual Studio 2015
- added #define USE_WM_POINTER_EVENTS to ofxWinTouchHook.h to receive WM_POINTER events only (win8), comment out for WM_TOUCH

Ref:
- http://www.unknowncheats.me/forum/c-and-c/83707-setwindowshookex-example.html
- http://stackoverflow.com/questions/19776866/c-global-hooking-why-setwindowshookex-return-null
- http://stackoverflow.com/questions/21069643/is-it-possible-to-remove-touch-messages-wm-pointerdown-etc-that-an-applicatio
