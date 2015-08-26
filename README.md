# ofxWinTouchHook
windows 7 + 8 touch for OF

- using 'hooks' to catch touch events before the window processes the events
- no need to modify glfw/glu source with hooks
- tested on win7+8 with OF 0.9

Ref:
- http://www.unknowncheats.me/forum/c-and-c/83707-setwindowshookex-example.html
- http://stackoverflow.com/questions/19776866/c-global-hooking-why-setwindowshookex-return-null
- http://stackoverflow.com/questions/21069643/is-it-possible-to-remove-touch-messages-wm-pointerdown-etc-that-an-applicatio