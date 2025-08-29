-[DeviceHeaderViewController incrementDeviceStringMode]
void __cdecl -[DeviceHeaderViewController incrementDeviceStringMode](DeviceHeaderViewController *self, SEL a2)
{
  __int64 v3; // x20
  id v4; // x21
  void *v5; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = -[DeviceHeaderViewController deviceDetailsStringMode](self, "deviceDetailsStringMode");
  v4 = 0LL;
  do
  {
    v5 = v4;
    v3 = (v3 + 1) % 5;
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceDetailsStringForMode:](self, "deviceDetailsStringForMode:", v3));
    objc_release(v5);
  }
  while ( v3 != -[DeviceHeaderViewController deviceDetailsStringMode](self, "deviceDetailsStringMode")
       && !objc_msgSend(v4, "length") );
  -[DeviceHeaderViewController setDeviceDetailsStringMode:](self, "setDeviceDetailsStringMode:", v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}