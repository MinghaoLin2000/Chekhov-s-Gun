+[PAMediaConversionServiceSharedUtilitiesServiceSide compositionForPhotosAdjustmentInformation:secondaryDataURL:error:]
id __cdecl +[PAMediaConversionServiceSharedUtilitiesServiceSide compositionForPhotosAdjustmentInformation:secondaryDataURL:error:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        id *a5)
{
  id v9; // x19
  id v10; // x20
  void *v11; // x22
  void *v12; // x23
  void *v13; // x26
  void *v14; // x24
  id v15; // x25
  NSAssertionHandler *v17; // x23
  NSAssertionHandler *v18; // x26
  NSAssertionHandler *v19; // x27
  id v20; // [xsp+8h] [xbp-78h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-70h] BYREF
  id v22; // [xsp+14h] [xbp-6Ch]
  __int64 vars8; // [xsp+88h] [xbp+8h]

  v9 = objc_retain(a3);
  v10 = objc_retain(a4);
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceAdjustmentDataKey")));
  if ( !v11 )
  {
    v17 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v17,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      1663LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("adjustmentData"));
    objc_release(v17);
  }
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceAdjustmentFormatIdentifierKey")));
  if ( !v12 )
  {
    v18 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v18,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      1665LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("formatIdentifier"));
    objc_release(v18);
  }
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceAdjustmentFormatVersionKey")));
  if ( !v13 )
  {
    v19 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v19,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      1667LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("formatVersion"));
    objc_release(v19);
  }
  v20 = 0LL;
  v14 = objc_retainAutoreleasedReturnValue(
          objc_msgSend(
            a1,
            "loadCompositionFrom:formatIdentifier:formatVersion:secondaryDataURL:error:",
            v11,
            v12,
            v13,
            v10,
            &v20));
  v15 = objc_retain(v20);
  if ( !v14 )
  {
    if ( !os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      if ( !a5 )
        goto LABEL_11;
      goto LABEL_10;
    }
    *(_DWORD *)buf = 138543362;
    v22 = v15;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_ERROR,
      "Unable to create photos adjustment composition: %{public}@",
      buf,
      0xCu);
    if ( a5 )
LABEL_10:
      *a5 = objc_retainAutorelease(v15);
  }
LABEL_11:
  objc_release(v15);
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v14);
}