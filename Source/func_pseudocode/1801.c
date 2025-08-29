-[DeviceHeaderViewController setDeviceSyncPrefs:]
void __cdecl -[DeviceHeaderViewController setDeviceSyncPrefs:](DeviceHeaderViewController *self, SEL a2, id a3)
{
  id v4; // x21
  void *v5; // x20
  NSTextField *v6; // x19
  objc_super v7; // [xsp+0h] [xbp-30h] BYREF

  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___DeviceHeaderViewController;
  v4 = objc_retain(a3);
  -[DeviceViewController setDeviceSyncPrefs:](&v7, "setDeviceSyncPrefs:", v4);
  v5 = objc_msgSend(v4, "configured", v7.receiver, v7.super_class);
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceNameLabel](self, "deviceNameLabel"));
  -[NSTextField setEditable:](v6, "setEditable:", v5);
  objc_release(v6);
}