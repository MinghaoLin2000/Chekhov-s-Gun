-[TSUZipFileArchive openWithURL:error:]
bool __cdecl -[TSUZipFileArchive openWithURL:error:](TSUZipFileArchive *self, SEL a2, id a3, id *a4)
{
  id v6; // x19
  __int64 v7; // x21
  void *v8; // x23
  NSString *v9; // x23
  NSString *v10; // x24
  NSURL *v11; // x0
  NSURL *URL; // x8
  unsigned int v13; // w24
  id v14; // x21
  id v15; // x23
  void *v16; // x25
  __int64 v17; // x24
  void *v18; // x25
  TSUZipFileDescriptorWrapper *v19; // x0
  TSUZipFileDescriptorWrapper *fdWrapper; // x8
  bool v21; // w22
  void *v22; // x22
  id v23; // x0
  TSUZipFileDescriptorWrapper *v24; // x0
  id v25; // x24
  id v27; // [xsp+10h] [xbp-50h] BYREF
  id v28; // [xsp+18h] [xbp-48h] BYREF

  v6 = objc_retain(a3);
  if ( self->_fdWrapper )
  {
    v7 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DC8C8);
    v8 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016EA84(v7, v8);
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSUZipFileArchive openWithURL:error:]"));
    v10 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUZipFileArchive.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v9,
      v10,
      191LL,
      0LL,
      "Shouldn't open the archive if it's already open.");
    objc_release(v10);
    objc_release(v9);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v11 = (NSURL *)objc_msgSend(v6, "copy");
  URL = self->_URL;
  self->_URL = v11;
  objc_release(URL);
  objc_msgSend(v6, "removeCachedResourceValueForKey:", NSURLFileSizeKey);
  v27 = 0LL;
  v28 = 0LL;
  v13 = (unsigned int)objc_msgSend(v6, "getResourceValue:forKey:error:", &v28, NSURLFileSizeKey, &v27);
  v14 = objc_retain(v28);
  v15 = objc_retain(v27);
  if ( v13 )
  {
    self->_archiveLength = (unsigned __int64)objc_msgSend(v14, "unsignedLongLongValue");
    v16 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "path")));
    v17 = open((const char *)objc_msgSend(v16, "fileSystemRepresentation"), 0, 0LL);
    objc_release(v16);
    if ( (v17 & 0x80000000) != 0 )
    {
      v23 = objc_retainAutoreleasedReturnValue(
              +[NSError tsu_fileReadPOSIXErrorWithNumber:userInfo:](
                &OBJC_CLASS___NSError,
                "tsu_fileReadPOSIXErrorWithNumber:userInfo:",
                (unsigned int)*__error(),
                0LL));
    }
    else
    {
      if ( ((unsigned int)-[TSUZipArchive options](self, "options") & 0x10) != 0 && fcntl(v17, 48, 1LL) == -1 )
      {
        if ( TSUDefaultCat_init_token != -1 )
          dispatch_once(&TSUDefaultCat_init_token, &stru_1001DC8E8);
        v18 = TSUDefaultCat_log_t;
        if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
          sub_10016E8E8(v18);
      }
      v19 = -[TSUZipFileDescriptorWrapper initWithFileDescriptor:](
              objc_alloc(&OBJC_CLASS___TSUZipFileDescriptorWrapper),
              "initWithFileDescriptor:",
              v17);
      fdWrapper = self->_fdWrapper;
      self->_fdWrapper = v19;
      objc_release(fdWrapper);
      if ( self->_fdWrapper )
      {
        if ( ((unsigned int)objc_msgSend((id)objc_opt_class(self), "isZipArchiveAtFD:", v17) & 1) != 0 )
        {
          v21 = 1;
          if ( !a4 )
            goto LABEL_31;
          goto LABEL_29;
        }
        v24 = self->_fdWrapper;
        self->_fdWrapper = 0LL;
        objc_release(v24);
        v23 = objc_retainAutoreleasedReturnValue(
                +[NSError tsu_fileReadCorruptedFileErrorWithUserInfo:](
                  &OBJC_CLASS___NSError,
                  "tsu_fileReadCorruptedFileErrorWithUserInfo:",
                  0LL));
      }
      else
      {
        v23 = objc_retainAutoreleasedReturnValue(
                +[NSError tsu_fileReadUnknownErrorWithUserInfo:](
                  &OBJC_CLASS___NSError,
                  "tsu_fileReadUnknownErrorWithUserInfo:",
                  0LL));
      }
    }
    v25 = v23;
    objc_release(v15);
    v21 = 0;
    v15 = v25;
    if ( !a4 )
      goto LABEL_31;
    goto LABEL_29;
  }
  if ( TSUDefaultCat_init_token != -1 )
    dispatch_once(&TSUDefaultCat_init_token, &stru_1001DC908);
  v22 = TSUDefaultCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
    sub_10016E974((int)v6, v22);
  v21 = 0;
  if ( a4 )
  {
LABEL_29:
    if ( v15 )
      *a4 = objc_retainAutorelease(v15);
  }
LABEL_31:
  objc_release(v15);
  objc_release(v14);
  objc_release(v6);
  return v21;
}