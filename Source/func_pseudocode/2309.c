-[DeviceModeFinderViewController loadingViewController]
LoadingViewController *__cdecl -[DeviceModeFinderViewController loadingViewController](
        DeviceModeFinderViewController *self,
        SEL a2)
{
  LoadingViewController *loadingViewController; // x0
  LoadingViewController *v4; // x0
  LoadingViewController *v5; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  loadingViewController = self->_loadingViewController;
  if ( !loadingViewController )
  {
    v4 = (LoadingViewController *)objc_opt_new(&OBJC_CLASS___LoadingViewController, a2);
    v5 = self->_loadingViewController;
    self->_loadingViewController = v4;
    objc_release(v5);
    loadingViewController = self->_loadingViewController;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(loadingViewController);
}