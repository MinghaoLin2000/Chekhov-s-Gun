-[SFUZipArchive readExtraFieldFromBuffer:size:entry:]
void __cdecl -[SFUZipArchive readExtraFieldFromBuffer:size:entry:](
        SFUZipArchive *self,
        SEL a2,
        const char *a3,
        unsigned __int64 a4,
        id a5)
{
  __int64 v5; // x29
  __int64 v6; // x30
  const char *v9; // x23
  __int64 v10; // x3
  const char *v11; // x8
  const char *v12; // x25
  unsigned int v13; // w9
  bool v14; // zf
  void *v15; // x21
  os_log_s *v16; // x19
  _DWORD v17[2]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v18; // [xsp+60h] [xbp-10h]
  __int64 v19; // [xsp+68h] [xbp-8h]

  if ( (__int64)a4 >= 4 )
  {
    v18 = v5;
    v19 = v6;
    v9 = &a3[a4];
    qmemcpy(v17, "iwphiwuu", sizeof(v17));
    while ( 1 )
    {
      v10 = *((unsigned __int16 *)a3 + 1);
      v11 = a3 + 4;
      v12 = &a3[v10 + 4];
      if ( v12 > v9 )
        break;
      v13 = *(unsigned __int16 *)a3;
      if ( v13 > 0x636D )
      {
        if ( v13 == 25454 )
        {
          v14 = (unsigned int)v10 >= 4 && self->mPassphraseHint == 0LL;
          if ( v14 && *(_DWORD *)v11 == v17[0] )
          {
            v15 = objc_msgSend(
                    objc_alloc((Class)&OBJC_CLASS___NSData),
                    "initWithBytes:length:",
                    a3 + 8,
                    (unsigned int)(v10 - 4));
            self->mPassphraseHint = (NSString *)objc_retain(
                                                  +[SFUCryptoUtils decodePassphraseHint:](
                                                    &OBJC_CLASS___SFUCryptoUtils,
                                                    "decodePassphraseHint:",
                                                    v15));
            objc_release(v15);
          }
        }
        else if ( v13 == 25455 && (unsigned int)v10 >= 4 && !self->mEncryptedDocumentUuid && *(_DWORD *)v11 == v17[1] )
        {
          self->mEncryptedDocumentUuid = (NSData *)objc_msgSend(
                                                     objc_alloc((Class)&OBJC_CLASS___NSData),
                                                     "initWithBytes:length:",
                                                     a3 + 8,
                                                     (unsigned int)(v10 - 4));
        }
      }
      else if ( v13 == 1 )
      {
        objc_msgSend(a5, "readZip64ExtraField:size:", a3 + 4);
      }
      else if ( v13 == 25453 && (unsigned int)v10 >= 4 && !self->mPassphraseVerifier && *(_DWORD *)v11 == 1987082089 )
      {
        self->mPassphraseVerifier = (NSData *)objc_msgSend(
                                                objc_alloc((Class)&OBJC_CLASS___NSData),
                                                "initWithBytes:length:",
                                                a3 + 8,
                                                (unsigned int)(v10 - 4));
      }
      a3 = v12;
      if ( v12 + 4 > v9 )
        return;
    }
    if ( TSUErrorCat_init_token != -1 )
      dispatch_once(&TSUErrorCat_init_token, &stru_1001DE7B8);
    v16 = (os_log_s *)TSUErrorCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUErrorCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100172C24(v16);
  }
}