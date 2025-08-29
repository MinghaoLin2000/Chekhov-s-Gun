-[DeviceHeaderViewController loadDeviceDetailsMenu]
void __cdecl -[DeviceHeaderViewController loadDeviceDetailsMenu](DeviceHeaderViewController *self, SEL a2)
{
  id v3; // x20
  DeviceAccessibleTextField *v4; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_alloc_init((Class)&OBJC_CLASS___NSMenu);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceDetailsLabel](self, "deviceDetailsLabel"));
  -[DeviceAccessibleTextField setMenu:](v4, "setMenu:", v3);
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceHeaderViewController updateDeviceDetailsMenu](self, "updateDeviceDetailsMenu");
}