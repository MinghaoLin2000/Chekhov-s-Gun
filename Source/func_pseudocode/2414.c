-[DeviceSoftwareUpdatesViewController clickUpdateButton:]
void __cdecl -[DeviceSoftwareUpdatesViewController clickUpdateButton:](
        DeviceSoftwareUpdatesViewController *self,
        SEL a2,
        id a3)
{
  void *v4; // x21
  unsigned __int64 v5; // x20
  AMPDeviceSoftwareInfo *v6; // x0
  AMPDeviceSoftwareInfo *v7; // x21
  AMPDeviceSoftwareInfo *v8; // x22
  unsigned int v9; // w23
  NSWorkspace *v10; // x21
  __int64 v11; // x22
  __int64 v12; // x21
  AMPDevicesClient *v13; // x20
  AMPDevice *v14; // x19
  NSWorkspace *v15; // x21
  __int64 v16; // x22
  __int64 v17; // x8
  __int64 v18; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(NSApp, "currentEvent", a3));
  v5 = (unsigned __int64)objc_msgSend(v4, "modifierFlags");
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSoftwareUpdatesViewController deviceSoftwareInfo](self, "deviceSoftwareInfo"));
  if ( v6
    && ((v7 = v6,
         v8 = objc_retainAutoreleasedReturnValue(-[DeviceSoftwareUpdatesViewController deviceSoftwareInfo](self, "deviceSoftwareInfo")),
         v9 = (unsigned int)-[AMPDeviceSoftwareInfo hasCheckForUpdates](v8, "hasCheckForUpdates"),
         objc_release(v8),
         objc_release(v7),
         !v9)
     || (v5 & 0x100000) != 0) )
  {
    v15 = objc_retainAutoreleasedReturnValue(+[NSWorkspace sharedWorkspace](&OBJC_CLASS___NSWorkspace, "sharedWorkspace"));
    if ( -[NSWorkspace isVoiceOverEnabled](v15, "isVoiceOverEnabled") )
      v16 = 0x20000LL;
    else
      v16 = 0x80000LL;
    objc_release(v15);
    v17 = 68LL;
    if ( (v16 & v5) == 0 )
      v17 = 4LL;
    v18 = v17 | (v5 >> 13) & 0x80;
    v13 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
    v14 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    -[AMPDevicesClient startSoftwareUpdateForDevice:withOptions:withReply:](
      v13,
      "startSoftwareUpdateForDevice:withOptions:withReply:",
      v14,
      v18,
      &stru_1000B9AC8);
  }
  else
  {
    v10 = objc_retainAutoreleasedReturnValue(+[NSWorkspace sharedWorkspace](&OBJC_CLASS___NSWorkspace, "sharedWorkspace"));
    if ( -[NSWorkspace isVoiceOverEnabled](v10, "isVoiceOverEnabled") )
      v11 = 0x20000LL;
    else
      v11 = 0x80000LL;
    objc_release(v10);
    if ( (v11 & v5) != 0 )
      v12 = 3LL;
    else
      v12 = 2LL;
    v13 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
    v14 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    -[AMPDevicesClient checkForSoftwareUpdatesForDevice:withOptions:withReply:](
      v13,
      "checkForSoftwareUpdatesForDevice:withOptions:withReply:",
      v14,
      v12,
      &stru_1000B9AA8);
  }
  objc_release(v14);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v13);
}