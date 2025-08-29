-[DeviceSetupViewController loadContentView]
void __cdecl -[DeviceSetupViewController loadContentView](DeviceSetupViewController *self, SEL a2)
{
  NSView *v3; // x20
  AMPDeviceSyncPrefs *v4; // x20
  unsigned int v5; // w21
  NSProgress *v6; // x20
  ProgressViewController *v7; // x21
  ProgressViewController *v8; // x0
  LoadingViewController *v9; // x20
  ProgressViewController *v10; // x20
  void *v11; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController contentViewContainer](self, "contentViewContainer"));
  -[NSView setHidden:](v3, "setHidden:", 0LL);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v5 = (unsigned int)-[AMPDeviceSyncPrefs needsRestoreFromBackup](v4, "needsRestoreFromBackup");
  objc_release(v4);
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(+[NSProgress progressWithTotalUnitCount:](&OBJC_CLASS___NSProgress, "progressWithTotalUnitCount:", -1LL));
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController progressViewController](self, "progressViewController"));
    -[ProgressViewController setProgress:](v7, "setProgress:", v6);
    objc_release(v7);
    objc_release(v6);
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController progressViewController](self, "progressViewController"));
  }
  else
  {
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController loadingViewController](self, "loadingViewController"));
    -[LoadingViewController showProgress:](v9, "showProgress:", 0LL);
    objc_release(v9);
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController loadingViewController](self, "loadingViewController"));
  }
  v10 = v8;
  v11 = objc_retainAutoreleasedReturnValue(-[ProgressViewController view](v8, "view"));
  -[DeviceSetupViewController setContentView:](self, "setContentView:", v11);
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v10);
}