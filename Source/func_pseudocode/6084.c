+[PAMediaConversionServiceResourceURLReference referenceWithDictionaryRepresentation:error:]
id __cdecl +[PAMediaConversionServiceResourceURLReference referenceWithDictionaryRepresentation:error:](
        id a1,
        SEL a2,
        id a3,
        id *a4)
{
  void *v7; // x19
  NSURL *v8; // x21
  id v9; // x22
  void *v10; // x23
  NSAssertionHandler *v12; // x24
  id v13; // [xsp+8h] [xbp-58h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-50h] BYREF
  id v15; // [xsp+14h] [xbp-4Ch]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "objectForKeyedSubscript:", CFSTR("bookmarkData")));
  if ( !v7 )
  {
    v12 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v12,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("PAMediaConversionServiceResourceURLCollection.m"),
      38LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("bookmarkData"));
    objc_release(v12);
  }
  v13 = 0LL;
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSURL URLByResolvingBookmarkData:options:relativeToURL:bookmarkDataIsStale:error:](
           &OBJC_CLASS___NSURL,
           "URLByResolvingBookmarkData:options:relativeToURL:bookmarkDataIsStale:error:",
           v7,
           0LL,
           0LL,
           0LL,
           &v13));
  v9 = objc_retain(v13);
  if ( v8 )
  {
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "referenceWithURL:", v8));
    objc_msgSend(v10, "setMustStopAccessingURL:", 1LL);
  }
  else
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 138412290;
      v15 = v9;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "Unable to decode URL reference bookmark data: %@",
        buf,
        0xCu);
    }
    v10 = 0LL;
    if ( a4 )
      *a4 = objc_retainAutorelease(v9);
  }
  objc_release(v8);
  objc_release(v9);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}