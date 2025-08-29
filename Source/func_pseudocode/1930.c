-[DeviceSettingsAudiobooksErrorViewController init]
DeviceSettingsAudiobooksErrorViewController *__cdecl -[DeviceSettingsAudiobooksErrorViewController init](
        DeviceSettingsAudiobooksErrorViewController *self,
        SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-10h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___DeviceSettingsAudiobooksErrorViewController;
  return -[DeviceSettingsErrorViewController initWithMediaDomain:](&v3, "initWithMediaDomain:", 8LL);
}