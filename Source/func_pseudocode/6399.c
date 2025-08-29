-[VideoConversionTask resolveSourceBookmarkDictionary:]
void __cdecl -[VideoConversionTask resolveSourceBookmarkDictionary:](VideoConversionTask *self, SEL a2, id a3)
{
  id v4; // x22
  PAMediaConversionServiceResourceURLCollectionAccessProvider *v5; // x20
  NSMutableDictionary *v6; // x21
  PAMediaConversionServiceResourceURLCollectionAccessProvider *v7; // x20
  id v8; // x21
  NSError *v9; // x23
  MediaConversionRequestTracker *v10; // x22
  NSError *v11; // x22
  NSString *v12; // x23
  id v13; // [xsp+8h] [xbp-58h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-50h] BYREF
  NSString *v15; // [xsp+14h] [xbp-4Ch]
  __int16 v16; // [xsp+1Ch] [xbp-44h]
  NSError *v17; // [xsp+1Eh] [xbp-42h]

  v4 = objc_retain(a3);
  v5 = objc_alloc(&OBJC_CLASS___PAMediaConversionServiceResourceURLCollectionAccessProvider);
  v6 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
  v7 = -[PAMediaConversionServiceResourceURLCollectionAccessProvider initWithOptions:](v5, "initWithOptions:", v6);
  objc_release(v6);
  v13 = 0LL;
  v8 = objc_retainAutoreleasedReturnValue(
         +[PAMediaConversionServiceResourceURLCollection collectionForBookmarkDataDictionaryRepresentation:accessProvider:error:](
           &OBJC_CLASS___PAMediaConversionServiceResourceURLCollection,
           "collectionForBookmarkDataDictionaryRepresentation:accessProvider:error:",
           v4,
           v7,
           &v13));
  objc_release(v4);
  v9 = (NSError *)objc_retain(v13);
  if ( !v8 )
    -[VideoConversionTask setError:](self, "setError:", v9);
  -[VideoConversionTask setSourceURLCollection:](self, "setSourceURLCollection:", v8);
  v10 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask requestTracker](self, "requestTracker"));
  -[MediaConversionRequestTracker setSourceURLCollection:](v10, "setSourceURLCollection:", v8);
  objc_release(v10);
  if ( ((unsigned int)objc_msgSend(v8, "allURLsAreReadable") & 1) != 0 )
  {
    v11 = v9;
  }
  else
  {
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              NSPOSIXErrorDomain,
              *__error(),
              0LL));
    objc_release(v9);
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      v12 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask identifier](self, "identifier"));
      *(_DWORD *)buf = 138543618;
      v15 = v12;
      v16 = 2114;
      v17 = v11;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to access source URL for conversion task %{public}@: %{public}@",
        buf,
        0x16u);
      objc_release(v12);
    }
    -[VideoConversionTask setError:](self, "setError:", v11);
  }
  objc_release(v8);
  objc_release(v7);
  objc_release(v11);
}