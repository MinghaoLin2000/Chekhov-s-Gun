-[MacOSSharingExtensionContext dealloc]
void __cdecl -[MacOSSharingExtensionContext dealloc](MacOSSharingExtensionContext *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  -[MacOSSharingExtensionContext setBarrier:](self, "setBarrier:", 0LL);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___MacOSSharingExtensionContext;
  -[MacOSSharingExtensionContext dealloc](&v3, "dealloc");
}