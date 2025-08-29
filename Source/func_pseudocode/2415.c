-[DeviceSoftwareUpdatesViewController clickRestoreButton:]
void __cdecl -[DeviceSoftwareUpdatesViewController clickRestoreButton:](
        DeviceSoftwareUpdatesViewController *self,
        SEL a2,
        id a3)
{
  void *v4; // x20
  unsigned __int64 v5; // x21
  NSWorkspace *v6; // x20
  unsigned int v7; // w0
  __int64 v8; // x8
  _BOOL4 v9; // w21
  __int64 v10; // x20
  AMPDevicesClient *v11; // x21
  AMPDevice *v12; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(NSApp, "currentEvent", a3));
  v5 = (unsigned __int64)objc_msgSend(v4, "modifierFlags");
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(+[NSWorkspace sharedWorkspace](&OBJC_CLASS___NSWorkspace, "sharedWorkspace"));
  v7 = -[NSWorkspace isVoiceOverEnabled](v6, "isVoiceOverEnabled");
  v8 = 0x80000LL;
  if ( v7 )
    v8 = 0x20000LL;
  v9 = (v8 & v5) != 0;
  objc_release(v6);
  v10 = 16LL * v9;
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  -[AMPDevicesClient startSoftwareRestoreForDevice:withOptions:withReply:](
    v11,
    "startSoftwareRestoreForDevice:withOptions:withReply:",
    v12,
    v10,
    &stru_1000B9AE8);
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v11);
}