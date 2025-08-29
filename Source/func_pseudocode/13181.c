-[SFUCryptoKey initAes128Key:length:iterationCount:]
id __cdecl -[SFUCryptoKey initAes128Key:length:iterationCount:](
        SFUCryptoKey *self,
        SEL a2,
        const char *a3,
        unsigned int a4,
        unsigned int a5)
{
  SFUCryptoKey *v7; // x0
  SFUCryptoKey *v8; // x20
  objc_super v10; // [xsp+0h] [xbp-30h] BYREF

  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___SFUCryptoKey;
  v7 = -[SFUCryptoKey init](&v10, "init");
  v8 = v7;
  if ( v7 )
  {
    v7->mIterationCount = a5;
    v7->mKeyLength = 16LL;
    if ( a4 == 16 )
    {
      v7->mKey = (char *)malloc_type_calloc(1uLL, 0x10uLL, 0x769E0DEBuLL);
      __memcpy_chk();
    }
    else
    {
      objc_release(v7);
      return 0LL;
    }
  }
  return v8;
}