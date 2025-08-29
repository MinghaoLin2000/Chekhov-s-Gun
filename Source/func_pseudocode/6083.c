+[PAMediaConversionServiceResourceURLReference getPathHash:lastPathComponent:forDictionaryRepresentation:]
bool __cdecl +[PAMediaConversionServiceResourceURLReference getPathHash:lastPathComponent:forDictionaryRepresentation:](
        id a1,
        SEL a2,
        unsigned __int64 *a3,
        id *a4,
        id a5)
{
  void *v9; // x19
  NSURL *v10; // x21
  id v11; // x22
  NSString *v12; // x0
  NSString *v13; // x24
  NSAssertionHandler *v15; // x25
  id v16; // [xsp+8h] [xbp-68h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-60h] BYREF
  id v18; // [xsp+14h] [xbp-5Ch]

  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(a5, "objectForKeyedSubscript:", CFSTR("bookmarkData")));
  if ( !v9 )
  {
    v15 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v15,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("PAMediaConversionServiceResourceURLCollection.m"),
      60LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("bookmarkData"));
    objc_release(v15);
  }
  v16 = 0LL;
  v10 = objc_retainAutoreleasedReturnValue(
          +[NSURL URLByResolvingBookmarkData:options:relativeToURL:bookmarkDataIsStale:error:](
            &OBJC_CLASS___NSURL,
            "URLByResolvingBookmarkData:options:relativeToURL:bookmarkDataIsStale:error:",
            v9,
            256LL,
            0LL,
            0LL,
            &v16));
  v11 = objc_retain(v16);
  if ( v10 )
  {
    v12 = objc_retainAutoreleasedReturnValue(-[NSURL path](v10, "path"));
    v13 = v12;
    if ( a3 )
      *a3 = -[NSString hash](v12, "hash");
    if ( a4 )
      *a4 = objc_autorelease(objc_retainAutoreleasedReturnValue(-[NSString lastPathComponent](v13, "lastPathComponent")));
    -[NSURL stopAccessingSecurityScopedResource](v10, "stopAccessingSecurityScopedResource");
    objc_release(v13);
  }
  else if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
  {
    *(_DWORD *)buf = 138412290;
    v18 = v11;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_ERROR,
      "Unable to decode bookmark data to get hash/filename: %@",
      buf,
      0xCu);
  }
  objc_release(v10);
  objc_release(v11);
  objc_release(v9);
  return v10 != 0LL;
}