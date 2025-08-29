-[SFUZipInflateInputStream dealloc]
void __cdecl -[SFUZipInflateInputStream dealloc](SFUZipInflateInputStream *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  inflateEnd(&self->mStream);
  objc_release(self->mInput);
  free(self->mOutBuffer);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___SFUZipInflateInputStream;
  -[SFUZipInflateInputStream dealloc](&v3, "dealloc");
}