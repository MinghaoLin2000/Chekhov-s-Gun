-[DeviceModeMediaViewController showSyncSettings:]
void __cdecl -[DeviceModeMediaViewController showSyncSettings:](DeviceModeMediaViewController *self, SEL a2, id a3)
{
  id v4; // x20
  AMPDevice *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController devicesClient](self, "devicesClient", a3));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  objc_msgSend(v4, "revealDeviceInFinder:withReply:", v5, &stru_1000B9450);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}