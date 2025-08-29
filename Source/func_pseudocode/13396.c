-[SFUFileInputStream close]
void __cdecl -[SFUFileInputStream close](SFUFileInputStream *self, SEL a2)
{
  int mFd; // w0
  unsigned int v4; // w21
  os_log_s *v5; // x20
  int v6; // w25
  int v7; // w8
  uint8_t buf[4]; // [xsp+20h] [xbp-80h] BYREF
  unsigned int v9; // [xsp+24h] [xbp-7Ch]
  __int16 v10; // [xsp+28h] [xbp-78h]
  const char *v11; // [xsp+2Ah] [xbp-76h]
  __int16 v12; // [xsp+32h] [xbp-6Eh]
  const char *v13; // [xsp+34h] [xbp-6Ch]
  __int16 v14; // [xsp+3Ch] [xbp-64h]
  int v15; // [xsp+3Eh] [xbp-62h]
  __int16 v16; // [xsp+42h] [xbp-5Eh]
  SFUFileInputStream *v17; // [xsp+44h] [xbp-5Ch]
  __int16 v18; // [xsp+4Ch] [xbp-54h]
  int v19; // [xsp+4Eh] [xbp-52h]
  __int16 v20; // [xsp+52h] [xbp-4Eh]
  int v21; // [xsp+54h] [xbp-4Ch]

  mFd = self->mFd;
  if ( mFd != -1 )
  {
    if ( self->mIsCachingDisabled )
    {
      fcntl(mFd, 48, 0LL);
      self->mIsCachingDisabled = 0;
      mFd = self->mFd;
    }
    if ( close(mFd) )
    {
      v4 = +[TSUAssertionHandler _atomicIncrementAssertCount](
             &OBJC_CLASS___TSUAssertionHandler,
             "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001DEFC8);
      v5 = (os_log_s *)TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      {
        v6 = self->mFd;
        v7 = *__error();
        *(_DWORD *)buf = 67110658;
        v9 = v4;
        v10 = 2082;
        v11 = "-[SFUFileInputStream close]";
        v12 = 2082;
        v13 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/sf/SFUFileInputStream.m";
        v14 = 1024;
        v15 = 178;
        v16 = 2048;
        v17 = self;
        v18 = 1024;
        v19 = v6;
        v20 = 1024;
        v21 = v7;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          v5,
          OS_LOG_TYPE_ERROR,
          "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d Failed to close SFUFileInputStream %p, fd = %d, errno = %d",
          buf,
          0x38u);
      }
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        +[NSString stringWithUTF8String:](
          &OBJC_CLASS___NSString,
          "stringWithUTF8String:",
          "-[SFUFileInputStream close]"),
        +[NSString stringWithUTF8String:](
          &OBJC_CLASS___NSString,
          "stringWithUTF8String:",
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/utility/sf/SFUFileInputStream.m"),
        178LL,
        0LL,
        "Failed to close SFUFileInputStream %p, fd = %d, errno = %d",
        self,
        (unsigned int)self->mFd,
        (unsigned int)*__error());
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    }
    self->mFd = -1;
  }
}