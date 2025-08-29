-[DeviceSettingsMusicViewController loadModel]
void __cdecl -[DeviceSettingsMusicViewController loadModel](DeviceSettingsMusicViewController *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___DeviceSettingsMusicViewController;
  -[DeviceSettingsViewController loadModel](&v3, "loadModel");
  -[DeviceSettingsMusicViewController loadMusicModel](self, "loadMusicModel");
  -[DeviceSettingsMusicViewController loadCheckedItemsModel](self, "loadCheckedItemsModel");
}