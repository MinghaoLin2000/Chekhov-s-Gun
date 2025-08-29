-[SFUBufferedInputStream dealloc]
void __cdecl -[SFUBufferedInputStream dealloc](SFUBufferedInputStream *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  free(self->mBuffer);
  objc_release(self->mStream);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___SFUBufferedInputStream;
  -[SFUBufferedInputStream dealloc](&v3, "dealloc");
}