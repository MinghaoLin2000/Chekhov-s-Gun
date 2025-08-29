-[DeviceSettingsMoviesViewController updateTrailingTextField]
void __cdecl -[DeviceSettingsMoviesViewController updateTrailingTextField](
        DeviceSettingsMoviesViewController *self,
        SEL a2)
{
  NSButton *v3; // x20
  void *v4; // x21
  NSPopUpButton *v5; // x22
  void *v6; // x20
  unsigned __int64 v7; // x21
  id v8; // x20
  NSTextField *v9; // x21
  void *v10; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController autoIncludeCheckBox](self, "autoIncludeCheckBox"));
  v4 = -[NSButton state](v3, "state");
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController autoIncludePopUpButton](self, "autoIncludePopUpButton"));
  v6 = -[NSPopUpButton selectedTag](v5, "selectedTag");
  objc_release(v5);
  if ( v4 == (void *)1 )
    v7 = -[DeviceSettingsMoviesViewController movieUpdateModeFromTag:](self, "movieUpdateModeFromTag:", v6);
  else
    v7 = 2LL;
  v8 = objc_retainAutoreleasedReturnValue(
         -[DeviceSettingsMoviesViewController trailingTextWithMovieUpdateMode:movieCount:](
           self,
           "trailingTextWithMovieUpdateMode:movieCount:",
           v7,
           -[DeviceSettingsMoviesViewController movieUpdateCountFromTag:](self, "movieUpdateCountFromTag:", v6)));
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController autoIncludeTrailingTextField](self, "autoIncludeTrailingTextField"));
  -[NSTextField setStringValue:](v9, "setStringValue:", v8);
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController view](self, "view"));
  objc_msgSend(v10, "setNeedsLayout:", 1LL);
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}