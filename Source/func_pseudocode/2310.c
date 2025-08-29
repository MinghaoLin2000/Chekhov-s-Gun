-[DeviceModeFinderViewController progressViewController]
ProgressViewController *__cdecl -[DeviceModeFinderViewController progressViewController](
        DeviceModeFinderViewController *self,
        SEL a2)
{
  ProgressViewController *progressViewController; // x0
  ProgressViewController *v4; // x0
  ProgressViewController *v5; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  progressViewController = self->_progressViewController;
  if ( !progressViewController )
  {
    v4 = (ProgressViewController *)objc_opt_new(&OBJC_CLASS___ProgressViewController, a2);
    v5 = self->_progressViewController;
    self->_progressViewController = v4;
    objc_release(v5);
    progressViewController = self->_progressViewController;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(progressViewController);
}