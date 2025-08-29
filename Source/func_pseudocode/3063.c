-[DeviceSetupViewController ejectDevice]
void __cdecl -[DeviceSetupViewController ejectDevice](DeviceSetupViewController *self, SEL a2)
{
  AMPDevicesClient *v3; // x20
  AMPDevice *v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  -[AMPDevicesClient ejectDevice:withReply:](v3, "ejectDevice:withReply:", v4, &stru_1000BA170);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}