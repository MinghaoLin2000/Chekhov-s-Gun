-[DeviceUIServiceViewController setDeviceName:]
void __cdecl -[DeviceUIServiceViewController setDeviceName:](DeviceUIServiceViewController *self, SEL a2, id a3)
{
  id v5; // x19
  AMPDevice *v6; // x21
  DeviceViewController *v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  objc_storeStrong((id *)&self->_deviceName, a3);
  v5 = objc_retain(a3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController device](self, "device"));
  -[AMPDevice setDeviceName:](v6, "setDeviceName:", v5);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController currentController](self, "currentController"));
  -[DeviceViewController setDeviceName:](v7, "setDeviceName:", v5);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}