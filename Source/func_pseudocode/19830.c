-[job_spool_client_t invalidate]
void __cdecl -[job_spool_client_t invalidate](job_spool_client_t *self, SEL a2)
{
  os_log_s *v3; // x20
  NSFileHandle *fileHandleForStreaming; // x8
  NSURL *filePathForStreaming; // x9
  NSFileHandle *v6; // x0
  id v7; // x20
  NSFileHandle *v8; // x0
  NSFileManager *v9; // x21
  NSURL *v10; // x2
  id v11; // x22
  NSURL *v12; // x0
  id v13; // [xsp+0h] [xbp-50h] BYREF
  id v14; // [xsp+8h] [xbp-48h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-40h] BYREF
  NSFileHandle *v16; // [xsp+14h] [xbp-3Ch]
  __int16 v17; // [xsp+1Ch] [xbp-34h]
  NSURL *v18; // [xsp+1Eh] [xbp-32h]

  v3 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v3, OS_LOG_TYPE_DEFAULT) )
  {
    filePathForStreaming = self->_filePathForStreaming;
    fileHandleForStreaming = self->_fileHandleForStreaming;
    *(_DWORD *)buf = 134218242;
    v16 = fileHandleForStreaming;
    v17 = 2114;
    v18 = filePathForStreaming;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v3,
      OS_LOG_TYPE_DEFAULT,
      "Invalidate file handle %p path %{public}@",
      buf,
      0x16u);
  }
  objc_release(v3);
  v6 = self->_fileHandleForStreaming;
  if ( v6 )
  {
    v14 = 0LL;
    -[NSFileHandle closeAndReturnError:](v6, "closeAndReturnError:", &v14);
    v7 = objc_retain(v14);
    v8 = self->_fileHandleForStreaming;
    self->_fileHandleForStreaming = 0LL;
    objc_release(v8);
  }
  else
  {
    v7 = 0LL;
  }
  if ( self->_filePathForStreaming )
  {
    v9 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v10 = self->_filePathForStreaming;
    v13 = v7;
    -[NSFileManager removeItemAtURL:error:](v9, "removeItemAtURL:error:", v10, &v13);
    v11 = objc_retain(v13);
    objc_release(v7);
    objc_release(v9);
    v12 = self->_filePathForStreaming;
    self->_filePathForStreaming = 0LL;
    objc_release(v12);
    v7 = v11;
  }
  objc_release(v7);
}