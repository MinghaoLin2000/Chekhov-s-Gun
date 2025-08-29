-[job_spool_client_t moveStreamingFileTo:]
signed __int64 __cdecl -[job_spool_client_t moveStreamingFileTo:](job_spool_client_t *self, SEL a2, id a3)
{
  id v4; // x19
  os_log_s *v5; // x20
  NSFileHandle *fileHandleForStreaming; // x8
  NSFileHandle *v7; // x0
  id v8; // x20
  NSFileHandle *v9; // x0
  os_log_s *v10; // x21
  NSURL *filePathForStreaming; // x8
  const char *v12; // x3
  signed __int64 v13; // x22
  NSFileManager *v14; // x21
  NSURL *v15; // x2
  NSURL *v16; // x0
  unsigned __int8 v18; // w22
  os_log_s *v19; // x22
  id v20; // [xsp+0h] [xbp-70h] BYREF
  id v21; // [xsp+8h] [xbp-68h] BYREF
  id v22; // [xsp+10h] [xbp-60h] BYREF
  id v23; // [xsp+18h] [xbp-58h] BYREF
  uint8_t buf[4]; // [xsp+20h] [xbp-50h] BYREF
  id v25; // [xsp+24h] [xbp-4Ch]
  __int16 v26; // [xsp+2Ch] [xbp-44h]
  id v27; // [xsp+2Eh] [xbp-42h]

  v4 = objc_retain(a3);
  v5 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v5, OS_LOG_TYPE_DEFAULT) )
  {
    fileHandleForStreaming = self->_fileHandleForStreaming;
    *(_DWORD *)buf = 138543618;
    v25 = fileHandleForStreaming;
    v26 = 2114;
    v27 = v4;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v5,
      OS_LOG_TYPE_DEFAULT,
      "moveStreamingFileTo %{public}@ to %{public}@",
      buf,
      0x16u);
  }
  objc_release(v5);
  v7 = self->_fileHandleForStreaming;
  if ( v7 )
  {
    v23 = 0LL;
    -[NSFileHandle closeAndReturnError:](v7, "closeAndReturnError:", &v23);
    v8 = objc_retain(v23);
    v9 = self->_fileHandleForStreaming;
    self->_fileHandleForStreaming = 0LL;
    objc_release(v9);
    if ( v8 )
    {
      v10 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
      if ( os_log_type_enabled(v10, OS_LOG_TYPE_ERROR) )
      {
        filePathForStreaming = self->_filePathForStreaming;
        *(_DWORD *)buf = 138543618;
        v25 = filePathForStreaming;
        v26 = 2114;
        v27 = v8;
        v12 = "Couldn't close file handle for path %{public}@: %{public}@";
LABEL_11:
        _os_log_impl((void *)&_mh_execute_header, v10, OS_LOG_TYPE_ERROR, v12, buf, 0x16u);
      }
    }
    else
    {
      v14 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
      v15 = self->_filePathForStreaming;
      v22 = 0LL;
      -[NSFileManager moveItemAtURL:toURL:error:](v14, "moveItemAtURL:toURL:error:", v15, v4, &v22);
      v8 = objc_retain(v22);
      objc_release(v14);
      v16 = self->_filePathForStreaming;
      self->_filePathForStreaming = 0LL;
      objc_release(v16);
      if ( v8 )
      {
        v10 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
        if ( os_log_type_enabled(v10, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)buf = 138543618;
          v25 = v4;
          v26 = 2114;
          v27 = v8;
          v12 = "Couldn't move temp file to new location %{public}@: %{public}@";
          goto LABEL_11;
        }
      }
      else
      {
        v21 = 0LL;
        v20 = 0LL;
        v18 = (unsigned __int8)objc_msgSend(v4, "getResourceValue:forKey:error:", &v21, NSURLFileSizeKey, &v20);
        v10 = (os_log_s *)objc_retain(v21);
        v8 = objc_retain(v20);
        if ( (v18 & 1) != 0 )
        {
          v13 = (signed __int64)-[os_log_s integerValue](v10, "integerValue");
          goto LABEL_13;
        }
        v19 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
        if ( os_log_type_enabled(v19, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)buf = 138543618;
          v25 = v4;
          v26 = 2114;
          v27 = v8;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v19,
            OS_LOG_TYPE_ERROR,
            "Couldn't get file length for new locaton %{public}@: %{public}@",
            buf,
            0x16u);
        }
        objc_release(v19);
      }
    }
    v13 = -1LL;
LABEL_13:
    objc_release(v10);
    objc_release(v8);
    goto LABEL_14;
  }
  v13 = -1LL;
LABEL_14:
  objc_release(v4);
  return v13;
}