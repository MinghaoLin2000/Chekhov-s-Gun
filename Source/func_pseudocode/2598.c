-[DeviceSettingsContactsViewController isDirty]
bool __cdecl -[DeviceSettingsContactsViewController isDirty](DeviceSettingsContactsViewController *self, SEL a2)
{
  NSButton *v3; // x20
  int v4; // w22
  AMPDeviceSyncPrefs *v5; // x20
  unsigned int v6; // w21
  AMPDeviceSyncPrefs *v7; // x20
  void *v8; // x21
  signed __int64 v9; // x22
  AMPDeviceSyncPrefs *v10; // x20
  unsigned int v11; // w21
  unsigned int v12; // w22
  char v13; // w19
  NSMutableDictionary *v15; // x20
  void *v16; // x21
  AMPDeviceSyncPrefs *v17; // x19
  void *v18; // x20
  unsigned __int8 v19; // w22

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsContactsViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  v4 = (void *)-[NSButton state](v3, "state") != (void *)1;
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v6 = (unsigned int)-[AMPDeviceSyncPrefs syncContacts](v5, "syncContacts");
  objc_release(v5);
  if ( v4 == v6 )
    return 1;
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v8 = -[AMPDeviceSyncPrefs deviceDefaultContactGroup](v7, "deviceDefaultContactGroup");
  v9 = -[DeviceSettingsContactsViewController deviceDefaultContactGroup](self, "deviceDefaultContactGroup");
  objc_release(v7);
  if ( v8 != (void *)v9 )
    return 1;
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v11 = (unsigned int)-[AMPDeviceSyncPrefs deleteExistingContacts](v10, "deleteExistingContacts");
  v12 = -[DeviceSettingsContactsViewController deleteExistingContacts](self, "deleteExistingContacts");
  objc_release(v10);
  if ( v11 != v12 )
    return 1;
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v16 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v15, "objectForKeyedSubscript:", CFSTR("Groups")));
  objc_release(v15);
  v17 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v18 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedContactGroups](v17, "selectedContactGroups"));
  v19 = (unsigned __int8)objc_msgSend(v18, "isEqualToSet:", v16);
  objc_release(v18);
  objc_release(v17);
  v13 = v19 ^ 1;
  objc_release(v16);
  return v13;
}