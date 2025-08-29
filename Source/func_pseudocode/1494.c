-[LoadingViewController hideProgress:]
void __cdecl -[LoadingViewController hideProgress:](LoadingViewController *self, SEL a2, id a3)
{
  id v4; // x19
  NSTimer *autoShowTimer; // x0
  NSTextField *v6; // x21
  NSProgressIndicator *v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  autoShowTimer = self->_autoShowTimer;
  if ( autoShowTimer )
  {
    -[NSTimer invalidate](autoShowTimer, "invalidate");
    -[LoadingViewController setAutoShowTimer:](self, "setAutoShowTimer:", 0LL);
  }
  v6 = objc_retainAutoreleasedReturnValue(-[LoadingViewController label](self, "label"));
  -[NSTextField setHidden:](v6, "setHidden:", 1LL);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[LoadingViewController spinner](self, "spinner"));
  -[NSProgressIndicator stopAnimation:](v7, "stopAnimation:", v4);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}