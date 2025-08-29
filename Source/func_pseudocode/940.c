-[DeviceSettingsAudiobooksViewController clickSyncOntoCheckBox:]
void __cdecl -[DeviceSettingsAudiobooksViewController clickSyncOntoCheckBox:](
        DeviceSettingsAudiobooksViewController *self,
        SEL a2,
        id a3)
{
  objc_super v3; // [xsp+0h] [xbp-10h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___DeviceSettingsAudiobooksViewController;
  -[DeviceSettingsViewController clickSyncOntoCheckBox:](&v3, "clickSyncOntoCheckBox:", a3);
}