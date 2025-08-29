-[IFDBundle dealloc]
void __cdecl -[IFDBundle dealloc](IFDBundle *self, SEL a2)
{
  __CFBundle *bundle; // x0
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  bundle = self->_bundle;
  if ( bundle )
    CFRelease(bundle);
  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___IFDBundle;
  -[IFDBundle dealloc](&v4, "dealloc");
}