-[AuthorizationController dealloc]
void __cdecl -[AuthorizationController dealloc](AuthorizationController *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  -[AuthorizationController clearAuth](self, "clearAuth");
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___AuthorizationController;
  -[AuthorizationController dealloc](&v3, "dealloc");
}