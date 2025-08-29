-[AMPProgressBarViewController viewWillDisappear]
void __cdecl -[AMPProgressBarViewController viewWillDisappear](AMPProgressBarViewController *self, SEL a2)
{
  AMPProgressBarView *v3; // x20
  NSTimer *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[AMPProgressBarViewController progressBarView](self, "progressBarView"));
  -[AMPProgressBarView stopIndeterminateAnimation](v3, "stopIndeterminateAnimation");
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[AMPProgressBarViewController indeterminateTimer](self, "indeterminateTimer"));
  -[NSTimer invalidate](v4, "invalidate");
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[AMPProgressBarViewController setIndeterminateTimer:](self, "setIndeterminateTimer:", 0LL);
}