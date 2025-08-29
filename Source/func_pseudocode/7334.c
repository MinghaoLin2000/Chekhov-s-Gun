-[ImageConversionService validateRequestOptions:error:]
bool __cdecl -[ImageConversionService validateRequestOptions:error:](
        ImageConversionService *self,
        SEL a2,
        id a3,
        id *a4)
{
  id v6; // x19
  void *v7; // x22
  unsigned int v8; // w23
  unsigned __int8 v9; // w23
  void *v10; // x22
  unsigned int v11; // w23
  void *v12; // x24
  unsigned int v13; // w25
  NSString *v14; // x21
  NSDictionary *v15; // x22
  void *v16; // x21
  void *v17; // x23
  NSMutableSet *v18; // x22
  NSArray *v19; // x25
  NSSet *v20; // x24
  void *v21; // x0
  NSString *v22; // x26
  NSDictionary *v23; // x27
  NSErrorUserInfoKey v25; // [xsp+10h] [xbp-A0h] BYREF
  NSString *v26; // [xsp+18h] [xbp-98h] BYREF
  _QWORD v27[3]; // [xsp+20h] [xbp-90h] BYREF
  const __CFString *v28; // [xsp+38h] [xbp-78h] BYREF
  const __CFString *v29; // [xsp+40h] [xbp-70h] BYREF
  NSErrorUserInfoKey v30; // [xsp+48h] [xbp-68h] BYREF
  NSString *v31; // [xsp+50h] [xbp-60h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retainAutoreleasedReturnValue(
         objc_msgSend(
           v6,
           "objectForKeyedSubscript:",
           CFSTR("PAMediaConversionServiceOptionIsPhotosAdjustmentsCalculationKey")));
  v8 = (unsigned int)objc_msgSend(v7, "boolValue");
  objc_release(v7);
  if ( v8 )
  {
    v9 = -[ImageConversionService validatePhotosAdjustmentsCalculationRequestOptions:error:](
           self,
           "validatePhotosAdjustmentsCalculationRequestOptions:error:",
           v6,
           a4);
    goto LABEL_17;
  }
  v10 = objc_retainAutoreleasedReturnValue(
          objc_msgSend(
            v6,
            "objectForKeyedSubscript:",
            CFSTR("PAMediaConversionServiceOptionApplyOrientationTransformKey")));
  v11 = (unsigned int)objc_msgSend(v10, "boolValue");
  objc_release(v10);
  v12 = objc_retainAutoreleasedReturnValue(
          objc_msgSend(
            v6,
            "objectForKeyedSubscript:",
            CFSTR("PAMediaConversionServiceOptionEnableOutputCorruptionDetectionHeuristicsKey")));
  v13 = (unsigned int)objc_msgSend(v12, "boolValue");
  objc_release(v12);
  if ( !v13 || !v11 )
  {
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionMetadataPolicyKey")));
    if ( v16 )
    {
      v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "allKeys"));
      v18 = objc_retainAutoreleasedReturnValue(+[NSMutableSet setWithArray:](&OBJC_CLASS___NSMutableSet, "setWithArray:", v17));
      objc_release(v17);
      v27[0] = CFSTR("PAMediaConversionServiceOptionScaleFactorKey");
      v27[1] = CFSTR("PAMediaConversionServiceOptionMaximumPixelCountKey");
      v27[2] = CFSTR("PAMediaConversionServiceOptionMaximumLongSideLengthKey");
      v19 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v27, 3LL));
      v20 = objc_retainAutoreleasedReturnValue(+[NSSet setWithArray:](&OBJC_CLASS___NSSet, "setWithArray:", v19));
      objc_release(v19);
      -[NSMutableSet intersectSet:](v18, "intersectSet:", v20);
      v21 = -[NSMutableSet count](v18, "count");
      v9 = v21 == (void *)1;
      if ( a4 && v21 != (void *)1 )
      {
        v25 = NSDebugDescriptionErrorKey;
        v22 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithFormat:](
                  &OBJC_CLASS___NSString,
                  "stringWithFormat:",
                  CFSTR("Expected exactly one scaling request option but received %lu: %@"),
                  -[NSMutableSet count](v18, "count"),
                  v18));
        v26 = v22;
        v23 = objc_retainAutoreleasedReturnValue(
                +[NSDictionary dictionaryWithObjects:forKeys:count:](
                  &OBJC_CLASS___NSDictionary,
                  "dictionaryWithObjects:forKeys:count:",
                  &v26,
                  &v25,
                  1LL));
        *a4 = objc_autorelease(
                objc_retainAutoreleasedReturnValue(
                  +[NSError errorWithDomain:code:userInfo:](
                    &OBJC_CLASS___NSError,
                    "errorWithDomain:code:userInfo:",
                    CFSTR("PAMediaConversionServiceErrorDomain"),
                    6LL,
                    v23)));
        objc_release(v23);
        objc_release(v22);
      }
      objc_release(v20);
    }
    else
    {
      if ( !a4 )
      {
        v9 = 0;
        goto LABEL_16;
      }
      v28 = CFSTR("PAMediaConversionServiceErrorOffendingItemNameKey");
      v29 = CFSTR("PAMediaConversionServiceOptionMetadataPolicyKey");
      v18 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                &v29,
                &v28,
                1LL));
      v9 = 0;
      *a4 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  CFSTR("PAMediaConversionServiceErrorDomain"),
                  1LL,
                  v18)));
    }
    objc_release(v18);
LABEL_16:
    objc_release(v16);
    goto LABEL_17;
  }
  if ( a4 )
  {
    v30 = NSDebugDescriptionErrorKey;
    v14 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("Invalid combination of %@ and %@ request options"),
              CFSTR("PAMediaConversionServiceOptionApplyOrientationTransformKey"),
              CFSTR("PAMediaConversionServiceOptionEnableOutputCorruptionDetectionHeuristicsKey")));
    v31 = v14;
    v15 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v31,
              &v30,
              1LL));
    *a4 = objc_autorelease(
            objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                CFSTR("PAMediaConversionServiceErrorDomain"),
                6LL,
                v15)));
    objc_release(v15);
    objc_release(v14);
  }
  v9 = 0;
LABEL_17:
  objc_release(v6);
  return v9;
}