-[DeviceModeFinderViewController viewDidLoad]
void __cdecl -[DeviceModeFinderViewController viewDidLoad](DeviceModeFinderViewController *self, SEL a2)
{
  void *v3; // x20
  AMPDevice *v4; // x20
  id v5; // x20
  NSView *v6; // x20
  AMPDevice *v7; // x20
  void *v8; // x21
  NSNotificationCenter *v9; // x20
  __CFString **v10; // x8
  char **v11; // x9
  void *v12; // x21
  NSArray *v13; // x22
  NSArray *v14; // x23
  DeviceDragHandler *v15; // x19
  objc_super v16; // [xsp+0h] [xbp-40h] BYREF

  v16.receiver = self;
  v16.super_class = (Class)&OBJC_CLASS___DeviceModeFinderViewController;
  -[DeviceModeFinderViewController viewDidLoad](&v16, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController view](self, "view"));
  objc_msgSend(v3, "setTranslatesAutoresizingMaskIntoConstraints:", 0LL);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  objc_release(v4);
  if ( v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController devicesClient](self, "devicesClient"));
    objc_msgSend(v5, "addListener:", self);
    objc_release(v5);
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController contentViewContainer](self, "contentViewContainer"));
    -[NSView setTranslatesAutoresizingMaskIntoConstraints:](v6, "setTranslatesAutoresizingMaskIntoConstraints:", 0LL);
    objc_release(v6);
    -[DeviceModeFinderViewController loadHeaderViewController](self, "loadHeaderViewController");
    -[DeviceModeFinderViewController loadFooterViewController](self, "loadFooterViewController");
    -[DeviceModeFinderViewController loadSetupViewController](self, "loadSetupViewController");
    -[DeviceModeFinderViewController loadFinderTabContainerViewController](self, "loadFinderTabContainerViewController");
    -[DeviceModeFinderViewController loadContentView](self, "loadContentView");
    if ( -[DeviceModeFinderViewController isEraseInProgress](self, "isEraseInProgress") )
    {
      -[DeviceModeFinderViewController loadEraseProgressViewController](self, "loadEraseProgressViewController");
    }
    else if ( -[DeviceModeFinderViewController isRestoreFromBackupInProgress](self, "isRestoreFromBackupInProgress") )
    {
      -[DeviceModeFinderViewController loadRestoreFromBackupProgressViewController](
        self,
        "loadRestoreFromBackupProgressViewController");
    }
    else
    {
      v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
      v8 = -[AMPDevice deviceMode](v7, "deviceMode");
      objc_release(v7);
      if ( v8 == (void *)7 )
        -[DeviceModeFinderViewController loadEraseModeViewController](self, "loadEraseModeViewController");
      else
        -[DeviceModeFinderViewController loadSettingsFromCurrentDevice](self, "loadSettingsFromCurrentDevice");
    }
    v9 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
    -[NSNotificationCenter addObserver:selector:name:object:](
      v9,
      "addObserver:selector:name:object:",
      self,
      "deviceFinderTabDidChange:",
      CFSTR("DeviceFinderTabDidChangeNotification"),
      0LL);
    if ( -[DeviceViewController isRawDeviceMode](self, "isRawDeviceMode") )
    {
      v10 = &off_1000B9A70;
      v11 = &selRef_handleDeviceSoftwareUpdatesViewLoadingCompleteNotification_;
    }
    else
    {
      -[NSNotificationCenter addObserver:selector:name:object:](
        v9,
        "addObserver:selector:name:object:",
        self,
        "deviceViewDirtinessDidChange:",
        CFSTR("DeviceViewDirtinessDidChangeNotification"),
        0LL);
      v10 = &off_1000BA0A8;
      v11 = &selRef_deviceConfigureDidComplete_;
    }
    -[NSNotificationCenter addObserver:selector:name:object:](
      v9,
      "addObserver:selector:name:object:",
      self,
      *v11,
      *v10,
      0LL);
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController view](self, "view"));
    v13 = objc_retainAutoreleasedReturnValue(+[NSFilePromiseReceiver readableDraggedTypes](&OBJC_CLASS___NSFilePromiseReceiver, "readableDraggedTypes"));
    v14 = objc_retainAutoreleasedReturnValue(-[NSArray arrayByAddingObject:](v13, "arrayByAddingObject:", NSPasteboardTypeFileURL));
    objc_release(v13);
    objc_msgSend(v12, "registerForDraggedTypes:", v14);
    v15 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController deviceDragHandler](self, "deviceDragHandler"));
    objc_msgSend(v12, "setDeviceDragHandler:", v15);
    objc_release(v15);
    objc_release(v14);
    objc_release(v12);
    objc_release(v9);
  }
}