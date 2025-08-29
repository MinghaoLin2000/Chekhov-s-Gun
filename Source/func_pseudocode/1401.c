-[DeviceSettingsMoviesViewController setTopViewEnabled:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[DeviceSettingsMoviesViewController setTopViewEnabled:](
        DeviceSettingsMoviesViewController *self,
        SEL a2,
        bool a3)
{
  _BOOL8 v3; // x20
  NSButton *v5; // x21
  _BOOL8 v6; // x22
  NSPopUpButton *v7; // x23
  NSTextField *v8; // x20
  NSColor *v9; // x0
  NSTextField *v10; // x20
  NSColor *v11; // x20
  NSTextField *v12; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = a3;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController autoIncludeCheckBox](self, "autoIncludeCheckBox"));
  -[NSButton setEnabled:](v5, "setEnabled:", v3);
  objc_release(v5);
  if ( v3 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController autoIncludeCheckBox](self, "autoIncludeCheckBox"));
    v6 = (void *)-[NSButton state](v5, "state") == (void *)1;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController autoIncludePopUpButton](self, "autoIncludePopUpButton"));
  -[NSPopUpButton setEnabled:](v7, "setEnabled:", v6);
  objc_release(v7);
  if ( v3 )
  {
    objc_release(v5);
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController autoIncludeTrailingTextField](self, "autoIncludeTrailingTextField"));
    -[NSTextField setEnabled:](v8, "setEnabled:", 1LL);
    objc_release(v8);
    v9 = objc_retainAutoreleasedReturnValue(+[NSColor controlTextColor](&OBJC_CLASS___NSColor, "controlTextColor"));
  }
  else
  {
    v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController autoIncludeTrailingTextField](self, "autoIncludeTrailingTextField"));
    -[NSTextField setEnabled:](v10, "setEnabled:", 0LL);
    objc_release(v10);
    v9 = objc_retainAutoreleasedReturnValue(+[NSColor disabledControlTextColor](&OBJC_CLASS___NSColor, "disabledControlTextColor"));
  }
  v11 = v9;
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController autoIncludeTrailingTextField](self, "autoIncludeTrailingTextField"));
  -[NSTextField setTextColor:](v12, "setTextColor:", v11);
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v11);
}