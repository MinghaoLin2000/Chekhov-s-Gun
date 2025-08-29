-[PAMediaConversionServiceResourceURLReference dealloc]
void __cdecl -[PAMediaConversionServiceResourceURLReference dealloc](
        PAMediaConversionServiceResourceURLReference *self,
        SEL a2)
{
  NSFileManager *v3; // x20
  NSString *v4; // x21
  unsigned int v5; // w22
  NSString *v6; // x21
  NSURL *url; // x2
  unsigned __int8 v8; // w22
  id v9; // x21
  NSString *v10; // x22
  objc_super v11; // [xsp+8h] [xbp-58h] BYREF
  id v12; // [xsp+18h] [xbp-48h] BYREF
  uint8_t buf[4]; // [xsp+20h] [xbp-40h] BYREF
  NSString *v14; // [xsp+24h] [xbp-3Ch]
  __int16 v15; // [xsp+2Ch] [xbp-34h]
  id v16; // [xsp+2Eh] [xbp-32h]

  if ( self->_shouldDeleteOnDeallocation )
  {
    v3 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v4 = objc_retainAutoreleasedReturnValue(-[NSURL path](self->_url, "path"));
    v5 = -[NSFileManager fileExistsAtPath:](v3, "fileExistsAtPath:", v4);
    objc_release(v4);
    if ( v5 )
    {
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
      {
        v6 = objc_retainAutoreleasedReturnValue(-[NSURL path](self->_url, "path"));
        *(_DWORD *)buf = 138412290;
        v14 = v6;
        _os_log_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_INFO,
          "Deleting temporary file %@",
          buf,
          0xCu);
        objc_release(v6);
      }
      url = self->_url;
      v12 = 0LL;
      v8 = -[NSFileManager removeItemAtURL:error:](v3, "removeItemAtURL:error:", url, &v12);
      v9 = objc_retain(v12);
      if ( (v8 & 1) == 0 && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      {
        v10 = objc_retainAutoreleasedReturnValue(-[NSURL path](self->_url, "path"));
        *(_DWORD *)buf = 138412546;
        v14 = v10;
        v15 = 2112;
        v16 = v9;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_ERROR,
          "Unable to delete temporary file %@: %@",
          buf,
          0x16u);
        objc_release(v10);
      }
      objc_release(v9);
    }
    objc_release(v3);
  }
  if ( self->_mustStopAccessingURL )
    -[NSURL stopAccessingSecurityScopedResource](self->_url, "stopAccessingSecurityScopedResource");
  v11.receiver = self;
  v11.super_class = (Class)&OBJC_CLASS___PAMediaConversionServiceResourceURLReference;
  -[PAMediaConversionServiceResourceURLReference dealloc](&v11, "dealloc");
}