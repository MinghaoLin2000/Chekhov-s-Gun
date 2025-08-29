-[TSUExtendedAttribute initFromPathFileSystemRepresentation:name:forRemoval:options:error:]
id __cdecl -[TSUExtendedAttribute initFromPathFileSystemRepresentation:name:forRemoval:options:error:](
        TSUExtendedAttribute *self,
        SEL a2,
        const char *a3,
        id a4,
        bool a5,
        int a6,
        id *a7)
{
  _BOOL4 v9; // w22
  id v12; // x19
  const char *v13; // x0
  TSUExtendedAttribute *v14; // x22
  __int64 v15; // x2
  const char *v16; // x25
  ssize_t v17; // x0
  size_t v18; // x23
  id v19; // x0
  void *v20; // x0
  void *v21; // x22
  ssize_t v22; // x0
  __int64 v23; // x21
  void *v24; // x24
  NSString *v25; // x24
  NSString *v26; // x25
  void *v27; // x21
  os_log_s *v28; // x23

  v9 = a5;
  v12 = objc_retainAutorelease(objc_retain(a4));
  v13 = (const char *)objc_msgSend(v12, "UTF8String");
  if ( !v13 )
  {
    if ( a7 )
    {
      v15 = 22LL;
LABEL_23:
      v14 = 0LL;
      *a7 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError tsu_fileReadPOSIXErrorWithNumber:userInfo:](
                  &OBJC_CLASS___NSError,
                  "tsu_fileReadPOSIXErrorWithNumber:userInfo:",
                  v15,
                  0LL)));
      goto LABEL_31;
    }
LABEL_30:
    v14 = 0LL;
    goto LABEL_31;
  }
  if ( !v9 )
  {
    v16 = v13;
    v17 = getxattr(a3, v13, 0LL, 0LL, 0, a6);
    if ( !v17 )
    {
      v19 = objc_alloc_init((Class)&OBJC_CLASS___NSData);
LABEL_20:
      v27 = v19;
      self = objc_retain(-[TSUExtendedAttribute initWithName:value:](self, "initWithName:value:", v12, v19));
      objc_release(v27);
      v14 = self;
      goto LABEL_31;
    }
    v18 = v17;
    if ( v17 == -1 )
    {
      if ( a7 )
      {
        v15 = (unsigned int)*__error();
        goto LABEL_23;
      }
      goto LABEL_30;
    }
    v20 = malloc_type_malloc(v17, 0xBE6614CEuLL);
    if ( !v20 )
    {
      if ( a7 )
      {
        v15 = 12LL;
        goto LABEL_23;
      }
      goto LABEL_30;
    }
    v21 = v20;
    v22 = getxattr(a3, v16, v20, v18, 0, a6);
    if ( v22 != -1 )
    {
      if ( v22 != v18 )
      {
        v23 = +[TSUAssertionHandler _atomicIncrementAssertCount](
                &OBJC_CLASS___TSUAssertionHandler,
                "_atomicIncrementAssertCount");
        if ( TSUAssertCat_init_token != -1 )
          dispatch_once(&TSUAssertCat_init_token, &stru_1001DCEB8);
        v24 = TSUAssertCat_log_t;
        if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
          sub_10016F4F4(v23, v24);
        v25 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithUTF8String:](
                  &OBJC_CLASS___NSString,
                  "stringWithUTF8String:",
                  "-[TSUExtendedAttribute initFromPathFileSystemRepresentation:name:forRemoval:options:error:]"));
        v26 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithUTF8String:](
                  &OBJC_CLASS___NSString,
                  "stringWithUTF8String:",
                  "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/So"
                  "urces/iWorkXPC/shared/utility/TSUExtendedAttribute.m"));
        +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
          &OBJC_CLASS___TSUAssertionHandler,
          "handleFailureInFunction:file:lineNumber:isFatal:description:",
          v25,
          v26,
          80LL,
          0LL,
          "Unexpected result.");
        objc_release(v26);
        objc_release(v25);
        +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
      }
      v19 = objc_msgSend(
              objc_alloc((Class)&OBJC_CLASS___NSData),
              "initWithBytesNoCopy:length:freeWhenDone:",
              v21,
              v18,
              1LL);
      goto LABEL_20;
    }
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001DCE98);
    v28 = (os_log_s *)TSUDefaultCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
    {
      sub_10016F46C((int)v16, (int)a3, v28);
      if ( !a7 )
        goto LABEL_29;
    }
    else if ( !a7 )
    {
LABEL_29:
      free(v21);
      goto LABEL_30;
    }
    *a7 = objc_autorelease(
            objc_retainAutoreleasedReturnValue(
              +[NSError tsu_fileReadPOSIXErrorWithNumber:userInfo:](
                &OBJC_CLASS___NSError,
                "tsu_fileReadPOSIXErrorWithNumber:userInfo:",
                (unsigned int)*__error(),
                0LL)));
    goto LABEL_29;
  }
  self = objc_retain(-[TSUExtendedAttribute initWithName:value:](self, "initWithName:value:", v12, 0LL));
  v14 = self;
LABEL_31:
  objc_release(v12);
  objc_release(self);
  return v14;
}