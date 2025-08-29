-[ImageConversionService validatePhotosAdjustmentsCalculationRequestOptions:error:]
bool __cdecl -[ImageConversionService validatePhotosAdjustmentsCalculationRequestOptions:error:](
        ImageConversionService *self,
        SEL a2,
        id a3,
        id *a4)
{
  id v5; // x19
  void *v6; // x20
  void *v7; // x21
  NSDictionary *v8; // x23
  unsigned int v9; // w8
  bool v10; // w24
  NSDictionary *v11; // x25
  const __CFString *v13; // [xsp+8h] [xbp-68h] BYREF
  const __CFString *v14; // [xsp+10h] [xbp-60h] BYREF
  const __CFString *v15; // [xsp+18h] [xbp-58h] BYREF
  const __CFString *v16; // [xsp+20h] [xbp-50h] BYREF

  v5 = objc_retain(a3);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceInputFileTypeKey")));
  v7 = objc_retainAutoreleasedReturnValue(+[PFUniformTypeUtilities typeWithIdentifier:](&OBJC_CLASS___PFUniformTypeUtilities, "typeWithIdentifier:", v6));
  if ( v7 )
  {
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionOrientationKey")));
    v9 = (unsigned int)-[NSDictionary unsignedIntValue](v8, "unsignedIntValue") - 1;
    v10 = v9 < 8;
    if ( a4 && v9 >= 8 )
    {
      v13 = CFSTR("PAMediaConversionServiceErrorOffendingItemNameKey");
      v14 = CFSTR("PAMediaConversionServiceOptionOrientationKey");
      v11 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                &v14,
                &v13,
                1LL));
      *a4 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  CFSTR("PAMediaConversionServiceErrorDomain"),
                  1LL,
                  v11)));
      objc_release(v11);
      v10 = 0;
    }
  }
  else
  {
    if ( !a4 )
    {
      v10 = 0;
      goto LABEL_8;
    }
    v15 = CFSTR("PAMediaConversionServiceErrorOffendingItemNameKey");
    v16 = CFSTR("PAMediaConversionServiceInputFileTypeKey");
    v8 = objc_retainAutoreleasedReturnValue(
           +[NSDictionary dictionaryWithObjects:forKeys:count:](
             &OBJC_CLASS___NSDictionary,
             "dictionaryWithObjects:forKeys:count:",
             &v16,
             &v15,
             1LL));
    v10 = 0;
    *a4 = objc_autorelease(
            objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                CFSTR("PAMediaConversionServiceErrorDomain"),
                1LL,
                v8)));
  }
  objc_release(v8);
LABEL_8:
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  return v10;
}