-[ImageConversionService setupSourceAndDestinationForRequestTracker:imageConversionOptions:error:]
bool __cdecl -[ImageConversionService setupSourceAndDestinationForRequestTracker:imageConversionOptions:error:](
        ImageConversionService *self,
        SEL a2,
        id a3,
        id a4,
        id *a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x21
  void *v11; // x24
  id v12; // x0
  void *v13; // x22
  void *v14; // x23
  __int64 v15; // x24
  bool v16; // w23
  uint8_t v18[16]; // [xsp+0h] [xbp-40h] BYREF

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retainAutoreleasedReturnValue(
          -[ImageConversionService urlCollectionForBookmarkDictionaryKey:inOptions:removeExistingEmptyFiles:error:](
            self,
            "urlCollectionForBookmarkDictionaryKey:inOptions:removeExistingEmptyFiles:error:",
            CFSTR("PAMediaConversionServiceSourceBookmarkCollectionKey"),
            v9,
            0LL,
            a5));
  if ( !v10 )
    goto LABEL_11;
  objc_msgSend(v8, "setSourceURLCollection:", v10);
  v11 = objc_retainAutoreleasedReturnValue(
          objc_msgSend(
            v9,
            "objectForKeyedSubscript:",
            CFSTR("PAMediaConversionServiceDestinationBookmarkCollectionKey")));
  objc_release(v11);
  if ( !v11 )
  {
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionWantsResultAsDataKey")));
    v15 = (unsigned __int8)objc_msgSend(v14, "boolValue");
    objc_release(v14);
    if ( (v15 & 1) != 0 )
      goto LABEL_6;
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      *(_WORD *)v18 = 0;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Neither destination URL collection nor wants-data option specified",
        v18,
        2u);
      if ( !a5 )
        goto LABEL_11;
    }
    else if ( !a5 )
    {
      goto LABEL_11;
    }
    v16 = 0;
    *a5 = objc_autorelease(
            objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                CFSTR("PAMediaConversionServiceErrorDomain"),
                4LL,
                0LL)));
    goto LABEL_12;
  }
  v12 = objc_retainAutoreleasedReturnValue(
          -[ImageConversionService urlCollectionForBookmarkDictionaryKey:inOptions:removeExistingEmptyFiles:error:](
            self,
            "urlCollectionForBookmarkDictionaryKey:inOptions:removeExistingEmptyFiles:error:",
            CFSTR("PAMediaConversionServiceDestinationBookmarkCollectionKey"),
            v9,
            1LL,
            a5));
  if ( !v12 )
  {
LABEL_11:
    v16 = 0;
    goto LABEL_12;
  }
  v13 = v12;
  objc_msgSend(v8, "setDestinationURLCollection:", v12);
  objc_release(v13);
LABEL_6:
  v16 = 1;
LABEL_12:
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  return v16;
}