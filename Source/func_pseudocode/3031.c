-[DeviceSetupViewController progressViewController]
ProgressViewController *__cdecl -[DeviceSetupViewController progressViewController](
        DeviceSetupViewController *self,
        SEL a2)
{
  DeviceSetupViewController *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x0
  ProgressViewController *progressViewController; // x8
  ProgressViewController *v6; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retain(self);
  objc_sync_enter(v2);
  if ( !v2->_progressViewController )
  {
    v4 = objc_opt_new(&OBJC_CLASS___ProgressViewController, v3);
    progressViewController = v2->_progressViewController;
    v2->_progressViewController = (ProgressViewController *)v4;
    objc_release(progressViewController);
  }
  objc_sync_exit(v2);
  objc_release(v2);
  v6 = v2->_progressViewController;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v6);
}