-[DeviceBlueButton initWithCoder:]
DeviceBlueButton *__cdecl -[DeviceBlueButton initWithCoder:](DeviceBlueButton *self, SEL a2, id a3)
{
  DeviceBlueButton *v3; // x0
  DeviceBlueButton *v4; // x19
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___DeviceBlueButton;
  v3 = -[DeviceBlueButton initWithCoder:](&v6, "initWithCoder:", a3);
  v4 = v3;
  if ( v3 )
    -[DeviceBlueButton commonSetup](v3, "commonSetup");
  return v4;
}