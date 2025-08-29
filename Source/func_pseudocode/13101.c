-[SFUFileDataRepresentation initWithCopyOfData:path:cryptoKey:]
SFUFileDataRepresentation *__cdecl -[SFUFileDataRepresentation initWithCopyOfData:path:cryptoKey:](
        SFUFileDataRepresentation *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  __int64 v9; // x0
  void *v10; // x23
  void *v11; // x25
  SFUFileOutputStream *v12; // x0
  SFUFileOutputStream *v13; // x26
  SFUFileOutputStream *v14; // x24
  void *v16; // x3
  __int64 v17; // [xsp+8h] [xbp-48h] BYREF

  if ( a3 )
  {
    v9 = objc_opt_class(&OBJC_CLASS___SFUFileDataRepresentation);
    if ( (objc_opt_isKindOfClass(a3, v9) & 1) == 0
      || !(unsigned int)objc_msgSend(objc_msgSend(a3, "path"), "isEqualToString:", a4)
      || ((unsigned int)objc_msgSend(a3, "isCryptoKeyIdenticalToKey:", a5) & 1) == 0 )
    {
      v10 = objc_autoreleasePoolPush();
      v11 = objc_msgSend(a3, "bufferedInputStream");
      unlink((const char *)objc_msgSend(a4, "fileSystemRepresentation"));
      v12 = -[SFUFileOutputStream initWithPath:](objc_alloc(&OBJC_CLASS___SFUFileOutputStream), "initWithPath:", a4);
      v13 = v12;
      if ( a5 )
      {
        v14 = -[SFUCryptoOutputStream initForEncryptionWithOutputStream:key:](
                objc_alloc(&OBJC_CLASS___SFUCryptoOutputStream),
                "initForEncryptionWithOutputStream:key:",
                v12,
                a5);
        objc_release(v13);
      }
      else
      {
        v14 = v12;
      }
      while ( 1 )
      {
        v17 = 0LL;
        v16 = objc_msgSend(v11, "readToOwnBuffer:size:", &v17, -1LL);
        if ( !v16 )
          break;
        -[SFUFileOutputStream writeBuffer:size:](v14, "writeBuffer:size:", v17, v16);
      }
      objc_msgSend(v11, "close");
      -[SFUFileOutputStream close](v14, "close");
      objc_release(v14);
      objc_autoreleasePoolPop(v10);
    }
    return -[SFUFileDataRepresentation initWithPath:cryptoKey:dataLength:](
             self,
             "initWithPath:cryptoKey:dataLength:",
             a4,
             a5,
             objc_msgSend(a3, "dataLength"));
  }
  else
  {
    objc_release(self);
    return 0LL;
  }
}