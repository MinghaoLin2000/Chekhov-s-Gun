-[DeviceModeFinderViewController loadContentView]
void __cdecl -[DeviceModeFinderViewController loadContentView](DeviceModeFinderViewController *self, SEL a2)
{
  NSView *v3; // x20
  NSView *v4; // x20
  DeviceHeaderViewController *v5; // x20
  NSButton *v6; // x21
  LoadingViewController *v7; // x20
  LoadingViewController *v8; // x20
  void *v9; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController contentViewContainer](self, "contentViewContainer"));
  -[NSView setHidden:](v3, "setHidden:", 0LL);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewContainer](self, "footerViewContainer"));
  -[NSView setHidden:](v4, "setHidden:", 1LL);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController headerViewController](self, "headerViewController"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController manageStorageButton](v5, "manageStorageButton"));
  -[NSButton setHidden:](v6, "setHidden:", 1LL);
  objc_release(v6);
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController loadingViewController](self, "loadingViewController"));
  -[LoadingViewController showProgress:](v7, "showProgress:", 0LL);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController loadingViewController](self, "loadingViewController"));
  v9 = objc_retainAutoreleasedReturnValue(-[LoadingViewController view](v8, "view"));
  -[DeviceModeFinderViewController setContentView:](self, "setContentView:", v9);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}