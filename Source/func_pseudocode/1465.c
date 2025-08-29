-[DeviceMoreIdentifiersViewController setDevice:]
void __cdecl -[DeviceMoreIdentifiersViewController setDevice:](
        DeviceMoreIdentifiersViewController *self,
        SEL a2,
        id a3)
{
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___DeviceMoreIdentifiersViewController;
  -[DeviceViewController setDevice:](&v4, "setDevice:", a3);
  -[DeviceMoreIdentifiersViewController setUpViews](self, "setUpViews");
}