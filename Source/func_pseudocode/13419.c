-[SFUCryptoInputStream initForDecryptionWithInputStream:key:]
id __cdecl -[SFUCryptoInputStream initForDecryptionWithInputStream:key:](
        SFUCryptoInputStream *self,
        SEL a2,
        id a3,
        id a4)
{
  SFUCryptoInputStream *v6; // x19
  unsigned int v7; // w21
  char *v8; // x23
  SFUCryptor *v9; // x0
  __int64 v11; // [xsp+0h] [xbp-40h] BYREF

  v6 = -[SFUCryptoInputStream init](self, "init");
  if ( v6 )
  {
    v6->mBaseStream = (SFUInputStream *)objc_retain(a3);
    v7 = +[SFUCryptoUtils ivLengthForKey:](&OBJC_CLASS___SFUCryptoUtils, "ivLengthForKey:", a4);
    v8 = (char *)&v11 - ((v7 + 15LL) & 0x1FFFFFFF0LL);
    if ( -[SFUInputStream readToBuffer:size:](v6->mBaseStream, "readToBuffer:size:", v8, v7) != (void *)v7 )
      +[NSException raise:format:](
        &OBJC_CLASS___NSException,
        "raise:format:",
        NSGenericException,
        CFSTR("Failed to read IV"));
    v9 = -[SFUCryptor initWithKey:operation:iv:ivLength:](
           objc_alloc(&OBJC_CLASS___SFUCryptor),
           "initWithKey:operation:iv:ivLength:",
           a4,
           1LL,
           v8,
           v7);
    v6->mCryptor = v9;
    if ( !v9 )
      +[NSException raise:format:](
        &OBJC_CLASS___NSException,
        "raise:format:",
        NSGenericException,
        CFSTR("Failed to create SFUCryptor"));
    if ( v7 )
    {
      if ( (void *)-[SFUCryptoInputStream readToBuffer:size:](v6, "readToBuffer:size:", v8, v7) != (void *)v7 )
        +[NSException raise:format:](
          &OBJC_CLASS___NSException,
          "raise:format:",
          NSGenericException,
          CFSTR("Failed to read initial ciphertext"));
      v6->mOffset = 0LL;
    }
  }
  return v6;
}