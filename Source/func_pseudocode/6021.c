-[PAMediaConversionServiceAddPFMetadataPolicy encodeWithCoder:]
void __cdecl -[PAMediaConversionServiceAddPFMetadataPolicy encodeWithCoder:](
        PAMediaConversionServiceAddPFMetadataPolicy *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  NSString *v5; // x21
  id v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceAddPFMetadataPolicy key](self, "key"));
  objc_msgSend(v4, "encodeObject:forKey:", v5, CFSTR("mediaMetadataType"));
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceAddPFMetadataPolicy value](self, "value"));
  objc_msgSend(v4, "encodeObject:forKey:", v6, CFSTR("mediaMetadataValue"));
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}