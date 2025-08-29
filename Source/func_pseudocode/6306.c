-[PAMediaConversionServiceImageConversionJob initWithRequestIdentifier:sourceResourceURLCollection:outputFileType:]
PAMediaConversionServiceImageConversionJob *__cdecl -[PAMediaConversionServiceImageConversionJob initWithRequestIdentifier:sourceResourceURLCollection:outputFileType:](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v10; // x19
  id v11; // x20
  id v12; // x22
  PAMediaConversionServiceImageConversionJob *v13; // x0
  PAMediaConversionServiceImageConversionJob *v14; // x25
  NSAssertionHandler *v16; // x27
  objc_super v17; // [xsp+10h] [xbp-60h] BYREF

  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retain(a5);
  if ( !v11 )
  {
    v16 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v16,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      980LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("resourceURLCollection"));
    objc_release(v16);
  }
  v17.receiver = self;
  v17.super_class = (Class)&OBJC_CLASS___PAMediaConversionServiceImageConversionJob;
  v13 = -[PAMediaConversionServiceImageConversionJob init](&v17, "init");
  v14 = v13;
  if ( v13 )
  {
    objc_storeStrong((id *)&v13->_requestIdentifier, a3);
    objc_storeStrong((id *)&v14->_sourceResourceURLCollection, a4);
    objc_storeStrong((id *)&v14->_outputFileType, a5);
    v14->_rasterizationDPI = (signed __int64)+[PFMediaUtilities defaultRasterizationDPI](
                                               &OBJC_CLASS___PFMediaUtilities,
                                               "defaultRasterizationDPI");
  }
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  return v14;
}