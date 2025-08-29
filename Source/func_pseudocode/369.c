-[DeviceUIServiceView initWithFrame:]
DeviceUIServiceView *__cdecl -[DeviceUIServiceView initWithFrame:](DeviceUIServiceView *self, SEL a2, CGRect a3)
{
  DeviceUIServiceView *v3; // x0
  DeviceUIServiceView *v4; // x19
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___DeviceUIServiceView;
  v3 = -[DeviceUIServiceView initWithFrame:](
         &v6,
         "initWithFrame:",
         a3.origin.x,
         a3.origin.y,
         a3.size.width,
         a3.size.height);
  v4 = v3;
  if ( v3 )
    -[DeviceUIServiceView setTranslatesAutoresizingMaskIntoConstraints:](
      v3,
      "setTranslatesAutoresizingMaskIntoConstraints:",
      0LL);
  return v4;
}