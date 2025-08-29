-[DeviceSettingsMoviesErrorViewController init]
DeviceSettingsMoviesErrorViewController *__cdecl -[DeviceSettingsMoviesErrorViewController init](
        DeviceSettingsMoviesErrorViewController *self,
        SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-10h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___DeviceSettingsMoviesErrorViewController;
  return -[DeviceSettingsErrorViewController initWithMediaDomain:](&v3, "initWithMediaDomain:", 2LL);
}