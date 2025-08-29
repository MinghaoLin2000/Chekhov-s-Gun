-[DeviceModeUnpairedViewController showProgress:]
void __cdecl -[DeviceModeUnpairedViewController showProgress:](DeviceModeUnpairedViewController *self, SEL a2, id a3)
{
  id v4; // x19
  NSTimer *pairSpinnerTimer; // x0
  NSProgressIndicator *v6; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  pairSpinnerTimer = self->_pairSpinnerTimer;
  if ( pairSpinnerTimer )
  {
    -[NSTimer invalidate](pairSpinnerTimer, "invalidate");
    -[DeviceModeUnpairedViewController setPairSpinnerTimer:](self, "setPairSpinnerTimer:", 0LL);
  }
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController pairSpinner](self, "pairSpinner"));
  -[NSProgressIndicator startAnimation:](v6, "startAnimation:", v4);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}