-[DeviceBackUpSettingsViewController loadUIFromPrefs]
void __cdecl -[DeviceBackUpSettingsViewController loadUIFromPrefs](DeviceBackUpSettingsViewController *self, SEL a2)
{
  id v3; // x20
  NSButton *v4; // x21
  id v5; // x21
  NSButton *v6; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( (unsigned int)-[DeviceBackUpSettingsViewController isViewLoaded](self, "isViewLoaded") )
  {
    v3 = objc_retainAutoreleasedReturnValue(
           -[DeviceViewController deviceStringForStringParameterizedKey:](
             self,
             "deviceStringForStringParameterizedKey:",
             CFSTR("iCloudBackup %@")));
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController backUpToCloudRadio](self, "backUpToCloudRadio"));
    -[NSButton setTitle:](v4, "setTitle:", v3);
    objc_release(v4);
    v5 = objc_retainAutoreleasedReturnValue(
           -[DeviceViewController deviceStringForStringParameterizedKey:](
             self,
             "deviceStringForStringParameterizedKey:",
             CFSTR("ComputerBackup %@")));
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController backUpToComputerRadio](self, "backUpToComputerRadio"));
    -[NSButton setTitle:](v6, "setTitle:", v5);
    objc_release(v6);
    -[DeviceBackUpSettingsViewController deviceInfoDidChange](self, "deviceInfoDidChange");
    -[DeviceBackUpSettingsViewController deviceSyncPrefsDidChange](self, "deviceSyncPrefsDidChange");
    -[DeviceBackUpSettingsViewController updateButtonStates](self, "updateButtonStates");
    objc_release(v5);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v3);
  }
}