-[DeviceSettingsMoviesViewController loadUIFromPrefs]
void __cdecl -[DeviceSettingsMoviesViewController loadUIFromPrefs](DeviceSettingsMoviesViewController *self, SEL a2)
{
  AMPDeviceSyncPrefs *v3; // x20
  __int64 v4; // x21
  NSButton *v5; // x22
  AMPDeviceSyncPrefs *v6; // x20
  _BOOL8 v7; // x21
  NSButton *v8; // x20
  AMPDeviceSyncPrefs *v9; // x20
  void *v10; // x21
  AMPDeviceSyncPrefs *v11; // x22
  signed __int64 v12; // x21
  NSPopUpButton *v13; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( (unsigned int)-[DeviceSettingsMoviesViewController isViewLoaded](self, "isViewLoaded") )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v4 = (unsigned int)-[AMPDeviceSyncPrefs updateMovies](v3, "updateMovies");
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
    -[NSButton setState:](v5, "setState:", v4);
    objc_release(v5);
    objc_release(v3);
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v7 = ((unsigned __int64)-[AMPDeviceSyncPrefs movieUpdateMode](v6, "movieUpdateMode") & 0xF) != 2;
    objc_release(v6);
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController autoIncludeCheckBox](self, "autoIncludeCheckBox"));
    -[NSButton setState:](v8, "setState:", v7);
    objc_release(v8);
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v10 = -[AMPDeviceSyncPrefs movieUpdateMode](v9, "movieUpdateMode");
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v12 = -[DeviceSettingsMoviesViewController tagWithMovieUpdateMode:movieCount:](
            self,
            "tagWithMovieUpdateMode:movieCount:",
            v10,
            -[AMPDeviceSyncPrefs movieCount](v11, "movieCount"));
    objc_release(v11);
    objc_release(v9);
    v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController autoIncludePopUpButton](self, "autoIncludePopUpButton"));
    -[NSPopUpButton selectItemWithTag:](v13, "selectItemWithTag:", v12);
    objc_release(v13);
    -[DeviceSettingsMoviesViewController updateTrailingTextField](self, "updateTrailingTextField");
    -[DeviceSettingsMoviesViewController updateTabView](self, "updateTabView");
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
  }
}