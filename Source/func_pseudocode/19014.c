-[SiriNCAlertViewController siriViewController:siriIdleAndQuietStatusDidChange:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[SiriNCAlertViewController siriViewController:siriIdleAndQuietStatusDidChange:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3,
        bool a4)
{
  _BOOL8 v4; // x19
  _BOOL8 v6; // x0
  id v7; // x21
  NSTimer *v8; // x21
  NSTimer *v9; // x21
  id v10; // x21
  NSTimer *v11; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = a4;
  v6 = -[SiriNCAlertViewController wasDismissed](self, "wasDismissed", a3);
  if ( !v6 )
  {
    if ( v4 )
    {
      v7 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController autodismisser](self, "autodismisser"));
      objc_msgSend(v7, "setEnabled:", 1LL);
      objc_release(v7);
      v8 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController idleDelayTimer](self, "idleDelayTimer"));
      -[NSTimer invalidate](v8, "invalidate");
      objc_release(v8);
      v9 = objc_retainAutoreleasedReturnValue(
             +[NSTimer scheduledTimerWithTimeInterval:target:selector:userInfo:repeats:](
               &OBJC_CLASS___NSTimer,
               "scheduledTimerWithTimeInterval:target:selector:userInfo:repeats:",
               self,
               "_idleDelayTimerFired:",
               0LL,
               0LL,
               0.5));
      -[SiriNCAlertViewController setIdleDelayTimer:](self, "setIdleDelayTimer:", v9);
    }
    else
    {
      if ( (AFDeviceSupportsSystemAssistantExperience(v6) & 1) != 0 )
        goto LABEL_7;
      v10 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController autodismisser](self, "autodismisser"));
      objc_msgSend(v10, "setEnabled:", 0LL);
      objc_release(v10);
      v11 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController idleDelayTimer](self, "idleDelayTimer"));
      -[NSTimer invalidate](v11, "invalidate");
      objc_release(v11);
      v9 = (NSTimer *)objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController autodismisser](self, "autodismisser"));
      -[NSTimer cancelTimer](v9, "cancelTimer");
    }
    objc_release(v9);
  }
LABEL_7:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[SiriNCAlertViewController setIsSiriIdleAndQuiet:](self, "setIsSiriIdleAndQuiet:", v4);
}