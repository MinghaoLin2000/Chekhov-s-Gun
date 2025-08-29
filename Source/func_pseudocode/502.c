-[DeviceSettingsTVShowsViewController setTopViewEnabled:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[DeviceSettingsTVShowsViewController setTopViewEnabled:](
        DeviceSettingsTVShowsViewController *self,
        SEL a2,
        bool a3)
{
  __int64 v3; // x20
  NSButton *v5; // x21
  NSButton *v6; // x21
  void *v7; // x22
  NSPopUpButton *v8; // x21
  NSTextField *v9; // x21
  NSColor *v10; // x0
  NSColor *v11; // x21
  NSTextField *v12; // x22
  NSPopUpButton *v13; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = a3;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController autoIncludeCheckBox](self, "autoIncludeCheckBox"));
  -[NSButton setEnabled:](v5, "setEnabled:", v3);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController autoIncludeCheckBox](self, "autoIncludeCheckBox"));
  v7 = -[NSButton state](v6, "state");
  objc_release(v6);
  if ( v7 == (void *)1 )
    v3 = (unsigned int)v3;
  else
    v3 = 0LL;
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController autoIncludePopUpButton](self, "autoIncludePopUpButton"));
  -[NSPopUpButton setEnabled:](v8, "setEnabled:", v3);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController autoIncludeTrailingTextField](self, "autoIncludeTrailingTextField"));
  -[NSTextField setEnabled:](v9, "setEnabled:", v3);
  objc_release(v9);
  if ( (_DWORD)v3 )
    v10 = objc_retainAutoreleasedReturnValue(+[NSColor controlTextColor](&OBJC_CLASS___NSColor, "controlTextColor"));
  else
    v10 = objc_retainAutoreleasedReturnValue(+[NSColor disabledControlTextColor](&OBJC_CLASS___NSColor, "disabledControlTextColor"));
  v11 = v10;
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController autoIncludeTrailingTextField](self, "autoIncludeTrailingTextField"));
  -[NSTextField setTextColor:](v12, "setTextColor:", v11);
  objc_release(v12);
  objc_release(v11);
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController autoIncludeTrailingPopUpButton](self, "autoIncludeTrailingPopUpButton"));
  -[NSPopUpButton setEnabled:](v13, "setEnabled:", v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v13);
}