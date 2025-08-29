-[DeviceSettingsBooksViewController areBooksDirty]
bool __cdecl -[DeviceSettingsBooksViewController areBooksDirty](DeviceSettingsBooksViewController *self, SEL a2)
{
  NSButton *v3; // x20
  int v4; // w22
  AMPDeviceSyncPrefs *v5; // x20
  unsigned int v6; // w21
  NSButton *v7; // x20
  char v8; // w21
  __int64 v9; // x23
  AMPDeviceSyncPrefs *v10; // x20
  void *v11; // x22
  NSMutableDictionary *v12; // x21
  void *v13; // x22
  NSMutableSet *v14; // x20
  NSMutableDictionary *v15; // x21
  void *v16; // x22
  AMPDeviceSyncPrefs *v17; // x19
  void *v18; // x21

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsBooksViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  v4 = (void *)-[NSButton state](v3, "state") != (void *)1;
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v6 = (unsigned int)-[AMPDeviceSyncPrefs updateBooks](v5, "updateBooks");
  objc_release(v5);
  if ( v4 == v6 )
    return 1;
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsBooksViewController allRadioButton](self, "allRadioButton"));
  v8 = 1;
  if ( (void *)-[NSButton state](v7, "state") == (void *)1 )
    v9 = 1LL;
  else
    v9 = 2LL;
  objc_release(v7);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v11 = -[AMPDeviceSyncPrefs bookUpdateMode](v10, "bookUpdateMode");
  objc_release(v10);
  if ( v11 == (void *)v9 )
  {
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
    v13 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v12, "objectForKeyedSubscript:", CFSTR("Books")));
    v14 = objc_retainAutoreleasedReturnValue(+[NSMutableSet setWithSet:](&OBJC_CLASS___NSMutableSet, "setWithSet:", v13));
    objc_release(v13);
    objc_release(v12);
    v15 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
    v16 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v15, "objectForKeyedSubscript:", CFSTR("PDFs")));
    -[NSMutableSet unionSet:](v14, "unionSet:", v16);
    objc_release(v16);
    objc_release(v15);
    v17 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v18 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedBookTrackIDs](v17, "selectedBookTrackIDs"));
    LOBYTE(v16) = (unsigned __int8)objc_msgSend(v18, "isEqualToSet:", v14);
    objc_release(v18);
    objc_release(v17);
    v8 = (unsigned __int8)v16 ^ 1;
    objc_release(v14);
  }
  return v8;
}