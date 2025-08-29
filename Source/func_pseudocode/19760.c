-[GState dealloc]
void __cdecl -[GState dealloc](GState *self, SEL a2)
{
  objc_super v3; // [xsp+10h] [xbp-20h] BYREF

  -[GState setStrokeColorspace:](self, "setStrokeColorspace:", 0LL);
  -[GState setNonStrokeColorspace:](self, "setNonStrokeColorspace:", 0LL);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___GState;
  -[GState dealloc](&v3, "dealloc");
}