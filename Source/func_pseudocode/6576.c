-[MediaConversionRequestTracker requestIdentifier]
NSString *__cdecl -[MediaConversionRequestTracker requestIdentifier](MediaConversionRequestTracker *self, SEL a2)
{
  NSDictionary *v2; // x19
  id v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker requestOptions](self, "requestOptions"));
  v3 = objc_retainAutoreleasedReturnValue(
         -[NSDictionary objectForKeyedSubscript:](
           v2,
           "objectForKeyedSubscript:",
           CFSTR("PAMediaConversionServiceJobIdentifierKey")));
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSString *)objc_autoreleaseReturnValue(v3);
}