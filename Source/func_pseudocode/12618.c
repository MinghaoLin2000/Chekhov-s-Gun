-[SFUOffsetInputStream dealloc]
void __cdecl -[SFUOffsetInputStream dealloc](SFUOffsetInputStream *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  objc_release(self->mInputStream);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___SFUOffsetInputStream;
  -[SFUOffsetInputStream dealloc](&v3, "dealloc");
}