_generateHashForDataAtLocationAsData
id __fastcall generateHashForDataAtLocationAsData(void *a1, __int64 a2, __int64 a3)
{
  id v5; // x20
  NSFileHandle *v6; // x0
  NSFileHandle *v7; // x21
  void *v8; // x24
  void *v9; // x24
  id v10; // x25
  unsigned __int64 v11; // x26
  __int64 OutputSize; // x23
  char *v13; // x24
  _OWORD v15[64]; // [xsp+0h] [xbp-460h] BYREF
  __int64 vars8; // [xsp+468h] [xbp+8h]

  v5 = objc_retain(a1);
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSFileHandle fileHandleForReadingFromURL:error:](
           &OBJC_CLASS___NSFileHandle,
           "fileHandleForReadingFromURL:error:",
           v5,
           a3));
  v7 = v6;
  v8 = 0LL;
  if ( (_DWORD)a2 && v6 )
  {
    memset(v15, 0, 512);
    CCDigestInit(a2, v15);
    do
    {
      v9 = objc_autoreleasePoolPush();
      v10 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(-[NSFileHandle uarpReadDataUpToLength:error:](v7, "uarpReadDataUpToLength:error:", 0x4000LL, a3)));
      CCDigestUpdate(v15, objc_msgSend(v10, "bytes"), objc_msgSend(v10, "length"));
      v11 = (unsigned __int64)objc_msgSend(v10, "length");
      objc_release(v10);
      objc_autoreleasePoolPop(v9);
    }
    while ( v11 >> 14 );
    OutputSize = CCDigestGetOutputSize(a2);
    v13 = (char *)v15 - ((__chkstk_darwin() + 15) & 0xFFFFFFFFFFFFFFF0LL);
    CCDigestFinal(v15, v13);
    if ( -[NSFileHandle uarpCloseAndReturnError:](v7, "uarpCloseAndReturnError:", a3) )
      v8 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSData), "initWithBytes:length:", v13, OutputSize);
    else
      v8 = 0LL;
  }
  objc_release(v7);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}