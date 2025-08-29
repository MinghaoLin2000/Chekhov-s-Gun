-[DeviceSettingsTVShowsViewController loadModel]
void __cdecl -[DeviceSettingsTVShowsViewController loadModel](DeviceSettingsTVShowsViewController *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___DeviceSettingsTVShowsViewController;
  -[DeviceSettingsViewController loadModel](&v3, "loadModel");
  -[DeviceSettingsTVShowsViewController loadTVShowsModel](self, "loadTVShowsModel");
  -[DeviceSettingsTVShowsViewController loadCheckedItemsModel](self, "loadCheckedItemsModel");
}