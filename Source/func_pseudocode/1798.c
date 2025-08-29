-[DeviceHeaderViewController setDevice:]
void __cdecl -[DeviceHeaderViewController setDevice:](DeviceHeaderViewController *self, SEL a2, id a3)
{
  id v4; // x20
  void *v5; // x21
  NSImageView *v6; // x22
  void *v7; // x21
  void *v8; // x21
  NSTextField *v9; // x22
  void *v10; // x21
  void *v11; // x21
  objc_super v12; // [xsp+0h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  v12.receiver = self;
  v12.super_class = (Class)&OBJC_CLASS___DeviceHeaderViewController;
  -[DeviceViewController setDevice:](&v12, "setDevice:", v4);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "deviceImage"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceImageView](self, "deviceImageView"));
  -[NSImageView setImage:](v6, "setImage:", v5);
  objc_release(v6);
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "deviceName"));
  objc_release(v7);
  if ( v7 )
  {
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "deviceName"));
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceNameLabel](self, "deviceNameLabel"));
    -[NSTextField setStringValue:](v9, "setStringValue:", v8);
    objc_release(v9);
    objc_release(v8);
  }
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "totalDataCapacity"));
  objc_release(v10);
  if ( v10 )
  {
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "totalDataCapacity"));
    -[DeviceHeaderViewController setDeviceTotalDataCapacity:](self, "setDeviceTotalDataCapacity:", v11);
    objc_release(v11);
  }
  -[DeviceHeaderViewController updateDeviceDetailsLabelLine](self, "updateDeviceDetailsLabelLine");
  -[DeviceHeaderViewController fetchDeviceDetails](self, "fetchDeviceDetails");
  objc_release(v4);
}