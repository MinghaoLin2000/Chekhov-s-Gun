+[SFUCryptoUtils newBufferedInputStreamForDecryptingFile:key:isDeflated:zipStream:]
id __cdecl +[SFUCryptoUtils newBufferedInputStreamForDecryptingFile:key:isDeflated:zipStream:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        id *a6)
{
  _BOOL4 v7; // w21
  SFUFileInputStream *v9; // x0
  SFUFileInputStream *v10; // x22
  SFUZipInflateInputStream *v11; // x20
  SFUZipInflateInputStream *v12; // x21
  SFUBufferedInputStream *v13; // x19

  v7 = a5;
  v9 = -[SFUFileInputStream initWithPath:offset:](
         objc_alloc(&OBJC_CLASS___SFUFileInputStream),
         "initWithPath:offset:",
         a3,
         0LL);
  if ( v9 )
  {
    v10 = v9;
    v11 = -[SFUCryptoInputStream initForDecryptionWithInputStream:key:](
            objc_alloc(&OBJC_CLASS___SFUCryptoInputStream),
            "initForDecryptionWithInputStream:key:",
            v9,
            a4);
    objc_release(v10);
    if ( !v7 )
    {
      if ( !v11 )
        return 0LL;
LABEL_10:
      v13 = -[SFUBufferedInputStream initWithStream:](
              objc_alloc(&OBJC_CLASS___SFUBufferedInputStream),
              "initWithStream:",
              v11);
      objc_release(v11);
      return v13;
    }
  }
  else
  {
    if ( !v7 )
      return 0LL;
    v11 = 0LL;
  }
  v12 = v11;
  v11 = -[SFUZipInflateInputStream initWithInput:](
          objc_alloc(&OBJC_CLASS___SFUZipInflateInputStream),
          "initWithInput:",
          v11);
  objc_release(v12);
  if ( v11 )
  {
    if ( a6 )
      *a6 = v11;
    goto LABEL_10;
  }
  return 0LL;
}