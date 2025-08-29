-[SFUZipEntry inputStream]
id __cdecl -[SFUZipEntry inputStream](SFUZipEntry *self, SEL a2)
{
  SFUZipInflateInputStream *v3; // x19
  SFUZipInflateInputStream *v4; // x0
  SFUZipInflateInputStream *v5; // x20
  int mCompressionMethod; // w8
  int v7; // w8
  SFUZipArchiveDataRepresentation *mArchiveDataRepresentation; // x20
  signed __int64 v9; // x3
  __int64 v11; // x21
  void *v12; // x22
  __int64 v13; // x19
  void *v14; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = -[SFUZipEntry dataOffset](self, "dataOffset");
  if ( !v3 )
    return v3;
  if ( self->mCryptoKey )
  {
    v3 = (SFUZipInflateInputStream *)-[SFUZipArchiveDataRepresentation inputStreamWithOffset:length:](
                                       self->mArchiveDataRepresentation,
                                       "inputStreamWithOffset:length:",
                                       v3,
                                       self->mCompressedSize);
    v4 = -[SFUCryptoInputStream initForDecryptionWithInputStream:key:](
           objc_alloc(&OBJC_CLASS___SFUCryptoInputStream),
           "initForDecryptionWithInputStream:key:",
           v3,
           self->mCryptoKey);
    v5 = v4;
    mCompressionMethod = self->mCompressionMethod;
    if ( mCompressionMethod == 1 )
    {
      v3 = objc_autorelease(
             -[SFUZipInflateInputStream initWithInput:](
               objc_alloc(&OBJC_CLASS___SFUZipInflateInputStream),
               "initWithInput:",
               v4));
    }
    else
    {
      if ( !mCompressionMethod )
        goto LABEL_19;
      v11 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001DD990);
      v12 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_1001709C0(v11, v12);
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", "-[SFUZipEntry inputStream]"),
        +[NSString stringWithUTF8String:](
          &OBJC_CLASS___NSString,
          "stringWithUTF8String:",
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/utility/sf/SFUZipEntry.m"),
        141LL,
        0LL,
        "Bad compression method.");
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    }
    objc_release(v5);
    return v3;
  }
  v7 = self->mCompressionMethod;
  if ( v7 == 1 )
  {
    v4 = -[SFUZipInflateInputStream initWithOffset:end:uncompressedSize:crc:dataRepresentation:](
           objc_alloc(&OBJC_CLASS___SFUZipInflateInputStream),
           "initWithOffset:end:uncompressedSize:crc:dataRepresentation:",
           v3,
           (char *)v3 + self->mCompressedSize,
           self->mUncompressedSize,
           self->mCrc,
           self->mArchiveDataRepresentation);
LABEL_19:
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return objc_autorelease(v4);
  }
  if ( v7 )
  {
    v13 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DD9B0);
    v14 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100170938(v13, v14);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", "-[SFUZipEntry inputStream]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUZipEntry.m"),
      154LL,
      0LL,
      "Bad compression method.");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    return 0LL;
  }
  mArchiveDataRepresentation = self->mArchiveDataRepresentation;
  v9 = -[SFUZipEntry dataLength](self, "dataLength");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[SFUZipArchiveDataRepresentation inputStreamWithOffset:length:](
           mArchiveDataRepresentation,
           "inputStreamWithOffset:length:",
           v3,
           v9);
}