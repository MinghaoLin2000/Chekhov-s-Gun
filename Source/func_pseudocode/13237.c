-[SFUZipArchive decompressAtPath:wasEmpty:]
bool __cdecl -[SFUZipArchive decompressAtPath:wasEmpty:](SFUZipArchive *self, SEL a2, id a3, bool *a4)
{
  NSFileManager *v6; // x22
  __int64 v7; // x20
  void *v8; // x21
  void *v9; // x23
  char v10; // w19
  void *v11; // x24
  __int64 v12; // x25
  void *i; // x21
  void *v14; // x27
  char *v15; // x26
  void *v16; // x28
  unsigned __int8 v17; // w26
  __int64 v18; // x20
  void *v19; // x21
  char v20; // w8
  _BYTE *v22; // [xsp+0h] [xbp-140h]
  __int128 v24; // [xsp+10h] [xbp-130h] BYREF
  __int128 v25; // [xsp+20h] [xbp-120h]
  __int128 v26; // [xsp+30h] [xbp-110h]
  __int128 v27; // [xsp+40h] [xbp-100h]
  char v28; // [xsp+5Fh] [xbp-E1h] BYREF
  _BYTE v29[128]; // [xsp+60h] [xbp-E0h] BYREF

  v6 = +[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager");
  v28 = 0;
  if ( -[NSFileManager fileExistsAtPath:isDirectory:](v6, "fileExistsAtPath:isDirectory:", a3, &v28) )
  {
    if ( !v28 )
    {
      v7 = +[TSUAssertionHandler _atomicIncrementAssertCount](
             &OBJC_CLASS___TSUAssertionHandler,
             "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001DE798);
      v8 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_100172B14(v7, v8);
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        +[NSString stringWithUTF8String:](
          &OBJC_CLASS___NSString,
          "stringWithUTF8String:",
          "-[SFUZipArchive decompressAtPath:wasEmpty:]",
          a4),
        +[NSString stringWithUTF8String:](
          &OBJC_CLASS___NSString,
          "stringWithUTF8String:",
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/utility/sf/SFUZipArchive.m"),
        220LL,
        0LL,
        "Can only decompress into a directory");
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
LABEL_27:
      v20 = 0;
      v17 = 0;
      goto LABEL_30;
    }
  }
  else if ( !-[NSFileManager createDirectoryAtPath:withIntermediateDirectories:attributes:error:](
               v6,
               "createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
               a3,
               1LL,
               0LL,
               0LL) )
  {
    v18 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DE778);
    v19 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100172B9C(v18, v19);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[SFUZipArchive decompressAtPath:wasEmpty:]",
        a4),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUZipArchive.m"),
      217LL,
      0LL,
      "Can't create output directory");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    goto LABEL_27;
  }
  v9 = objc_msgSend(-[SFUZipArchive allEntryNames](self, "allEntryNames", a4), "sortedArrayUsingSelector:", "compare:");
  v26 = 0u;
  v27 = 0u;
  v24 = 0u;
  v25 = 0u;
  v10 = 0;
  v11 = objc_msgSend(v9, "countByEnumeratingWithState:objects:count:", &v24, v29, 16LL);
  if ( v11 )
  {
    v12 = *(_QWORD *)v25;
    do
    {
      for ( i = 0LL; i != v11; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v25 != v12 )
          objc_enumerationMutation(v9);
        v14 = *(void **)(*((_QWORD *)&v24 + 1) + 8LL * (_QWORD)i);
        v15 = (char *)objc_msgSend(v14, "length");
        v16 = objc_msgSend(a3, "stringByAppendingPathComponent:", v14);
        if ( (unsigned int)objc_msgSend(v14, "characterAtIndex:", v15 - 1) == 47 )
        {
          v17 = -[NSFileManager createDirectoryAtPath:withIntermediateDirectories:attributes:error:](
                  v6,
                  "createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
                  v16,
                  1LL,
                  0LL,
                  0LL);
        }
        else
        {
          v17 = -[NSFileManager createDirectoryAtPath:withIntermediateDirectories:attributes:error:](
                  v6,
                  "createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
                  objc_msgSend(v16, "stringByDeletingLastPathComponent"),
                  1LL,
                  0LL,
                  0LL);
          objc_msgSend(-[SFUZipArchive entryWithName:](self, "entryWithName:", v14), "copyToFile:", v16);
          if ( (v10 & 1) == 0 && !(unsigned int)objc_msgSend(v14, "hasPrefix:", CFSTR(".")) )
            v10 = 1;
        }
      }
      v11 = objc_msgSend(v9, "countByEnumeratingWithState:objects:count:", &v24, v29, 16LL);
    }
    while ( v11 );
  }
  else
  {
    v17 = 1;
  }
  v20 = v10;
LABEL_30:
  if ( v22 )
    *v22 = v20 ^ 1;
  return v17;
}