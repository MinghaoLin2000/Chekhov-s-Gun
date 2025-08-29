-[DeviceSettingsViewController viewDidLoad]
void __cdecl -[DeviceSettingsViewController viewDidLoad](DeviceSettingsViewController *self, SEL a2)
{
  id v3; // x20
  id v4; // x20
  id v5; // x20
  id v6; // x20
  AMPDevice *v7; // x20
  void *v8; // x21
  NSNotificationCenter *v9; // x20
  objc_super v10; // [xsp+0h] [xbp-30h] BYREF

  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___DeviceSettingsViewController;
  -[DeviceSettingsViewController viewDidLoad](&v10, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(+[NSImage glyphImageNamed:](&OBJC_CLASS___NSImage, "glyphImageNamed:", CFSTR("music.note.list")));
  -[DeviceSettingsViewController setPlaylistImage:](self, "setPlaylistImage:", v3);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSImage glyphImageNamed:](&OBJC_CLASS___NSImage, "glyphImageNamed:", CFSTR("gearshape.fill")));
  -[DeviceSettingsViewController setSmartPlaylistImage:](self, "setSmartPlaylistImage:", v4);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(+[NSImage glyphImageNamed:](&OBJC_CLASS___NSImage, "glyphImageNamed:", CFSTR("genius")));
  -[DeviceSettingsViewController setGeniusPlaylistImage:](self, "setGeniusPlaylistImage:", v5);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(+[NSImage glyphImageNamed:](&OBJC_CLASS___NSImage, "glyphImageNamed:", CFSTR("folder")));
  -[DeviceSettingsViewController setFolderImage:](self, "setFolderImage:", v6);
  objc_release(v6);
  -[DeviceSettingsViewController loadModelAndUpdateUIAsync](self, "loadModelAndUpdateUIAsync");
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v8 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v7, "deviceName"));
  -[DeviceViewController setDeviceName:](self, "setDeviceName:", v8);
  objc_release(v8);
  objc_release(v7);
  -[DeviceSettingsViewController updateSyncOntoText](self, "updateSyncOntoText");
  v9 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
  -[NSNotificationCenter addObserver:selector:name:object:](
    v9,
    "addObserver:selector:name:object:",
    self,
    "deviceViewManualManageOptionDidChangeNotification:",
    CFSTR("DeviceViewManualManageOptionDidChangeNotification"),
    0LL);
  objc_release(v9);
  -[DeviceSettingsViewController setupTabView](self, "setupTabView");
}