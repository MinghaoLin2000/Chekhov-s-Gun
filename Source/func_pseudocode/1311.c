-[DeviceModeMediaViewController viewDidLoad]
void __cdecl -[DeviceModeMediaViewController viewDidLoad](DeviceModeMediaViewController *self, SEL a2)
{
  __int64 v3; // x1
  void *v4; // x20
  LoadingViewController *v5; // x20
  void *v6; // x21
  NSDistributedNotificationCenter *v7; // x20
  objc_super v8; // [xsp+0h] [xbp-30h] BYREF

  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___DeviceModeMediaViewController;
  -[DeviceModeMediaViewController viewDidLoad](&v8, "viewDidLoad");
  -[DeviceModeMediaViewController setAllowDevicesClientEventsUI:](self, "setAllowDevicesClientEventsUI:", 0LL);
  v4 = (void *)objc_opt_new(&OBJC_CLASS___LoadingViewController, v3);
  -[DeviceModeMediaViewController setLoadingViewController:](self, "setLoadingViewController:", v4);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController loadingViewController](self, "loadingViewController"));
  v6 = objc_retainAutoreleasedReturnValue(-[LoadingViewController view](v5, "view"));
  -[DeviceModeMediaViewController setContentView:](self, "setContentView:", v6);
  objc_release(v6);
  objc_release(v5);
  -[DeviceModeMediaViewController loadHeaderViewController](self, "loadHeaderViewController");
  -[DeviceModeMediaViewController loadFooterViewController](self, "loadFooterViewController");
  -[DeviceModeMediaViewController loadSettingsFromCurrentDevice](self, "loadSettingsFromCurrentDevice");
  v7 = objc_retainAutoreleasedReturnValue(
         +[NSDistributedNotificationCenter defaultCenter](
           &OBJC_CLASS___NSDistributedNotificationCenter,
           "defaultCenter"));
  -[NSDistributedNotificationCenter addObserver:selector:name:object:](
    v7,
    "addObserver:selector:name:object:",
    self,
    "deviceLibraryChangedNotification:",
    CFSTR("com.apple.AMPDevicesAgent.libraryChanged"),
    0LL);
  objc_release(v7);
}