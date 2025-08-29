-[DeviceSettingsBooksViewController loadUIFromPrefs]
void __cdecl -[DeviceSettingsBooksViewController loadUIFromPrefs](DeviceSettingsBooksViewController *self, SEL a2)
{
  AMPDeviceSyncPrefs *v3; // x20
  __int64 v4; // x21
  NSButton *v5; // x22
  AMPDeviceSyncPrefs *v6; // x20
  void *v7; // x0
  _BOOL8 v8; // x21
  _BOOL8 v9; // x22
  NSButton *v10; // x20
  NSButton *v11; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( (unsigned int)-[DeviceSettingsBooksViewController isViewLoaded](self, "isViewLoaded") )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v4 = (unsigned int)-[AMPDeviceSyncPrefs updateBooks](v3, "updateBooks");
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsBooksViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
    -[NSButton setState:](v5, "setState:", v4);
    objc_release(v5);
    objc_release(v3);
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v7 = -[AMPDeviceSyncPrefs bookUpdateMode](v6, "bookUpdateMode");
    v8 = v7 != (void *)1;
    v9 = v7 == (void *)1;
    objc_release(v6);
    v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsBooksViewController allRadioButton](self, "allRadioButton"));
    -[NSButton setState:](v10, "setState:", v9);
    objc_release(v10);
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsBooksViewController updateSelectedRadioButton](self, "updateSelectedRadioButton"));
    -[NSButton setState:](v11, "setState:", v8);
    objc_release(v11);
    -[DeviceSettingsBooksViewController updateTabView](self, "updateTabView");
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
  }
}