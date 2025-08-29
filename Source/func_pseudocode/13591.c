+[SFUCryptoUtils checkKey:againstPassphraseVerifier:]
bool __cdecl +[SFUCryptoUtils checkKey:againstPassphraseVerifier:](id a1, SEL a2, id a3, id a4)
{
  SFUMemoryInputStream *v7; // x19
  unsigned int v8; // w25
  int v9; // w22
  void *v10; // x22
  void *v11; // x0
  unsigned int v12; // w23
  __int64 v13; // x21
  __int64 v14; // x8
  char *v15; // x22
  SFUCryptor *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x21
  unsigned int v19; // w0
  bool v20; // zf
  int v21; // w0
  __int64 v26; // [xsp+0h] [xbp-130h] BYREF
  CC_SHA256_CTX c; // [xsp+8h] [xbp-128h] BYREF
  __int64 v28; // [xsp+70h] [xbp-C0h] BYREF
  __int64 v29; // [xsp+78h] [xbp-B8h] BYREF
  int v30; // [xsp+80h] [xbp-B0h] BYREF
  __int16 v31; // [xsp+84h] [xbp-ACh] BYREF
  unsigned __int16 v32; // [xsp+86h] [xbp-AAh] BYREF
  unsigned __int8 md[8]; // [xsp+88h] [xbp-A8h] BYREF
  __int64 v34; // [xsp+90h] [xbp-A0h]
  __int64 v35; // [xsp+98h] [xbp-98h]
  __int64 v36; // [xsp+A0h] [xbp-90h]
  _BYTE data[32]; // [xsp+A8h] [xbp-88h] BYREF
  __int64 v38; // [xsp+C8h] [xbp-68h]
  __int64 v39; // [xsp+D0h] [xbp-60h]
  __int64 v40; // [xsp+D8h] [xbp-58h]
  __int64 v41; // [xsp+E0h] [xbp-50h]

  v7 = -[SFUMemoryInputStream initWithData:](objc_alloc(&OBJC_CLASS___SFUMemoryInputStream), "initWithData:", a4);
  v32 = 0;
  if ( (void *)-[SFUMemoryInputStream readToBuffer:size:](v7, "readToBuffer:size:", &v32, 2LL) == (void *)2
    && (v8 = v32,
        v31 = 0,
        (void *)-[SFUMemoryInputStream readToBuffer:size:](v7, "readToBuffer:size:", &v31, 2LL) == (void *)2)
    && ((unsigned int)objc_msgSend(
                        (id)objc_opt_class(a1),
                        "isEncryptionVersionAndFormatSupportedInPassphraseVerifier:",
                        a4) & 1) != 0
    && (v30 = 0, (void *)-[SFUMemoryInputStream readToBuffer:size:](v7, "readToBuffer:size:", &v30, 4LL) == (void *)4)
    && (v9 = v30, v9 == (unsigned int)objc_msgSend(a3, "iterationCount"))
    && (v8 < 2
     || (v10 = objc_msgSend(objc_msgSend(a3, "saltData"), "length"),
         __chkstk_darwin(v10),
         (void *)-[SFUMemoryInputStream readToBuffer:size:](v7, "readToBuffer:size:") == v10)) )
  {
    v11 = objc_msgSend(a1, "ivLengthForKey:", a3);
    v12 = (unsigned int)v11;
    v13 = (unsigned int)v11;
    __chkstk_darwin(v11);
    v15 = (char *)&v26 - v14;
    if ( (void *)-[SFUMemoryInputStream readToBuffer:size:](v7, "readToBuffer:size:", (char *)&v26 - v14, v13) == (void *)v12 )
    {
      v16 = -[SFUCryptor initWithKey:operation:iv:ivLength:usePKCS7Padding:](
              objc_alloc(&OBJC_CLASS___SFUCryptor),
              "initWithKey:operation:iv:ivLength:usePKCS7Padding:",
              a3,
              1LL,
              v15,
              v13,
              v8 == 1);
      v17 = 0LL;
      v28 = 0LL;
      v29 = 0LL;
      do
      {
        v18 = v17;
        v19 = -[SFUCryptor cryptDataFromStream:toBuffer:length:bytesRead:error:](
                v16,
                "cryptDataFromStream:toBuffer:length:bytesRead:error:",
                v7,
                &data[v17],
                64 - v17,
                &v29,
                &v28);
        v17 = v29 + v18;
        if ( v19 )
          v20 = v29 == 0;
        else
          v20 = 1;
      }
      while ( !v20 );
      objc_release(v16);
      objc_release(v7);
      LOBYTE(v21) = 0;
      if ( v18 == 64 && !v28 )
      {
        v21 = CC_SHA256_Init(&c);
        if ( v21 )
        {
          v21 = CC_SHA256_Update(&c, data, 0x20u);
          if ( v21 )
          {
            v21 = CC_SHA256_Final(md, &c);
            if ( v21 )
              LOBYTE(v21) = v38 == *(_QWORD *)md && v39 == v34 && v40 == v35 && v41 == v36;
          }
        }
      }
    }
    else
    {
      objc_release(v7);
      LOBYTE(v21) = 0;
    }
  }
  else
  {
    objc_release(v7);
    LOBYTE(v21) = 0;
  }
  return v21;
}