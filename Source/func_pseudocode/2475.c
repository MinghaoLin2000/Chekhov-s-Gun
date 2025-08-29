-[DeviceBackUpSettingsViewController deviceInfoDidChange]
void __cdecl -[DeviceBackUpSettingsViewController deviceInfoDidChange](
        DeviceBackUpSettingsViewController *self,
        SEL a2)
{
  AMPDeviceInfo *v3; // x20
  __int64 v4; // x21
  NSButton *v5; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v4 = (unsigned int)-[AMPDeviceInfo willEncryptBackups](v3, "willEncryptBackups");
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController encryptBackupCheckBox](self, "encryptBackupCheckBox"));
  -[NSButton setState:](v5, "setState:", v4);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}