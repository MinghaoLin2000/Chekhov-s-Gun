-[DeviceModeUnpairedViewController dealloc]
void __cdecl -[DeviceModeUnpairedViewController dealloc](DeviceModeUnpairedViewController *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  -[DeviceModeUnpairedViewController hideProgress:](self, "hideProgress:", 0LL);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___DeviceModeUnpairedViewController;
  -[DeviceModeUnpairedViewController dealloc](&v3, "dealloc");
}