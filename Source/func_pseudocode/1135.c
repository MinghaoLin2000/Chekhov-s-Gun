-[DeviceSettingsPhotosViewController setTopViewEnabled:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[DeviceSettingsPhotosViewController setTopViewEnabled:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        bool a3)
{
  NSButton *v3; // x23
  _BOOL8 v4; // x20
  NSButton *v6; // x21
  NSButton *v7; // x21
  NSTextField *v8; // x21
  NSColor *v9; // x0
  NSColor *v10; // x21
  NSTextField *v11; // x22
  NSPopUpButton *v12; // x21
  NSButton *v13; // x21
  NSButton *v14; // x21
  NSButton *v15; // x21
  void *v16; // x22
  _BOOL8 v17; // x21
  NSButton *v18; // x22
  NSButton *v19; // x21
  unsigned int v20; // w22
  _BOOL8 v21; // x24
  NSPopUpButton *v22; // x25
  NSButton *v23; // x21
  NSTextField *v24; // x21
  NSColor *v25; // x0
  NSColor *v26; // x20
  NSTextField *v27; // x19
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = a3;
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController allRadioButton](self, "allRadioButton"));
  -[NSButton setEnabled:](v6, "setEnabled:", v4);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController updateSelectedRadioButton](self, "updateSelectedRadioButton"));
  -[NSButton setEnabled:](v7, "setEnabled:", v4);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSourceExplanationTextField](self, "photoSourceExplanationTextField"));
  -[NSTextField setEnabled:](v8, "setEnabled:", v4);
  objc_release(v8);
  if ( v4 )
    v9 = objc_retainAutoreleasedReturnValue(+[NSColor controlTextColor](&OBJC_CLASS___NSColor, "controlTextColor"));
  else
    v9 = objc_retainAutoreleasedReturnValue(+[NSColor disabledControlTextColor](&OBJC_CLASS___NSColor, "disabledControlTextColor"));
  v10 = v9;
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSourceExplanationTextField](self, "photoSourceExplanationTextField"));
  -[NSTextField setTextColor:](v11, "setTextColor:", v10);
  objc_release(v11);
  objc_release(v10);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSourcePopUpButton](self, "photoSourcePopUpButton"));
  -[NSPopUpButton setEnabled:](v12, "setEnabled:", v4);
  objc_release(v12);
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController includeVideosCheckBox](self, "includeVideosCheckBox"));
  -[NSButton setEnabled:](v13, "setEnabled:", v4);
  objc_release(v13);
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController onlyFavoritesCheckBox](self, "onlyFavoritesCheckBox"));
  -[NSButton setEnabled:](v14, "setEnabled:", v4);
  objc_release(v14);
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController allRadioButton](self, "allRadioButton"));
  v16 = -[NSButton state](v15, "state");
  objc_release(v15);
  v17 = v16 != (void *)1 && v4;
  v18 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController autoIncludePhotosFromCheckBox](self, "autoIncludePhotosFromCheckBox"));
  -[NSButton setEnabled:](v18, "setEnabled:", v17);
  objc_release(v18);
  v19 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController autoIncludePhotosFromCheckBox](self, "autoIncludePhotosFromCheckBox"));
  v20 = (unsigned int)-[NSButton isEnabled](v19, "isEnabled");
  if ( v20 )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController autoIncludePhotosFromCheckBox](self, "autoIncludePhotosFromCheckBox"));
    v21 = (void *)-[NSButton state](v3, "state") == (void *)1;
  }
  else
  {
    v21 = 0LL;
  }
  v22 = objc_retainAutoreleasedReturnValue(
          -[DeviceSettingsPhotosViewController autoIncludePhotosFromPopUpButton](
            self,
            "autoIncludePhotosFromPopUpButton"));
  -[NSPopUpButton setEnabled:](v22, "setEnabled:", v21);
  objc_release(v22);
  if ( v20 )
    objc_release(v3);
  objc_release(v19);
  v23 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController includeFullResPhotosCheckBox](self, "includeFullResPhotosCheckBox"));
  -[NSButton setEnabled:](v23, "setEnabled:", v4);
  objc_release(v23);
  v24 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController includeFullResPhotosTextField](self, "includeFullResPhotosTextField"));
  -[NSTextField setEnabled:](v24, "setEnabled:", v4);
  objc_release(v24);
  if ( v4 )
    v25 = objc_retainAutoreleasedReturnValue(+[NSColor controlTextColor](&OBJC_CLASS___NSColor, "controlTextColor"));
  else
    v25 = objc_retainAutoreleasedReturnValue(+[NSColor disabledControlTextColor](&OBJC_CLASS___NSColor, "disabledControlTextColor"));
  v26 = v25;
  v27 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController includeFullResPhotosTextField](self, "includeFullResPhotosTextField"));
  -[NSTextField setTextColor:](v27, "setTextColor:", v26);
  objc_release(v27);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v26);
}