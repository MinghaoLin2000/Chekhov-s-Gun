-[DeviceBackUpSettingsViewController clickRadioButton:]
void __cdecl -[DeviceBackUpSettingsViewController clickRadioButton:](
        DeviceBackUpSettingsViewController *self,
        SEL a2,
        id a3)
{
  NSButton *v4; // x20
  NSButton *v5; // x21
  _BOOL8 v6; // x22
  _BOOL8 v7; // x23
  NSButton *v8; // x20
  NSButton *v9; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = (NSButton *)objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController backUpToCloudRadio](self, "backUpToCloudRadio"));
  v6 = v5 != v4;
  v7 = v5 == v4;
  objc_release(v4);
  objc_release(v5);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController backUpToCloudRadio](self, "backUpToCloudRadio"));
  -[NSButton setState:](v8, "setState:", v7);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController backUpToComputerRadio](self, "backUpToComputerRadio"));
  -[NSButton setState:](v9, "setState:", v6);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](self, "postDeviceViewDirtinessChangeNotification");
}