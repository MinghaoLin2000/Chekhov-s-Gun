-[DeviceSetupViewController loadingViewController]
LoadingViewController *__cdecl -[DeviceSetupViewController loadingViewController](
        DeviceSetupViewController *self,
        SEL a2)
{
  DeviceSetupViewController *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x0
  LoadingViewController *loadingViewController; // x8
  LoadingViewController *v6; // x20
  LoadingViewController *v7; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = objc_retain(self);
  objc_sync_enter(v2);
  if ( !v2->_loadingViewController )
  {
    v4 = objc_opt_new(&OBJC_CLASS___LoadingViewController, v3);
    loadingViewController = v2->_loadingViewController;
    v2->_loadingViewController = (LoadingViewController *)v4;
    objc_release(loadingViewController);
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController loadingViewController](v2, "loadingViewController"));
    -[LoadingViewController setAutoShowDelay:](v6, "setAutoShowDelay:", 0.0);
    objc_release(v6);
  }
  objc_sync_exit(v2);
  objc_release(v2);
  v7 = v2->_loadingViewController;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v7);
}