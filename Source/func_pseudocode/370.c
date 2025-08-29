-[DeviceUIServiceView initWithCoder:]
DeviceUIServiceView *__cdecl -[DeviceUIServiceView initWithCoder:](DeviceUIServiceView *self, SEL a2, id a3)
{
  DeviceUIServiceView *v3; // x0
  DeviceUIServiceView *v4; // x19
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___DeviceUIServiceView;
  v3 = -[DeviceUIServiceView initWithCoder:](&v6, "initWithCoder:", a3);
  v4 = v3;
  if ( v3 )
    -[DeviceUIServiceView setTranslatesAutoresizingMaskIntoConstraints:](
      v3,
      "setTranslatesAutoresizingMaskIntoConstraints:",
      0LL);
  return v4;
}