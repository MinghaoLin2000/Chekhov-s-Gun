-[SFUCryptoInputStream dealloc]
void __cdecl -[SFUCryptoInputStream dealloc](SFUCryptoInputStream *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  objc_release(self->mBaseStream);
  objc_release(self->mCryptor);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___SFUCryptoInputStream;
  -[SFUCryptoInputStream dealloc](&v3, "dealloc");
}