-[SFUCryptoOutputStream initForEncryptionWithOutputStream:key:computeCrc32:]
id __cdecl -[SFUCryptoOutputStream initForEncryptionWithOutputStream:key:computeCrc32:](
        SFUCryptoOutputStream *self,
        SEL a2,
        id a3,
        id a4,
        bool a5)
{
  SFUCryptoOutputStream *v8; // x19
  size_t v9; // x22
  char *v10; // x21
  SFUCryptor *v11; // x0
  uint32_t v12; // w0
  __int64 v14; // [xsp+0h] [xbp-60h] BYREF

  v8 = -[SFUCryptoOutputStream init](self, "init");
  if ( v8 )
  {
    v8->mBaseStream = (SFUOutputStream *)objc_retain(a3);
    v8->mComputeCrc32 = a5;
    v9 = +[SFUCryptoUtils ivLengthForKey:](&OBJC_CLASS___SFUCryptoUtils, "ivLengthForKey:", a4);
    v10 = (char *)&v14 - (((unsigned int)v9 + 15LL) & 0x1FFFFFFF0LL);
    if ( SecRandomCopyBytes(kSecRandomDefault, (unsigned int)v9, v10) )
      +[NSException raise:format:](
        &OBJC_CLASS___NSException,
        "raise:format:",
        NSGenericException,
        CFSTR("Failed to generate IV"));
    v11 = -[SFUCryptor initWithKey:operation:iv:ivLength:](
            objc_alloc(&OBJC_CLASS___SFUCryptor),
            "initWithKey:operation:iv:ivLength:",
            a4,
            0LL,
            v10,
            (unsigned int)v9);
    v8->mCryptor = v11;
    if ( !v11 )
      +[NSException raise:format:](
        &OBJC_CLASS___NSException,
        "raise:format:",
        NSGenericException,
        CFSTR("Failed to create SFUCryptor"));
    -[SFUOutputStream writeBuffer:size:](v8->mBaseStream, "writeBuffer:size:", v10, (unsigned int)v9);
    if ( v8->mComputeCrc32 )
    {
      v12 = crc32(0, 0LL, 0LL);
      v8->mCrc32 = v12;
      v8->mCrc32 = crc32(v12, v10, v9);
    }
    if ( (_DWORD)v9 )
    {
      if ( SecRandomCopyBytes(kSecRandomDefault, (unsigned int)v9, v10) )
        +[NSException raise:format:](
          &OBJC_CLASS___NSException,
          "raise:format:",
          NSGenericException,
          CFSTR("Failed to generate initial plaintext"));
      -[SFUCryptoOutputStream writeBuffer:size:](v8, "writeBuffer:size:", v10, (unsigned int)v9);
    }
  }
  return v8;
}