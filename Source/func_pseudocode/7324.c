-[ImageConversionService urlCollectionForBookmarkDictionaryKey:inOptions:removeExistingEmptyFiles:error:]
id __cdecl -[ImageConversionService urlCollectionForBookmarkDictionaryKey:inOptions:removeExistingEmptyFiles:error:](
        ImageConversionService *self,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        id *a6)
{
  _BOOL4 v7; // w25
  id v9; // x19
  id v10; // x20
  void *v11; // x21
  PAMediaConversionServiceResourceURLCollectionAccessProvider *v12; // x23
  void *v13; // x24
  id v14; // x26
  id v15; // x0
  unsigned __int8 v16; // w26
  id v17; // x0
  void *v18; // x25
  NSDictionary *v19; // x27
  id v21; // [xsp+8h] [xbp-A8h] BYREF
  const __CFString *v22; // [xsp+10h] [xbp-A0h] BYREF
  id v23; // [xsp+18h] [xbp-98h] BYREF
  uint8_t buf[4]; // [xsp+20h] [xbp-90h] BYREF
  id v25; // [xsp+24h] [xbp-8Ch]
  _QWORD v26[2]; // [xsp+38h] [xbp-78h] BYREF
  _QWORD v27[2]; // [xsp+48h] [xbp-68h] BYREF
  __int64 vars8; // [xsp+B8h] [xbp+8h]

  v7 = a5;
  v9 = objc_retain(a3);
  v10 = objc_retain(a4);
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "objectForKeyedSubscript:", v9));
  if ( v11 )
  {
    if ( (unsigned int)objc_msgSend(
                         v9,
                         "isEqualToString:",
                         CFSTR("PAMediaConversionServiceSourceBookmarkCollectionKey")) )
      v12 = -[PAMediaConversionServiceResourceURLCollectionAccessProvider initWithOptions:](
              objc_alloc(&OBJC_CLASS___PAMediaConversionServiceResourceURLCollectionAccessProvider),
              "initWithOptions:",
              v10);
    else
      v12 = 0LL;
    v15 = objc_retainAutoreleasedReturnValue(
            +[PAMediaConversionServiceResourceURLCollection collectionForBookmarkDataDictionaryRepresentation:accessProvider:error:](
              &OBJC_CLASS___PAMediaConversionServiceResourceURLCollection,
              "collectionForBookmarkDataDictionaryRepresentation:accessProvider:error:",
              v11,
              v12,
              a6));
    if ( !v15 )
    {
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      {
        *(_DWORD *)buf = 138543362;
        v25 = v9;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_ERROR,
          "Unable to create URL collection for key %{public}@",
          buf,
          0xCu);
      }
      v13 = 0LL;
      v14 = 0LL;
      goto LABEL_26;
    }
    v13 = v15;
    if ( objc_msgSend(v15, "urlCount") )
    {
      if ( v7 )
      {
        v21 = 0LL;
        v16 = (unsigned __int8)objc_msgSend(v13, "removeExistingEmptyFilesWithError:", &v21);
        v17 = objc_retain(v21);
        v18 = v17;
        if ( (v16 & 1) == 0 )
        {
          v14 = 0LL;
          if ( a6 && v17 )
          {
            v26[0] = CFSTR("PAMediaConversionServiceErrorOffendingItemNameKey");
            v26[1] = NSUnderlyingErrorKey;
            v27[0] = v9;
            v27[1] = v17;
            v19 = objc_retainAutoreleasedReturnValue(
                    +[NSDictionary dictionaryWithObjects:forKeys:count:](
                      &OBJC_CLASS___NSDictionary,
                      "dictionaryWithObjects:forKeys:count:",
                      v27,
                      v26,
                      2LL));
            *a6 = objc_autorelease(
                    objc_retainAutoreleasedReturnValue(
                      +[NSError errorWithDomain:code:userInfo:](
                        &OBJC_CLASS___NSError,
                        "errorWithDomain:code:userInfo:",
                        CFSTR("PAMediaConversionServiceErrorDomain"),
                        4LL,
                        v19)));
            objc_release(v19);
            v14 = 0LL;
          }
          goto LABEL_25;
        }
      }
      else
      {
        v18 = 0LL;
      }
      v14 = objc_retain(v13);
LABEL_25:
      objc_release(v18);
      goto LABEL_26;
    }
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 138543362;
      v25 = v9;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Empty url collection for key %{public}@",
        buf,
        0xCu);
    }
    objc_release(v12);
    if ( !a6 )
    {
LABEL_22:
      v14 = 0LL;
      goto LABEL_27;
    }
  }
  else
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 138543362;
      v25 = v9;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Nil %{public}@ URL collection bookmark dictionary in options",
        buf,
        0xCu);
    }
    v13 = 0LL;
    if ( !a6 )
      goto LABEL_22;
  }
  v22 = CFSTR("PAMediaConversionServiceErrorOffendingItemNameKey");
  v23 = v9;
  v12 = objc_retainAutoreleasedReturnValue(
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            &v23,
            &v22,
            1LL));
  v14 = 0LL;
  *a6 = objc_autorelease(
          objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              CFSTR("PAMediaConversionServiceErrorDomain"),
              1LL,
              v12)));
LABEL_26:
  objc_release(v12);
LABEL_27:
  objc_release(v11);
  objc_release(v13);
  objc_release(v10);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v14);
}