-[DeviceFooterViewController setDevice:]
void __cdecl -[DeviceFooterViewController setDevice:](DeviceFooterViewController *self, SEL a2, id a3)
{
  AMPDevice *v4; // x19
  AMPDevice *v5; // x21
  AMPDevicesClient *v6; // x21
  objc_super v7; // [xsp+0h] [xbp-40h] BYREF
  objc_super v8; // [xsp+10h] [xbp-30h] BYREF

  v4 = (AMPDevice *)objc_retain(a3);
  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___DeviceFooterViewController;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](&v8, "device"));
  objc_release(v5);
  if ( v5 != v4 )
  {
    v7.receiver = self;
    v7.super_class = (Class)&OBJC_CLASS___DeviceFooterViewController;
    -[DeviceViewController setDevice:](&v7, "setDevice:", v4);
    -[DeviceFooterViewController updateCapacityTotals](self, "updateCapacityTotals");
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
    objc_release(v6);
    if ( v6 )
      -[DeviceFooterViewController updateCapacityBar](self, "updateCapacityBar");
  }
  objc_release(v4);
}