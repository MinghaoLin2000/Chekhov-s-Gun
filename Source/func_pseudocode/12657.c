-[TSUZipFileArchive removeTemporaryDirectory]
void __cdecl -[TSUZipFileArchive removeTemporaryDirectory](TSUZipFileArchive *self, SEL a2)
{
  NSFileManager *v3; // x21
  NSURL *temporaryDirectoryURL; // x2
  unsigned __int8 v5; // w22
  id v6; // x20
  void *v7; // x21
  NSURL *v8; // x0
  id v9; // [xsp+8h] [xbp-38h] BYREF

  if ( self->_temporaryDirectoryURL )
  {
    v3 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    temporaryDirectoryURL = self->_temporaryDirectoryURL;
    v9 = 0LL;
    v5 = -[NSFileManager removeItemAtURL:error:](v3, "removeItemAtURL:error:", temporaryDirectoryURL, &v9);
    v6 = objc_retain(v9);
    objc_release(v3);
    if ( (v5 & 1) == 0 )
    {
      if ( TSUDefaultCat_init_token != -1 )
        dispatch_once(&TSUDefaultCat_init_token, &stru_1001DC978);
      v7 = TSUDefaultCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016EB0C(v7, v6);
    }
    v8 = self->_temporaryDirectoryURL;
    self->_temporaryDirectoryURL = 0LL;
    objc_release(v8);
    objc_release(v6);
  }
}