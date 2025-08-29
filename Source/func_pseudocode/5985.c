+[PAMediaConversionServiceDefaultImageMetadataPolicy policyWithLossyCompressionQuality:]
id __cdecl +[PAMediaConversionServiceDefaultImageMetadataPolicy policyWithLossyCompressionQuality:](
        id a1,
        SEL a2,
        float a3)
{
  id v4; // x0
  double v5; // d0
  void *v6; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_alloc((Class)a1);
  *(float *)&v5 = a3;
  v6 = objc_msgSend(v4, "initWithLossyCompressionQuality:", v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}