+[PAMediaConversionServiceSharedUtilitiesServiceSide scalePolicyForScaleFactor:maximumPixelCount:]
id __cdecl +[PAMediaConversionServiceSharedUtilitiesServiceSide scalePolicyForScaleFactor:maximumPixelCount:](
        id a1,
        SEL a2,
        double a3,
        signed __int64 a4)
{
  void *v4; // x0
  id v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( a4 )
  {
    v4 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NUPixelCountScalePolicy), "initWithTargetPixelCount:", a4);
  }
  else if ( a3 == 1.0 )
  {
    v4 = 0LL;
  }
  else
  {
    v6 = objc_alloc((Class)&OBJC_CLASS___NUFixedScalePolicy);
    v7 = NUScaleFromDouble(a3);
    v4 = objc_msgSend(v6, "initWithScale:", v7, v8);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}