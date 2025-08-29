-[DeviceOptionsViewController clickResetWarningsButton:]
void __cdecl -[DeviceOptionsViewController clickResetWarningsButton:](DeviceOptionsViewController *self, SEL a2, id a3)
{
  AMPDevicesClient *v4; // x20
  AMPDevice *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient", a3));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  -[AMPDevicesClient resetWarningsForDevice:withReply:](v4, "resetWarningsForDevice:withReply:", v5, &stru_1000B9FE8);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}