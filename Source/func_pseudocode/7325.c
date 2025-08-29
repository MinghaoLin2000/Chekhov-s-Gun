-[ImageConversionService performPhotosPortraitAdjustmentsCalculationForURL:contentType:orientation:error:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[ImageConversionService performPhotosPortraitAdjustmentsCalculationForURL:contentType:orientation:error:](
        ImageConversionService *self,
        SEL a2,
        id a3,
        id a4,
        unsigned int a5,
        id *a6)
{
  __int64 v7; // x21
  id v11; // x20
  id v12; // x0
  void *v13; // x22
  id v14; // x19
  NSAssertionHandler *v16; // x25
  NSAssertionHandler *v17; // x25
  NSAssertionHandler *v18; // x25
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v7 = *(_QWORD *)&a5;
  v11 = objc_retain(a3);
  v12 = objc_retain(a4);
  v13 = v12;
  if ( v11 )
  {
    if ( v12 )
      goto LABEL_3;
LABEL_8:
    v17 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v17,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("ImageConversionService.m"),
      581LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("contentType"));
    objc_release(v17);
    if ( (_DWORD)v7 )
      goto LABEL_4;
    goto LABEL_9;
  }
  v16 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
  -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
    v16,
    "handleFailureInMethod:object:file:lineNumber:description:",
    a2,
    self,
    CFSTR("ImageConversionService.m"),
    580LL,
    CFSTR("Invalid parameter not satisfying: %@"),
    CFSTR("sourceURL"));
  objc_release(v16);
  if ( !v13 )
    goto LABEL_8;
LABEL_3:
  if ( (_DWORD)v7 )
    goto LABEL_4;
LABEL_9:
  v18 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
  -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
    v18,
    "handleFailureInMethod:object:file:lineNumber:description:",
    a2,
    self,
    CFSTR("ImageConversionService.m"),
    582LL,
    CFSTR("Invalid parameter not satisfying: %@"),
    CFSTR("orientation"));
  objc_release(v18);
LABEL_4:
  v14 = objc_retainAutoreleasedReturnValue(
          +[PAMediaConversionServiceSharedUtilitiesServiceSide generatePortraitAdjustmentForURL:contentType:orientation:error:](
            &OBJC_CLASS___PAMediaConversionServiceSharedUtilitiesServiceSide,
            "generatePortraitAdjustmentForURL:contentType:orientation:error:",
            v11,
            v13,
            v7,
            a6));
  objc_release(v13);
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v14);
}