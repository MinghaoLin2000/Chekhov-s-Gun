-[SFUDataRepresentation xmlDocument]
_xmlDoc *__cdecl -[SFUDataRepresentation xmlDocument](SFUDataRepresentation *self, SEL a2)
{
  id v3; // x20
  unsigned __int64 v4; // x0
  int v5; // w19
  __int64 v6; // x21
  void *v7; // x22
  xmlParserCtxtPtr PushParserCtxt; // x21
  unsigned __int64 v9; // x0
  int v10; // w27
  unsigned int v11; // w28
  os_log_s *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x0
  _xmlDoc *myDoc; // x23
  void *context; // [xsp+20h] [xbp-90h]
  char *chunk; // [xsp+28h] [xbp-88h] BYREF
  uint8_t buf[4]; // [xsp+30h] [xbp-80h] BYREF
  unsigned int v20; // [xsp+34h] [xbp-7Ch]
  __int16 v21; // [xsp+38h] [xbp-78h]
  const char *v22; // [xsp+3Ah] [xbp-76h]
  __int16 v23; // [xsp+42h] [xbp-6Eh]
  const char *v24; // [xsp+44h] [xbp-6Ch]
  __int16 v25; // [xsp+4Ch] [xbp-64h]
  int v26; // [xsp+4Eh] [xbp-62h]

  context = objc_autoreleasePoolPush();
  v3 = -[SFUDataRepresentation bufferedInputStream](self, "bufferedInputStream");
  chunk = 0LL;
  v4 = (unsigned __int64)objc_msgSend(v3, "readToOwnBuffer:size:", &chunk, -1LL);
  v5 = v4;
  if ( v4 >> 31 )
  {
    v6 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DF758);
    v7 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100174C28(v6, v7);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[SFUDataRepresentation xmlDocument]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUDataRepresentation.m"),
      92LL,
      0LL,
      "overflow in xmlDocument");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  PushParserCtxt = xmlCreatePushParserCtxt(0LL, 0LL, chunk, v5, 0LL);
  if ( !PushParserCtxt )
    +[NSException raise:format:](
      &OBJC_CLASS___NSException,
      "raise:format:",
      CFSTR("SFUDataRepresentationError"),
      CFSTR("xmlCreatePushParserCtxt() failed"));
  while ( 1 )
  {
    v9 = (unsigned __int64)objc_msgSend(v3, "readToOwnBuffer:size:", &chunk, -1LL);
    v10 = v9;
    if ( !v9 )
      break;
    if ( v9 >> 31 )
    {
      v11 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001DF778);
      v12 = (os_log_s *)TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      {
        *(_DWORD *)buf = 67109890;
        v20 = v11;
        v21 = 2082;
        v22 = "-[SFUDataRepresentation xmlDocument]";
        v23 = 2082;
        v24 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/sf/SFUDataRepresentation.m";
        v25 = 1024;
        v26 = 105;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          v12,
          OS_LOG_TYPE_ERROR,
          "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d overflow in xmlDocument",
          buf,
          0x22u);
      }
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        +[NSString stringWithUTF8String:](
          &OBJC_CLASS___NSString,
          "stringWithUTF8String:",
          "-[SFUDataRepresentation xmlDocument]"),
        +[NSString stringWithUTF8String:](
          &OBJC_CLASS___NSString,
          "stringWithUTF8String:",
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/utility/sf/SFUDataRepresentation.m"),
        105LL,
        0LL,
        "overflow in xmlDocument");
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    }
    v13 = xmlParseChunk(PushParserCtxt, chunk, v10, 0);
    if ( (_DWORD)v13 )
      +[NSException raise:format:](
        &OBJC_CLASS___NSException,
        "raise:format:",
        CFSTR("SFUDataRepresentationError"),
        CFSTR("xmlParseChunk() failed: %d"),
        v13);
  }
  v14 = xmlParseChunk(PushParserCtxt, chunk, 0, 1);
  if ( (_DWORD)v14 )
    +[NSException raise:format:](
      &OBJC_CLASS___NSException,
      "raise:format:",
      CFSTR("SFUDataRepresentationError"),
      CFSTR("xmlParseChunk() failed: %d"),
      v14);
  myDoc = PushParserCtxt->myDoc;
  if ( !PushParserCtxt->wellFormed )
    +[NSException raise:format:](
      &OBJC_CLASS___NSException,
      "raise:format:",
      CFSTR("SFUDataRepresentationError"),
      CFSTR("XML document is not well formed."));
  xmlFreeParserCtxt(PushParserCtxt);
  objc_msgSend(v3, "close");
  objc_autoreleasePoolPop(context);
  return myDoc;
}