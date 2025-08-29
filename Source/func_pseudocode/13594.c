+[SFUCryptoUtils newBufferedInputStreamForDecryptingZippedBundle:key:zipArchive:isDeflated:zipStream:]
id __cdecl +[SFUCryptoUtils newBufferedInputStreamForDecryptingZippedBundle:key:zipArchive:isDeflated:zipStream:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        id a5,
        bool a6,
        id *a7)
{
  _BOOL4 v8; // w20
  void *v10; // x0
  void *v11; // x0
  SFUZipInflateInputStream *v12; // x21
  SFUZipInflateInputStream *v13; // x20
  SFUBufferedInputStream *v14; // x19

  v8 = a6;
  v10 = objc_msgSend(a5, "entryWithName:", a3);
  if ( v10 && (v11 = objc_msgSend(v10, "inputStream")) != 0LL )
  {
    v12 = -[SFUCryptoInputStream initForDecryptionWithInputStream:key:](
            objc_alloc(&OBJC_CLASS___SFUCryptoInputStream),
            "initForDecryptionWithInputStream:key:",
            v11,
            a4);
    if ( !v8 )
      goto LABEL_4;
  }
  else
  {
    v12 = 0LL;
    if ( !v8 )
    {
LABEL_4:
      if ( !v12 )
        return 0LL;
LABEL_11:
      v14 = -[SFUBufferedInputStream initWithStream:](
              objc_alloc(&OBJC_CLASS___SFUBufferedInputStream),
              "initWithStream:",
              v12);
      objc_release(v12);
      return v14;
    }
  }
  v13 = -[SFUZipInflateInputStream initWithInput:](
          objc_alloc(&OBJC_CLASS___SFUZipInflateInputStream),
          "initWithInput:",
          v12);
  objc_release(v12);
  if ( v13 )
  {
    if ( a7 )
      *a7 = v13;
    v12 = v13;
    goto LABEL_11;
  }
  return 0LL;
}