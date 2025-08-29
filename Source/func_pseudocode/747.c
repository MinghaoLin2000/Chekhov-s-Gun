-[DeviceBlueButton initWithFrame:]
DeviceBlueButton *__cdecl -[DeviceBlueButton initWithFrame:](DeviceBlueButton *self, SEL a2, CGRect a3)
{
  DeviceBlueButton *v3; // x0
  DeviceBlueButton *v4; // x19
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___DeviceBlueButton;
  v3 = -[DeviceBlueButton initWithFrame:](
         &v6,
         "initWithFrame:",
         a3.origin.x,
         a3.origin.y,
         a3.size.width,
         a3.size.height);
  v4 = v3;
  if ( v3 )
    -[DeviceBlueButton commonSetup](v3, "commonSetup");
  return v4;
}