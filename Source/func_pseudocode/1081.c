-[DeviceSettingsPhotosViewController viewDidLoad]
void __cdecl -[DeviceSettingsPhotosViewController viewDidLoad](DeviceSettingsPhotosViewController *self, SEL a2)
{
  NSNotificationCenter *v3; // x20
  NSNotificationCenter *v4; // x20
  NSProgressIndicator *v5; // x20
  AMPDevice *v6; // x20
  void *v7; // x21
  NSTextField *v8; // x20
  AMPDeviceInfo *v9; // x20
  __int64 v10; // x21
  NSView *v11; // x22
  NSButton *v12; // x20
  NSButton *v13; // x20
  objc_super v14; // [xsp+0h] [xbp-30h] BYREF

  v14.receiver = self;
  v14.super_class = (Class)&OBJC_CLASS___DeviceSettingsPhotosViewController;
  -[DeviceSettingsViewController viewDidLoad](&v14, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
  -[NSNotificationCenter addObserver:selector:name:object:](
    v3,
    "addObserver:selector:name:object:",
    self,
    "deviceViewPhotoSyncDeferredErrorNotification:",
    CFSTR("DeviceViewPhotoSyncDeferredErrorNotification"),
    0LL);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
  -[NSNotificationCenter addObserver:selector:name:object:](
    v4,
    "addObserver:selector:name:object:",
    self,
    "handleWindowDidBecomeKeyNotification:",
    NSWindowDidBecomeKeyNotification,
    0LL);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController progressIndicator](self, "progressIndicator"));
  -[NSProgressIndicator setHidden:](v5, "setHidden:", 1LL);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v7 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v6, "deviceName"));
  -[DeviceViewController setDeviceName:](self, "setDeviceName:", v7);
  objc_release(v7);
  objc_release(v6);
  if ( -[DeviceSettingsPhotosViewController isSharing](self, "isSharing") )
  {
    -[DeviceSettingsPhotosViewController setupAsSharingPanel](self, "setupAsSharingPanel");
  }
  else
  {
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController syncOntoTextField](self, "syncOntoTextField"));
    -[NSTextField setHidden:](v8, "setHidden:", 1LL);
    objc_release(v8);
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v10 = (unsigned int)-[AMPDeviceInfo supportsCameraRoll](v9, "supportsCameraRoll") ^ 1;
    v11 = objc_retainAutoreleasedReturnValue(
            -[DeviceSettingsPhotosViewController photoSourceExplanationContainingView](
              self,
              "photoSourceExplanationContainingView"));
    -[NSView setHidden:](v11, "setHidden:", v10);
    objc_release(v11);
    objc_release(v9);
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController sharingOKButton](self, "sharingOKButton"));
    -[NSButton removeFromSuperview](v12, "removeFromSuperview");
    objc_release(v12);
    v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController sharingCancelButton](self, "sharingCancelButton"));
    -[NSButton removeFromSuperview](v13, "removeFromSuperview");
    objc_release(v13);
  }
  -[DeviceSettingsPhotosViewController cacheTabViewItems](self, "cacheTabViewItems");
  -[DeviceSettingsPhotosViewController setupSourcePopUpButton](self, "setupSourcePopUpButton");
  -[DeviceSettingsPhotosViewController setupSourceExplanationStringWithOptionalOptimizeStorageExplanation:](
    self,
    "setupSourceExplanationStringWithOptionalOptimizeStorageExplanation:",
    0LL);
  -[DeviceSettingsPhotosViewController loadUIFromPrefs](self, "loadUIFromPrefs");
}