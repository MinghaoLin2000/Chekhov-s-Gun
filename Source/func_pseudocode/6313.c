+[PAMediaConversionServiceSharedUtilitiesServiceSide exporterVideoOptionsForScaleFactor:maximumPixelCount:]
id __cdecl +[PAMediaConversionServiceSharedUtilitiesServiceSide exporterVideoOptionsForScaleFactor:maximumPixelCount:](
        id a1,
        SEL a2,
        double a3,
        signed __int64 a4)
{
  id v6; // x19
  void *v7; // x0
  id v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  void *v11; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_alloc_init((Class)&OBJC_CLASS___PICompositionExporterVideoOptions);
  if ( a4 )
  {
    v7 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NUPixelCountScalePolicy), "initWithTargetPixelCount:", a4);
  }
  else
  {
    if ( a3 == 1.0 )
      goto LABEL_6;
    v8 = objc_alloc((Class)&OBJC_CLASS___NUFixedScalePolicy);
    v9 = NUScaleFromDouble(a3);
    v7 = objc_msgSend(v8, "initWithScale:", v9, v10);
  }
  v11 = v7;
  objc_msgSend(v6, "setScalePolicy:", v7);
  objc_release(v11);
LABEL_6:
  objc_msgSend(v6, "setApplyVideoOrientationAsMetadata:", 1LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}