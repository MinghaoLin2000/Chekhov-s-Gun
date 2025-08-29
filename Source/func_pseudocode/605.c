-[DeviceSettingsBooksViewController loadModel]
void __cdecl -[DeviceSettingsBooksViewController loadModel](DeviceSettingsBooksViewController *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___DeviceSettingsBooksViewController;
  -[DeviceSettingsViewController loadModel](&v3, "loadModel");
  -[DeviceSettingsBooksViewController loadBookAndPDFModel](self, "loadBookAndPDFModel");
  -[DeviceSettingsBooksViewController loadBookAndPDFCheckedItemsModel](self, "loadBookAndPDFCheckedItemsModel");
}