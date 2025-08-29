-[PAMediaConversionServiceDefaultImageMetadataPolicy initWithCoder:]
PAMediaConversionServiceDefaultImageMetadataPolicy *__cdecl -[PAMediaConversionServiceDefaultImageMetadataPolicy initWithCoder:](
        PAMediaConversionServiceDefaultImageMetadataPolicy *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  PAMediaConversionServiceDefaultImageMetadataPolicy *v5; // x0
  PAMediaConversionServiceDefaultImageMetadataPolicy *v6; // x20

  v4 = objc_retain(a3);
  if ( (unsigned int)objc_msgSend(v4, "containsValueForKey:", CFSTR("lossyCompressionQuality")) )
  {
    objc_msgSend(v4, "decodeFloatForKey:", CFSTR("lossyCompressionQuality"));
    v5 = -[PAMediaConversionServiceDefaultImageMetadataPolicy initWithLossyCompressionQuality:](
           self,
           "initWithLossyCompressionQuality:");
  }
  else
  {
    v5 = -[PAMediaConversionServiceDefaultImageMetadataPolicy init](self, "init");
  }
  v6 = v5;
  objc_release(v4);
  return v6;
}