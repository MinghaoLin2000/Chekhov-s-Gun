-[PAMediaConversionServiceDefaultImageMetadataPolicy encodeWithCoder:]
void __cdecl -[PAMediaConversionServiceDefaultImageMetadataPolicy encodeWithCoder:](
        PAMediaConversionServiceDefaultImageMetadataPolicy *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  -[PAMediaConversionServiceDefaultImageMetadataPolicy lossyCompressionQuality](self, "lossyCompressionQuality");
  objc_msgSend(v4, "encodeFloat:forKey:", CFSTR("lossyCompressionQuality"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}