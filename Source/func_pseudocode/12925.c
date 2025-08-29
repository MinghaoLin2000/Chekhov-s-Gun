-[SFUZipEntry dealloc]
void __cdecl -[SFUZipEntry dealloc](SFUZipEntry *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  objc_release(self->mArchiveDataRepresentation);
  objc_release(self->mCryptoKey);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___SFUZipEntry;
  -[SFUZipEntry dealloc](&v3, "dealloc");
}