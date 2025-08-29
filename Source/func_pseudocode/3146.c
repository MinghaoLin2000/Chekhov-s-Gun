-[DeviceSettingsMusicViewController loadUIFromPrefs]
void __cdecl -[DeviceSettingsMusicViewController loadUIFromPrefs](DeviceSettingsMusicViewController *self, SEL a2)
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
  AMPDeviceSyncPrefs *v12; // x20
  __int64 v13; // x21
  NSButton *v14; // x22
  AMPDeviceSyncPrefs *v15; // x20
  __int64 v16; // x21
  NSButton *v17; // x22
  AMPDeviceSyncPrefs *v18; // x20
  __int64 v19; // x21
  NSButton *v20; // x22
  AMPDeviceSyncPrefs *v21; // x20
  __int64 v22; // x21
  NSButton *v23; // x22
  AMPDeviceInfo *v24; // x20
  NSButton *v25; // x20
  AMPDeviceInfo *v26; // x20
  unsigned __int8 v27; // w21
  NSButton *v28; // x20
  AMPDeviceInfo *v29; // x20
  unsigned __int8 v30; // w21
  NSButton *v31; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( (unsigned int)-[DeviceSettingsMusicViewController isViewLoaded](self, "isViewLoaded") )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v4 = (unsigned int)-[AMPDeviceSyncPrefs updateMusic](v3, "updateMusic");
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
    -[NSButton setState:](v5, "setState:", v4);
    objc_release(v5);
    objc_release(v3);
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v7 = -[AMPDeviceSyncPrefs musicUpdateMode](v6, "musicUpdateMode");
    v8 = v7 == (void *)2;
    v9 = v7 != (void *)2;
    objc_release(v6);
    v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController allRadioButton](self, "allRadioButton"));
    -[NSButton setState:](v10, "setState:", v9);
    objc_release(v10);
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController updateSelectedRadioButton](self, "updateSelectedRadioButton"));
    -[NSButton setState:](v11, "setState:", v8);
    objc_release(v11);
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v13 = (unsigned int)-[AMPDeviceSyncPrefs syncMusicVideosWithMusic](v12, "syncMusicVideosWithMusic");
    v14 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController includeMusicVideosCheckBox](self, "includeMusicVideosCheckBox"));
    -[NSButton setState:](v14, "setState:", v13);
    objc_release(v14);
    objc_release(v12);
    v15 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v16 = (unsigned int)-[AMPDeviceSyncPrefs syncMusicBooklets](v15, "syncMusicBooklets");
    v17 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController includeDigitalBookletsCheckBox](self, "includeDigitalBookletsCheckBox"));
    -[NSButton setState:](v17, "setState:", v16);
    objc_release(v17);
    objc_release(v15);
    v18 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v19 = (unsigned int)-[AMPDeviceSyncPrefs syncVoiceMemosWithMusic](v18, "syncVoiceMemosWithMusic");
    v20 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController includeVoiceMemosCheckBox](self, "includeVoiceMemosCheckBox"));
    -[NSButton setState:](v20, "setState:", v19);
    objc_release(v20);
    objc_release(v18);
    v21 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v22 = (unsigned int)-[AMPDeviceSyncPrefs autofillFreeSpaceWithMusic](v21, "autofillFreeSpaceWithMusic");
    v23 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController autoFillFreeSpaceCheckBox](self, "autoFillFreeSpaceCheckBox"));
    -[NSButton setState:](v23, "setState:", v22);
    objc_release(v23);
    objc_release(v21);
    v24 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    LOBYTE(v22) = (unsigned __int8)-[AMPDeviceInfo supportsMusicVideos](v24, "supportsMusicVideos");
    objc_release(v24);
    if ( (v22 & 1) == 0 )
    {
      v25 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController includeMusicVideosCheckBox](self, "includeMusicVideosCheckBox"));
      -[NSButton setHidden:](v25, "setHidden:", 1LL);
      objc_release(v25);
    }
    v26 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v27 = (unsigned __int8)-[AMPDeviceInfo supportsDigitalBooklets](v26, "supportsDigitalBooklets");
    objc_release(v26);
    if ( (v27 & 1) == 0 )
    {
      v28 = objc_retainAutoreleasedReturnValue(
              -[DeviceSettingsMusicViewController includeDigitalBookletsCheckBox](
                self,
                "includeDigitalBookletsCheckBox"));
      -[NSButton setHidden:](v28, "setHidden:", 1LL);
      objc_release(v28);
    }
    v29 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v30 = (unsigned __int8)-[AMPDeviceInfo supportsVoiceMemos](v29, "supportsVoiceMemos");
    objc_release(v29);
    if ( (v30 & 1) == 0 )
    {
      v31 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController includeVoiceMemosCheckBox](self, "includeVoiceMemosCheckBox"));
      -[NSButton setHidden:](v31, "setHidden:", 1LL);
      objc_release(v31);
    }
    -[DeviceSettingsMusicViewController updateTabView](self, "updateTabView");
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
  }
}