-[DeviceSettingsAudiobooksViewController loadModel]
void __cdecl -[DeviceSettingsAudiobooksViewController loadModel](DeviceSettingsAudiobooksViewController *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___DeviceSettingsAudiobooksViewController;
  -[DeviceSettingsViewController loadModel](&v3, "loadModel");
  -[DeviceSettingsAudiobooksViewController loadAudiobookModel](self, "loadAudiobookModel");
  -[DeviceSettingsAudiobooksViewController loadAudiobookCheckedItemsModel](self, "loadAudiobookCheckedItemsModel");
}