-[DeviceSettingsBooksViewController saveBooksAndPDFsToDeviceSyncPrefs:]
void __cdecl -[DeviceSettingsBooksViewController saveBooksAndPDFsToDeviceSyncPrefs:](
        DeviceSettingsBooksViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSMutableDictionary *v5; // x22
  void *v6; // x23
  NSMutableSet *v7; // x21
  NSMutableDictionary *v8; // x22
  void *v9; // x23
  NSButton *v10; // x22
  NSButton *v11; // x20
  __int64 v12; // x2
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v5, "objectForKeyedSubscript:", CFSTR("Books")));
  v7 = objc_retainAutoreleasedReturnValue(+[NSMutableSet setWithSet:](&OBJC_CLASS___NSMutableSet, "setWithSet:", v6));
  objc_release(v6);
  objc_release(v5);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v9 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v8, "objectForKeyedSubscript:", CFSTR("PDFs")));
  -[NSMutableSet unionSet:](v7, "unionSet:", v9);
  objc_release(v9);
  objc_release(v8);
  objc_msgSend(v4, "setSelectedBookTrackIDs:", v7);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsBooksViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  objc_msgSend(v4, "setUpdateBooks:", (void *)-[NSButton state](v10, "state") == (void *)1);
  objc_release(v10);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsBooksViewController allRadioButton](self, "allRadioButton"));
  if ( (void *)-[NSButton state](v11, "state") == (void *)1 )
    v12 = 1LL;
  else
    v12 = 2LL;
  objc_msgSend(v4, "setBookUpdateMode:", v12);
  objc_release(v4);
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}