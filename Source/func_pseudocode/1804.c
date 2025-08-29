-[DeviceHeaderViewController currentDeviceDetailsString]
id __cdecl -[DeviceHeaderViewController currentDeviceDetailsString](DeviceHeaderViewController *self, SEL a2)
{
  signed __int64 v3; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = -[DeviceHeaderViewController deviceDetailsStringMode](self, "deviceDetailsStringMode");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[DeviceHeaderViewController deviceDetailsStringForMode:](self, "deviceDetailsStringForMode:", v3);
}