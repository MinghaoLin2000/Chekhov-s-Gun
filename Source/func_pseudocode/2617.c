-[DeviceSettingsContactsViewController setTopViewEnabled:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[DeviceSettingsContactsViewController setTopViewEnabled:](
        DeviceSettingsContactsViewController *self,
        SEL a2,
        bool a3)
{
  _BOOL8 v3; // x19
  NSButton *v5; // x21
  NSMutableDictionary *v6; // x23
  void *v7; // x21
  void *v8; // x23
  NSButton *v9; // x0
  NSButton *v10; // x24
  _BOOL8 v11; // x2
  NSButton *v12; // x23
  NSButton *v13; // x23
  void *v14; // x24
  NSMutableDictionary *v15; // x23
  NSPopUpButton *v16; // x22
  _BOOL8 v17; // x23
  _BOOL8 v18; // x23
  NSButton *v19; // x24
  _BOOL8 v20; // x23
  NSPopUpButton *v21; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = a3;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsContactsViewController allRadioButton](self, "allRadioButton"));
  -[NSButton setEnabled:](v5, "setEnabled:", v3);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
  v7 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v6, "objectForKeyedSubscript:", CFSTR("Groups")));
  objc_release(v6);
  v8 = objc_msgSend(v7, "count");
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsContactsViewController updateSelectedRadioButton](self, "updateSelectedRadioButton"));
  v10 = v9;
  if ( v8 )
    v11 = v3;
  else
    v11 = 0LL;
  -[NSButton setEnabled:](v9, "setEnabled:", v11);
  objc_release(v10);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsContactsViewController defaultGroupCheckBox](self, "defaultGroupCheckBox"));
  -[NSButton setEnabled:](v12, "setEnabled:", v3);
  objc_release(v12);
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsContactsViewController updateSelectedRadioButton](self, "updateSelectedRadioButton"));
  v14 = -[NSButton state](v13, "state");
  objc_release(v13);
  if ( v14 == (void *)1 )
  {
    v15 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
    v16 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v15, "objectForKeyedSubscript:", CFSTR("Groups")));
    objc_release(v15);
    v17 = v3 && -[NSPopUpButton count](v16, "count") != 0LL;
    v19 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsContactsViewController defaultGroupCheckBox](self, "defaultGroupCheckBox"));
    -[NSButton setEnabled:](v19, "setEnabled:", v17);
    objc_release(v19);
  }
  else
  {
    v18 = v3 && objc_msgSend(v7, "count") != 0LL;
    v16 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsContactsViewController defaultGroupCheckBox](self, "defaultGroupCheckBox"));
    -[NSPopUpButton setEnabled:](v16, "setEnabled:", v18);
  }
  objc_release(v16);
  if ( v3 )
  {
    v16 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsContactsViewController defaultGroupPopUpButton](self, "defaultGroupPopUpButton"));
    v20 = -[NSPopUpButton numberOfItems](v16, "numberOfItems") > 0;
  }
  else
  {
    v20 = 0LL;
  }
  v21 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsContactsViewController defaultGroupPopUpButton](self, "defaultGroupPopUpButton"));
  -[NSPopUpButton setEnabled:](v21, "setEnabled:", v20);
  objc_release(v21);
  if ( v3 )
    objc_release(v16);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}