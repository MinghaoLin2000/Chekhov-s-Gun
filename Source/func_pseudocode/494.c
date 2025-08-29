-[DeviceSettingsTVShowsViewController clickSyncOntoCheckBox:]
void __cdecl -[DeviceSettingsTVShowsViewController clickSyncOntoCheckBox:](
        DeviceSettingsTVShowsViewController *self,
        SEL a2,
        id a3)
{
  objc_super v3; // [xsp+0h] [xbp-10h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___DeviceSettingsTVShowsViewController;
  -[DeviceSettingsViewController clickSyncOntoCheckBox:](&v3, "clickSyncOntoCheckBox:", a3);
}