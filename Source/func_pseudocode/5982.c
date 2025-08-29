-[PAMediaConversionServiceDefaultImageMetadataPolicy initWithLossyCompressionQuality:]
PAMediaConversionServiceDefaultImageMetadataPolicy *__cdecl -[PAMediaConversionServiceDefaultImageMetadataPolicy initWithLossyCompressionQuality:](
        PAMediaConversionServiceDefaultImageMetadataPolicy *self,
        SEL a2,
        float a3)
{
  PAMediaConversionServiceDefaultImageMetadataPolicy *v4; // x0
  double v5; // d0
  PAMediaConversionServiceDefaultImageMetadataPolicy *v6; // x19
  objc_super v8; // [xsp+0h] [xbp-30h] BYREF

  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___PAMediaConversionServiceDefaultImageMetadataPolicy;
  v4 = -[PAMediaConversionServiceDefaultImageMetadataPolicy init](&v8, "init");
  v6 = v4;
  if ( v4 )
  {
    *(float *)&v5 = a3;
    -[PAMediaConversionServiceDefaultImageMetadataPolicy setLossyCompressionQuality:](
      v4,
      "setLossyCompressionQuality:",
      v5);
  }
  return v6;
}