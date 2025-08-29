-[DeviceViewController isRawDeviceMode]
bool __cdecl -[DeviceViewController isRawDeviceMode](DeviceViewController *self, SEL a2)
{
  AMPDevice *v3; // x19
  AMPDevice *v4; // x20
  bool v5; // w22
  AMPDevice *v6; // x21
  AMPDevice *v7; // x23
  AMPDevice *v8; // x24

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  if ( v3 )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    if ( -[AMPDevice deviceMode](v4, "deviceMode") == (void *)3 )
    {
      v5 = 1;
    }
    else
    {
      v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
      if ( -[AMPDevice deviceMode](v6, "deviceMode") == (void *)4 )
      {
        v5 = 1;
      }
      else
      {
        v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
        if ( -[AMPDevice deviceMode](v7, "deviceMode") == (void *)5 )
        {
          v5 = 1;
        }
        else
        {
          v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
          v5 = -[AMPDevice deviceMode](v8, "deviceMode") == (void *)6;
          objc_release(v8);
        }
        objc_release(v7);
      }
      objc_release(v6);
    }
    objc_release(v4);
  }
  else
  {
    v5 = 0;
  }
  objc_release(v3);
  return v5;
}