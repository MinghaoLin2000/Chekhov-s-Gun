-[DeviceModeMediaViewController didChangeDeviceInfo:forDeviceWithIdentifier:]
void __cdecl -[DeviceModeMediaViewController didChangeDeviceInfo:forDeviceWithIdentifier:](
        DeviceModeMediaViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x21
  AMPDevice *v8; // x22
  void *v9; // x23
  unsigned int v10; // w24
  AMPDeviceInfo *v11; // x21
  unsigned __int8 v12; // w22
  DeviceHeaderViewController *v13; // x21
  DeviceHeaderViewController *v14; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v9 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceIdentifier](v8, "deviceIdentifier"));
  v10 = (unsigned int)objc_msgSend(v7, "isEqualToString:", v9);
  objc_release(v7);
  objc_release(v9);
  objc_release(v8);
  if ( v10 )
  {
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v12 = (unsigned __int8)-[AMPDeviceInfo isEqual:](v11, "isEqual:", v6);
    objc_release(v11);
    if ( (v12 & 1) == 0 )
    {
      -[DeviceViewController setDeviceInfo:](self, "setDeviceInfo:", v6);
      v13 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController headerViewController](self, "headerViewController"));
      -[DeviceHeaderViewController setDeviceInfo:](v13, "setDeviceInfo:", v6);
      objc_release(v13);
      v14 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController headerViewController](self, "headerViewController"));
      -[DeviceHeaderViewController updateDeviceDetailsLabelLine](v14, "updateDeviceDetailsLabelLine");
      objc_release(v14);
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}