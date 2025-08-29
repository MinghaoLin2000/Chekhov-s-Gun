-[DeviceBlueButton intrinsicContentSize]
CGSize __cdecl -[DeviceBlueButton intrinsicContentSize](DeviceBlueButton *self, SEL a2)
{
  double v2; // d1
  double v3; // d1
  double v4; // d0
  double v5; // d0
  objc_super v6; // [xsp+0h] [xbp-10h] BYREF
  CGSize result; // 0:d0.8,8:d1.8

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___DeviceBlueButton;
  -[DeviceBlueButton intrinsicContentSize](&v6, "intrinsicContentSize");
  v3 = v2 + 12.0;
  v5 = v4 + 32.0;
  result.height = v3;
  result.width = v5;
  return result;
}