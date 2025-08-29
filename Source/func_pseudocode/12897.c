-[SFUMemoryInputStream initWithData:offset:length:]
SFUMemoryInputStream *__cdecl -[SFUMemoryInputStream initWithData:offset:length:](
        SFUMemoryInputStream *self,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  SFUMemoryInputStream *v8; // x0
  SFUMemoryInputStream *v9; // x21
  char *v10; // x0
  NSData *v11; // x0
  char *v12; // x0
  objc_super v14; // [xsp+0h] [xbp-30h] BYREF

  v14.receiver = self;
  v14.super_class = (Class)&OBJC_CLASS___SFUMemoryInputStream;
  v8 = -[SFUMemoryInputStream init](&v14, "init");
  v9 = v8;
  if ( v8 )
  {
    if ( a3 )
    {
      v10 = (char *)objc_msgSend(a3, "length");
      if ( (unsigned __int64)v10 < a5 || (unsigned __int64)&v10[-a5] < a4 )
      {
        objc_release(v9);
        +[NSException raise:format:](
          &OBJC_CLASS___NSException,
          "raise:format:",
          NSInvalidArgumentException,
          CFSTR("Bad data range."));
      }
      v11 = (NSData *)objc_retain(a3);
      v9->mData = v11;
      v12 = -[NSData bytes](v11, "bytes");
      v9->mStart = &v12[a4];
      v9->mCurrent = &v12[a4];
      v9->mEnd = &v12[a4 + a5];
    }
    else
    {
      objc_release(v8);
      return 0LL;
    }
  }
  return v9;
}