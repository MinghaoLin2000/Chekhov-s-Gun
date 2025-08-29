-[DeviceHeaderViewController viewDidLoad]
void __cdecl -[DeviceHeaderViewController viewDidLoad](DeviceHeaderViewController *self, SEL a2)
{
  NSTextField *v3; // x20
  NSTextField *v4; // x20
  NSButton *v5; // x20
  NSButton *v6; // x20
  NSButton *v7; // x20
  AMPDevice *v8; // x20
  void *v9; // x21
  NSImageView *v10; // x22
  AMPDevice *v11; // x20
  void *v12; // x21
  AMPDevice *v13; // x20
  void *v14; // x21
  NSTextField *v15; // x22
  NSTextField *v16; // x20
  DeviceAccessibleTextField *v17; // x20
  AMPDevice *v18; // x20
  void *v19; // x21
  void *v20; // x20
  DeviceAccessibleTextField *v21; // x22
  DeviceAccessibleTextField *v22; // x22
  DeviceAccessibleTextField *v23; // x22
  objc_super v24; // [xsp+0h] [xbp-30h] BYREF

  v24.receiver = self;
  v24.super_class = (Class)&OBJC_CLASS___DeviceHeaderViewController;
  -[DeviceHeaderViewController viewDidLoad](&v24, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceNameLabel](self, "deviceNameLabel"));
  -[NSTextField setEditable:](v3, "setEditable:", 0LL);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceNameLabel](self, "deviceNameLabel"));
  -[NSTextField setDelegate:](v4, "setDelegate:", self);
  objc_release(v4);
  -[DeviceHeaderViewController setDeviceBatteryInfo:](self, "setDeviceBatteryInfo:", 0LL);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController syncSettingsButton](self, "syncSettingsButton"));
  -[NSButton setEnabled:](v5, "setEnabled:", 0LL);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController syncButton](self, "syncButton"));
  -[NSButton setEnabled:](v6, "setEnabled:", 0LL);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController manageStorageButton](self, "manageStorageButton"));
  -[NSButton setEnabled:](v7, "setEnabled:", 0LL);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v9 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceImage](v8, "deviceImage"));
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceImageView](self, "deviceImageView"));
  -[NSImageView setImage:](v10, "setImage:", v9);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v12 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v11, "deviceName"));
  objc_release(v12);
  objc_release(v11);
  if ( v12 )
  {
    v13 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    v14 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v13, "deviceName"));
    v15 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceNameLabel](self, "deviceNameLabel"));
    -[NSTextField setStringValue:](v15, "setStringValue:", v14);
    objc_release(v15);
    objc_release(v14);
    objc_release(v13);
  }
  v16 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceNameLabel](self, "deviceNameLabel"));
  -[NSTextField setAccessibilityIdentifier:](v16, "setAccessibilityIdentifier:", CFSTR("Device Name"));
  objc_release(v16);
  v17 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceDetailsLabel](self, "deviceDetailsLabel"));
  -[DeviceAccessibleTextField setAccessibilityIdentifier:](
    v17,
    "setAccessibilityIdentifier:",
    CFSTR("Device Attributes"));
  objc_release(v17);
  v18 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v19 = objc_retainAutoreleasedReturnValue(-[AMPDevice totalDataCapacity](v18, "totalDataCapacity"));
  -[DeviceHeaderViewController setDeviceTotalDataCapacity:](self, "setDeviceTotalDataCapacity:", v19);
  objc_release(v19);
  objc_release(v18);
  v20 = objc_msgSend(
          objc_alloc((Class)&OBJC_CLASS___NSClickGestureRecognizer),
          "initWithTarget:action:",
          self,
          "clickDeviceDetailsStringGestureRecognizer:");
  v21 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceDetailsLabel](self, "deviceDetailsLabel"));
  -[DeviceAccessibleTextField addGestureRecognizer:](v21, "addGestureRecognizer:", v20);
  objc_release(v21);
  v22 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceDetailsLabel](self, "deviceDetailsLabel"));
  -[DeviceAccessibleTextField setTarget:](v22, "setTarget:", self);
  objc_release(v22);
  v23 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceDetailsLabel](self, "deviceDetailsLabel"));
  -[DeviceAccessibleTextField setAction:](v23, "setAction:", "clickDeviceDetailsStringGestureRecognizer:");
  objc_release(v23);
  -[DeviceHeaderViewController setDeviceDetailsStringMode:](self, "setDeviceDetailsStringMode:", 4LL);
  -[DeviceHeaderViewController incrementDeviceStringMode](self, "incrementDeviceStringMode");
  -[DeviceHeaderViewController loadDeviceDetailsMenu](self, "loadDeviceDetailsMenu");
  -[DeviceHeaderViewController updateDeviceDetailsLabelLine](self, "updateDeviceDetailsLabelLine");
  -[DeviceHeaderViewController fetchDeviceDetails](self, "fetchDeviceDetails");
  objc_release(v20);
}