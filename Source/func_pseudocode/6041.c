-[PAMediaConversionServiceSetCaptionImageMetadataPolicy encodeWithCoder:]
void __cdecl -[PAMediaConversionServiceSetCaptionImageMetadataPolicy encodeWithCoder:](
        PAMediaConversionServiceSetCaptionImageMetadataPolicy *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  NSString *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceSetCaptionImageMetadataPolicy caption](self, "caption"));
  objc_msgSend(v4, "encodeObject:forKey:", v5, CFSTR("caption"));
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}