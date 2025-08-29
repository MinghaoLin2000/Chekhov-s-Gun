-[DeviceSettingsPodcastsViewController loadModel]
void __cdecl -[DeviceSettingsPodcastsViewController loadModel](DeviceSettingsPodcastsViewController *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___DeviceSettingsPodcastsViewController;
  -[DeviceSettingsViewController loadModel](&v3, "loadModel");
  -[DeviceSettingsPodcastsViewController loadPodcastModel](self, "loadPodcastModel");
  -[DeviceSettingsPodcastsViewController loadCheckedItemsModel](self, "loadCheckedItemsModel");
}