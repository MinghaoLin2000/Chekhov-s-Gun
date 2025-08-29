+[SFUCryptoUtils saltFromVerifier:saltLength:]
id __cdecl +[SFUCryptoUtils saltFromVerifier:saltLength:](id a1, SEL a2, id a3, unsigned __int64 a4)
{
  SFUMemoryInputStream *v7; // x19
  void *v8; // x20
  _BYTE v10[6]; // [xsp+0h] [xbp-30h] BYREF
  __int16 v11; // [xsp+6h] [xbp-2Ah] BYREF

  v7 = -[SFUMemoryInputStream initWithData:](objc_alloc(&OBJC_CLASS___SFUMemoryInputStream), "initWithData:", a3);
  if ( ((unsigned int)objc_msgSend(
                        (id)objc_opt_class(a1),
                        "isEncryptionVersionAndFormatSupportedInPassphraseVerifier:",
                        a3) & 1) != 0 )
  {
    v11 = 0;
    if ( (void *)-[SFUMemoryInputStream readToBuffer:size:](v7, "readToBuffer:size:", &v11, 2LL) == (void *)2 && v11 )
    {
      if ( v11 == 1 )
      {
        v8 = objc_msgSend(a1, "saltForSageFiles");
      }
      else
      {
        __chkstk_darwin(-[SFUMemoryInputStream seekToOffset:](v7, "seekToOffset:", 8LL));
        if ( -[SFUMemoryInputStream readToBuffer:size:](
               v7,
               "readToBuffer:size:",
               &v10[-((a4 + 15) & 0xFFFFFFFFFFFFFFF0LL)],
               a4) == a4 )
          v8 = objc_autorelease(
                 objc_msgSend(
                   objc_alloc((Class)&OBJC_CLASS___NSData),
                   "initWithBytes:length:",
                   &v10[-((a4 + 15) & 0xFFFFFFFFFFFFFFF0LL)],
                   a4));
        else
          v8 = 0LL;
      }
    }
    else
    {
      v8 = 0LL;
    }
    objc_release(v7);
  }
  else
  {
    objc_release(v7);
    return 0LL;
  }
  return v8;
}