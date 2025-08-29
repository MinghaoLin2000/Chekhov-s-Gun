-[NSString tsu_encodeStringBase64]
id __cdecl -[NSString tsu_encodeStringBase64](NSString *self, SEL a2)
{
  const char *v2; // x19
  size_t v3; // x3
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = -[NSString UTF8String](objc_retainAutorelease(self), "UTF8String");
  v3 = strlen(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return +[NSString tsu_stringByBase64EncodingBytes:length:](
           &OBJC_CLASS___NSString,
           "tsu_stringByBase64EncodingBytes:length:",
           v2,
           v3);
}