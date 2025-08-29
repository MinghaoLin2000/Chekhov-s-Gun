-[DeviceSettingsMoviesViewController shouldTabViewBeEnabled]
bool __cdecl -[DeviceSettingsMoviesViewController shouldTabViewBeEnabled](
        DeviceSettingsMoviesViewController *self,
        SEL a2)
{
  NSButton *v3; // x20
  void *v4; // x21
  NSPopUpButton *v5; // x19
  NSInteger v6; // x20

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController autoIncludeCheckBox](self, "autoIncludeCheckBox"));
  v4 = -[NSButton state](v3, "state");
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController autoIncludePopUpButton](self, "autoIncludePopUpButton"));
  v6 = -[NSPopUpButton selectedTag](v5, "selectedTag");
  objc_release(v5);
  return v4 != (void *)1 || v6 != 0;
}