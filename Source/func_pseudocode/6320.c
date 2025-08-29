+[PAMediaConversionServiceSharedUtilitiesServiceSide compositionForConversionJob:error:]
id __cdecl +[PAMediaConversionServiceSharedUtilitiesServiceSide compositionForConversionJob:error:](
        id a1,
        SEL a2,
        id a3,
        id *a4)
{
  id v7; // x19
  void *v8; // x22
  void *v9; // x23
  void *v10; // x20
  NSAssertionHandler *v12; // x23
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v7 = objc_retain(a3);
  if ( !v7 )
  {
    v12 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v12,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      1682LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("job != nil"));
    objc_release(v12);
  }
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "adjustmentInformation"));
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "adjustmentSidecarDataResourceURL"));
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "compositionForPhotosAdjustmentInformation:secondaryDataURL:error:", v8, v9, a4));
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}