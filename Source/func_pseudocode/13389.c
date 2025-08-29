-[SFUFileInputStream dealloc]
void __cdecl -[SFUFileInputStream dealloc](SFUFileInputStream *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  -[SFUFileInputStream close](self, "close");
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___SFUFileInputStream;
  -[SFUFileInputStream dealloc](&v3, "dealloc");
}