-[DeviceBackUpSettingsViewController didStartBackupForDeviceWithIdentifier:]
void __cdecl -[DeviceBackUpSettingsViewController didStartBackupForDeviceWithIdentifier:](
        DeviceBackUpSettingsViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  AMPDevice *v5; // x21
  void *v6; // x22
  unsigned int v7; // w23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v6 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceIdentifier](v5, "deviceIdentifier"));
  v7 = (unsigned int)objc_msgSend(v4, "isEqualToString:", v6);
  objc_release(v4);
  objc_release(v6);
  objc_release(v5);
  if ( v7 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceBackUpSettingsViewController updateButtonStates](self, "updateButtonStates");
  }
}