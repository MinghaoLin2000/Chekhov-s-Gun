+[VideoConversionService resourceURLCollectionForDestinationBookmarkDictionary:error:]
id __cdecl +[VideoConversionService resourceURLCollectionForDestinationBookmarkDictionary:error:](
        id a1,
        SEL a2,
        id a3,
        id *a4)
{
  id v5; // x0
  void *v6; // x19
  unsigned __int8 v7; // w22
  id v8; // x21
  id v10; // [xsp+8h] [xbp-48h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-40h] BYREF
  id v12; // [xsp+14h] [xbp-3Ch]
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v5 = objc_retainAutoreleasedReturnValue(
         +[PAMediaConversionServiceResourceURLCollection collectionForBookmarkDataDictionaryRepresentation:accessProvider:error:](
           &OBJC_CLASS___PAMediaConversionServiceResourceURLCollection,
           "collectionForBookmarkDataDictionaryRepresentation:accessProvider:error:",
           a3,
           0LL,
           a4));
  v6 = v5;
  if ( v5 )
  {
    v10 = 0LL;
    v7 = (unsigned __int8)objc_msgSend(v5, "removeExistingEmptyFilesWithError:", &v10);
    v8 = objc_retain(v10);
    if ( (v7 & 1) != 0 )
      goto LABEL_8;
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 138412290;
      v12 = v8;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to remove destination URL: %@",
        buf,
        0xCu);
      if ( !a4 )
        goto LABEL_6;
    }
    else if ( !a4 )
    {
LABEL_6:
      objc_release(v6);
      v6 = 0LL;
      goto LABEL_8;
    }
    *a4 = objc_retainAutorelease(v8);
    goto LABEL_6;
  }
  v8 = 0LL;
LABEL_8:
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}