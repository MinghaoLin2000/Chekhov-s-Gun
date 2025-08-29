-[DeviceSettingsContactsViewController loadUIFromPrefs]
void __cdecl -[DeviceSettingsContactsViewController loadUIFromPrefs](
        DeviceSettingsContactsViewController *self,
        SEL a2)
{
  AMPDeviceSyncPrefs *v3; // x20
  __int64 v4; // x21
  NSButton *v5; // x22
  NSMutableDictionary *v6; // x20
  void *v7; // x21
  void *v8; // x0
  _BOOL8 v9; // x22
  _BOOL8 v10; // x23
  NSButton *v11; // x20
  NSButton *v12; // x20
  AMPDeviceSyncPrefs *v13; // x20
  AMPDeviceSyncPrefs *v14; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( (unsigned int)-[DeviceSettingsContactsViewController isViewLoaded](self, "isViewLoaded") )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v4 = (unsigned int)-[AMPDeviceSyncPrefs syncContacts](v3, "syncContacts");
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsContactsViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
    -[NSButton setState:](v5, "setState:", v4);
    objc_release(v5);
    objc_release(v3);
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
    v7 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v6, "objectForKeyedSubscript:", CFSTR("Groups")));
    v8 = objc_msgSend(v7, "count");
    v9 = v8 != 0LL;
    v10 = v8 == 0LL;
    objc_release(v7);
    objc_release(v6);
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsContactsViewController allRadioButton](self, "allRadioButton"));
    -[NSButton setState:](v11, "setState:", v10);
    objc_release(v11);
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsContactsViewController updateSelectedRadioButton](self, "updateSelectedRadioButton"));
    -[NSButton setState:](v12, "setState:", v9);
    objc_release(v12);
    v13 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    -[DeviceSettingsContactsViewController setDeviceDefaultContactGroup:](
      self,
      "setDeviceDefaultContactGroup:",
      -[AMPDeviceSyncPrefs deviceDefaultContactGroup](v13, "deviceDefaultContactGroup"));
    objc_release(v13);
    v14 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    -[DeviceSettingsContactsViewController setDeleteExistingContacts:](
      self,
      "setDeleteExistingContacts:",
      -[AMPDeviceSyncPrefs deleteExistingContacts](v14, "deleteExistingContacts"));
    objc_release(v14);
    -[DeviceSettingsContactsViewController updateDefaultContactGroupUI](self, "updateDefaultContactGroupUI");
    -[DeviceSettingsContactsViewController updateTabView](self, "updateTabView");
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
  }
}