-[job_spool_client_t fileHandleForStreaming]
id __cdecl -[job_spool_client_t fileHandleForStreaming](job_spool_client_t *self, SEL a2)
{
  NSFileManager *v3; // x21
  NSURL *v4; // x19
  __int64 v5; // x23
  NSProcessInfo *v6; // x22
  NSString *v7; // x24
  NSString *v8; // x21
  NSURL *v9; // x0
  NSURL *filePathForStreaming; // x8
  NSFileManager *v11; // x22
  NSString *v12; // x23
  NSData *v13; // x24
  NSURL *v14; // x2
  NSFileHandle *v15; // x23
  NSFileHandle *v16; // x22
  NSFileHandle *fileHandleForStreaming; // x0
  os_log_s *v18; // x23
  os_log_s *v19; // x19
  NSFileHandle *v20; // x8
  NSFileHandle *v21; // x0
  id v23; // [xsp+18h] [xbp-68h] BYREF
  uint8_t buf[4]; // [xsp+20h] [xbp-60h] BYREF
  NSFileHandle *v25; // [xsp+24h] [xbp-5Ch]
  __int64 vars8; // [xsp+88h] [xbp+8h]

  if ( !self->_fileHandleForStreaming )
  {
    v3 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v4 = objc_retainAutoreleasedReturnValue(-[NSFileManager temporaryDirectory](v3, "temporaryDirectory"));
    objc_release(v3);
    v5 = getpid();
    v6 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
    v7 = objc_retainAutoreleasedReturnValue(-[NSProcessInfo globallyUniqueString](v6, "globallyUniqueString"));
    v8 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%d-%@.tmp"), v5, v7));
    objc_release(v7);
    objc_release(v6);
    v9 = objc_retainAutoreleasedReturnValue(-[NSURL URLByAppendingPathComponent:](v4, "URLByAppendingPathComponent:", v8));
    filePathForStreaming = self->_filePathForStreaming;
    self->_filePathForStreaming = v9;
    objc_release(filePathForStreaming);
    v11 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v12 = objc_retainAutoreleasedReturnValue(-[NSURL path](self->_filePathForStreaming, "path"));
    v13 = objc_retainAutoreleasedReturnValue(+[NSData data](&OBJC_CLASS___NSData, "data"));
    -[NSFileManager createFileAtPath:contents:attributes:](v11, "createFileAtPath:contents:attributes:", v12, v13, 0LL);
    objc_release(v13);
    objc_release(v12);
    objc_release(v11);
    v14 = self->_filePathForStreaming;
    v23 = 0LL;
    v15 = objc_retainAutoreleasedReturnValue(
            +[NSFileHandle fileHandleForWritingToURL:error:](
              &OBJC_CLASS___NSFileHandle,
              "fileHandleForWritingToURL:error:",
              v14,
              &v23));
    v16 = (NSFileHandle *)objc_retain(v23);
    fileHandleForStreaming = self->_fileHandleForStreaming;
    self->_fileHandleForStreaming = v15;
    objc_release(fileHandleForStreaming);
    if ( v16 )
    {
      v18 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
      if ( os_log_type_enabled(v18, OS_LOG_TYPE_ERROR) )
      {
        *(_DWORD *)buf = 138543362;
        v25 = v16;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v18,
          OS_LOG_TYPE_ERROR,
          "Couldn't create temp file for streaming: %{public}@",
          buf,
          0xCu);
      }
      objc_release(v18);
    }
    objc_release(v16);
    objc_release(v8);
    objc_release(v4);
  }
  v19 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v19, OS_LOG_TYPE_DEFAULT) )
  {
    v20 = self->_fileHandleForStreaming;
    *(_DWORD *)buf = 138543362;
    v25 = v20;
    _os_log_impl((void *)&_mh_execute_header, v19, OS_LOG_TYPE_DEFAULT, "fileHandleForStreaming %{public}@", buf, 0xCu);
  }
  objc_release(v19);
  v21 = self->_fileHandleForStreaming;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v21);
}