-[DeviceSettingsMoviesViewController loadModel]
void __cdecl -[DeviceSettingsMoviesViewController loadModel](DeviceSettingsMoviesViewController *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___DeviceSettingsMoviesViewController;
  -[DeviceSettingsViewController loadModel](&v3, "loadModel");
  -[DeviceSettingsMoviesViewController loadMoviesModel](self, "loadMoviesModel");
  -[DeviceSettingsMoviesViewController loadCheckedItemsModel](self, "loadCheckedItemsModel");
  -[DeviceSettingsMoviesViewController loadRentalsModel](self, "loadRentalsModel");
}