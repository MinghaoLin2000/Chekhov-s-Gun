-[DeviceHeaderViewController setDeviceInfo:]
void __cdecl -[DeviceHeaderViewController setDeviceInfo:](DeviceHeaderViewController *self, SEL a2, id a3)
{
  id v4; // x20
  void *v5; // x21
  objc_super v6; // [xsp+0h] [xbp-30h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___DeviceHeaderViewController;
  -[DeviceViewController setDeviceInfo:](&v6, "setDeviceInfo:", a3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController currentDeviceDetailsString](self, "currentDeviceDetailsString"));
  v5 = objc_msgSend(v4, "length");
  objc_release(v4);
  if ( !v5 )
  {
    -[DeviceHeaderViewController setDeviceDetailsStringMode:](self, "setDeviceDetailsStringMode:", 4LL);
    -[DeviceHeaderViewController incrementDeviceStringMode](self, "incrementDeviceStringMode");
  }
  -[DeviceHeaderViewController updateDeviceDetailsLabelLine](self, "updateDeviceDetailsLabelLine");
}