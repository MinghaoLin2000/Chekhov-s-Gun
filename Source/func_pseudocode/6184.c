-[MediaConversionQueueEntry dealloc]
void __cdecl -[MediaConversionQueueEntry dealloc](MediaConversionQueueEntry *self, SEL a2)
{
  NSFileManager *v3; // x20
  NSURL *temporaryFilesParentDirectoryURL; // x2
  unsigned __int8 v5; // w22
  id v6; // x21
  NSURL *v7; // x8
  objc_super v8; // [xsp+8h] [xbp-58h] BYREF
  id v9; // [xsp+18h] [xbp-48h] BYREF
  uint8_t buf[4]; // [xsp+20h] [xbp-40h] BYREF
  NSURL *v11; // [xsp+24h] [xbp-3Ch]
  __int16 v12; // [xsp+2Ch] [xbp-34h]
  id v13; // [xsp+2Eh] [xbp-32h]

  if ( self->_temporaryFilesParentDirectoryURL )
  {
    v3 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    temporaryFilesParentDirectoryURL = self->_temporaryFilesParentDirectoryURL;
    v9 = 0LL;
    v5 = -[NSFileManager removeItemAtURL:error:](v3, "removeItemAtURL:error:", temporaryFilesParentDirectoryURL, &v9);
    v6 = objc_retain(v9);
    if ( (v5 & 1) == 0 && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      v7 = self->_temporaryFilesParentDirectoryURL;
      *(_DWORD *)buf = 138543618;
      v11 = v7;
      v12 = 2114;
      v13 = v6;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to delete temporary files directory %{public}@: %{public}@",
        buf,
        0x16u);
    }
    objc_release(v6);
    objc_release(v3);
  }
  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___MediaConversionQueueEntry;
  -[MediaConversionQueueEntry dealloc](&v8, "dealloc");
}