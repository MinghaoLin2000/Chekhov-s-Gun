-[job_spool_client_t peekFirstEightBytes:]
bool __cdecl -[job_spool_client_t peekFirstEightBytes:](job_spool_client_t *self, SEL a2, char *a3)
{
  NSURL *filePathForStreaming; // x0
  int v6; // w0
  int v7; // w21
  bool v8; // w19
  os_log_s *v9; // x19
  NSURL *v10; // x20
  int v11; // w8
  int v13; // [xsp+0h] [xbp-40h] BYREF
  NSURL *v14; // [xsp+4h] [xbp-3Ch]
  __int16 v15; // [xsp+Ch] [xbp-34h]
  int v16; // [xsp+Eh] [xbp-32h]

  filePathForStreaming = self->_filePathForStreaming;
  if ( !filePathForStreaming )
    return 0;
  v6 = open(-[NSURL fileSystemRepresentation](filePathForStreaming, "fileSystemRepresentation"), 256);
  if ( v6 == -1 )
  {
    v9 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
    if ( os_log_type_enabled(v9, OS_LOG_TYPE_ERROR) )
    {
      v10 = self->_filePathForStreaming;
      v11 = *__error();
      v13 = 138543618;
      v14 = v10;
      v15 = 1024;
      v16 = v11;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v9,
        OS_LOG_TYPE_ERROR,
        "Couldn't open temp file %{public}@ for reading: %d",
        (uint8_t *)&v13,
        0x12u);
    }
    objc_release(v9);
    return 0;
  }
  v7 = v6;
  v8 = read(v6, a3, 8uLL) == 8;
  close(v7);
  return v8;
}