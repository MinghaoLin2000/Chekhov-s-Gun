-[SFUBufferedInputStream initWithStream:bufferSize:]
SFUBufferedInputStream *__cdecl -[SFUBufferedInputStream initWithStream:bufferSize:](
        SFUBufferedInputStream *self,
        SEL a2,
        id a3,
        unsigned __int64 a4)
{
  SFUBufferedInputStream *v6; // x0
  SFUBufferedInputStream *v7; // x19
  char *v8; // x0
  void *v9; // x0
  objc_super v11; // [xsp+0h] [xbp-30h] BYREF

  v11.receiver = self;
  v11.super_class = (Class)&OBJC_CLASS___SFUBufferedInputStream;
  v6 = -[SFUBufferedInputStream init](&v11, "init");
  v7 = v6;
  if ( v6 )
  {
    if ( a3 )
    {
      v6->mStream = (SFUInputStream *)objc_retain(a3);
      v7->mBufferSize = a4;
      v8 = (char *)malloc_type_malloc(a4, 0x22AE73CEuLL);
      v7->mBuffer = v8;
      if ( !v8 )
      {
        objc_release(v7);
        +[NSException raise:format:](
          &OBJC_CLASS___NSException,
          "raise:format:",
          CFSTR("SFUBufferedInputStreamError"),
          CFSTR("Could not create read buffer"));
      }
      v9 = -[SFUInputStream offset](v7->mStream, "offset");
      v7->mBufferStart = (signed __int64)v9;
      v7->mBufferEnd = (signed __int64)v9;
    }
    else
    {
      objc_release(v6);
      return 0LL;
    }
  }
  return v7;
}