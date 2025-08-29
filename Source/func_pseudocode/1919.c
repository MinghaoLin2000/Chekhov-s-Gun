-[DeviceSettingsErrorViewController initWithMediaDomain:]
DeviceSettingsErrorViewController *__cdecl -[DeviceSettingsErrorViewController initWithMediaDomain:](
        DeviceSettingsErrorViewController *self,
        SEL a2,
        unsigned __int64 a3)
{
  DeviceSettingsErrorViewController *result; // x0
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___DeviceSettingsErrorViewController;
  result = -[DeviceSettingsErrorViewController init](&v5, "init");
  if ( result )
    result->_mediaDomain = a3;
  return result;
}