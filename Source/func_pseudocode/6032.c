-[PAMediaConversionServiceSetCreationDateImageMetadataPolicy encodeWithCoder:]
void __cdecl -[PAMediaConversionServiceSetCreationDateImageMetadataPolicy encodeWithCoder:](
        PAMediaConversionServiceSetCreationDateImageMetadataPolicy *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  NSDate *v5; // x21
  NSTimeZone *v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceSetCreationDateImageMetadataPolicy creationDate](self, "creationDate"));
  objc_msgSend(v4, "encodeObject:forKey:", v5, CFSTR("creationDate"));
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceSetCreationDateImageMetadataPolicy timeZone](self, "timeZone"));
  objc_msgSend(v4, "encodeObject:forKey:", v6, CFSTR("creationDateTimeZone"));
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}