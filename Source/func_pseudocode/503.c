-[DeviceSettingsTVShowsViewController shouldTabViewBeEnabled]
bool __cdecl -[DeviceSettingsTVShowsViewController shouldTabViewBeEnabled](
        DeviceSettingsTVShowsViewController *self,
        SEL a2)
{
  NSButton *v3; // x20
  void *v4; // x21
  NSPopUpButton *v5; // x20
  NSInteger v6; // x22
  NSPopUpButton *v7; // x19
  void *v8; // x20

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController autoIncludeCheckBox](self, "autoIncludeCheckBox"));
  v4 = -[NSButton state](v3, "state");
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController autoIncludePopUpButton](self, "autoIncludePopUpButton"));
  v6 = -[NSPopUpButton selectedTag](v5, "selectedTag");
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController autoIncludeTrailingPopUpButton](self, "autoIncludeTrailingPopUpButton"));
  v8 = -[NSPopUpButton selectedTag](v7, "selectedTag");
  objc_release(v7);
  return v4 != (void *)1 || v6 != 0 || v8 != (void *)1000;
}