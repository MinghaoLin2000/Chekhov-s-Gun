-[ColorInfo dealloc]
void __cdecl -[ColorInfo dealloc](ColorInfo *self, SEL a2)
{
  objc_super v3; // [xsp+10h] [xbp-20h] BYREF

  -[ColorInfo setGstateStack:](self, "setGstateStack:", 0LL);
  -[ColorInfo setStrokeColorspace:](self, "setStrokeColorspace:", 0LL);
  -[ColorInfo setNonStrokeColorspace:](self, "setNonStrokeColorspace:", 0LL);
  -[ColorInfo setColorReason:](self, "setColorReason:", 0LL);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___ColorInfo;
  -[ColorInfo dealloc](&v3, "dealloc");
}