-[DeviceSettingsTVShowsErrorViewController init]
DeviceSettingsTVShowsErrorViewController *__cdecl -[DeviceSettingsTVShowsErrorViewController init](
        DeviceSettingsTVShowsErrorViewController *self,
        SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-10h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___DeviceSettingsTVShowsErrorViewController;
  return -[DeviceSettingsErrorViewController initWithMediaDomain:](&v3, "initWithMediaDomain:", 2LL);
}