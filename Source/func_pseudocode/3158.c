-[DeviceSettingsMusicViewController setTopViewEnabled:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[DeviceSettingsMusicViewController setTopViewEnabled:](
        DeviceSettingsMusicViewController *self,
        SEL a2,
        bool a3)
{
  __int64 v3; // x20
  NSButton *v5; // x21
  NSButton *v6; // x21
  NSButton *v7; // x21
  NSButton *v8; // x21
  NSButton *v9; // x21
  NSButton *v10; // x21
  void *v11; // x22
  NSButton *v12; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = a3;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController allRadioButton](self, "allRadioButton"));
  -[NSButton setEnabled:](v5, "setEnabled:", v3);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController updateSelectedRadioButton](self, "updateSelectedRadioButton"));
  -[NSButton setEnabled:](v6, "setEnabled:", v3);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController includeMusicVideosCheckBox](self, "includeMusicVideosCheckBox"));
  -[NSButton setEnabled:](v7, "setEnabled:", v3);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController includeDigitalBookletsCheckBox](self, "includeDigitalBookletsCheckBox"));
  -[NSButton setEnabled:](v8, "setEnabled:", v3);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController includeVoiceMemosCheckBox](self, "includeVoiceMemosCheckBox"));
  -[NSButton setEnabled:](v9, "setEnabled:", v3);
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController allRadioButton](self, "allRadioButton"));
  v11 = -[NSButton state](v10, "state");
  objc_release(v10);
  if ( v11 == (void *)1 )
    v3 = 0LL;
  else
    v3 = (unsigned int)v3;
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController autoFillFreeSpaceCheckBox](self, "autoFillFreeSpaceCheckBox"));
  -[NSButton setEnabled:](v12, "setEnabled:", v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v12);
}