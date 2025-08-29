-[SFUMemoryInputStream dealloc]
void __cdecl -[SFUMemoryInputStream dealloc](SFUMemoryInputStream *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  objc_release(self->mData);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___SFUMemoryInputStream;
  -[SFUMemoryInputStream dealloc](&v3, "dealloc");
}