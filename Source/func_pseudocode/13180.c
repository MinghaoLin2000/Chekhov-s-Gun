-[SFUCryptoKey initAes128KeyFromPassphrase:length:iterationCount:saltData:]
id __cdecl -[SFUCryptoKey initAes128KeyFromPassphrase:length:iterationCount:saltData:](
        SFUCryptoKey *self,
        SEL a2,
        const char *a3,
        unsigned int a4,
        unsigned int a5,
        id a6)
{
  SFUCryptoKey *v10; // x0
  SFUCryptoKey *v11; // x19
  NSData *v12; // x0
  objc_super v14; // [xsp+0h] [xbp-50h] BYREF

  v14.receiver = self;
  v14.super_class = (Class)&OBJC_CLASS___SFUCryptoKey;
  v10 = -[SFUCryptoKey init](&v14, "init");
  v11 = v10;
  if ( v10 )
  {
    v10->mIterationCount = a5;
    v10->mKeyLength = 16LL;
    v10->mKey = (char *)malloc_type_calloc(1uLL, 0x10uLL, 0xC59CDD89uLL);
    v11->_passphrase = (NSString *)objc_msgSend(
                                     objc_alloc((Class)&OBJC_CLASS___NSString),
                                     "initWithBytes:length:encoding:",
                                     a3,
                                     a4,
                                     4LL);
    v12 = (NSData *)objc_msgSend(a6, "copy");
    v11->mSaltData = v12;
    if ( (SFUDeriveAes128Key(
            a3,
            a4,
            v11->mIterationCount,
            v11->mKey,
            v11->mKeyLength,
            -[NSData bytes](v12, "bytes"),
            -[NSData length](v11->mSaltData, "length")) & 1) == 0 )
    {
      objc_release(v11);
      return 0LL;
    }
  }
  return v11;
}