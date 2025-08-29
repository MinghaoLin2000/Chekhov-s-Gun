-[DeviceFooterViewController init]
DeviceFooterViewController *__cdecl -[DeviceFooterViewController init](DeviceFooterViewController *self, SEL a2)
{
  DeviceFooterViewController *v2; // x0
  DeviceFooterViewController *v3; // x19
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___DeviceFooterViewController;
  v2 = -[DeviceFooterViewController init](&v5, "init");
  v3 = v2;
  if ( v2 )
  {
    -[DeviceFooterViewController setLastPrimaryProgressDescriptionString:](
      v2,
      "setLastPrimaryProgressDescriptionString:",
      &stru_1000BA220);
    -[DeviceFooterViewController setLastSecondaryProgressDescriptionString:](
      v3,
      "setLastSecondaryProgressDescriptionString:",
      &stru_1000BA220);
  }
  return v3;
}