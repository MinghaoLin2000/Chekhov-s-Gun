-[IPLocaleCoder localeIdentifier]
NSString *__cdecl -[IPLocaleCoder localeIdentifier](IPLocaleCoder *self, SEL a2)
{
  NSMutableDictionary *v2; // x20
  void *v3; // x21
  NSString *v4; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[IPLocaleCoder mutablePreferences](self, "mutablePreferences"));
  v3 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKey:](v2, "objectForKey:", CFSTR("AppleLocale")));
  v4 = objc_retainAutoreleasedReturnValue(
         +[NSLocale canonicalLocaleIdentifierFromString:](
           &OBJC_CLASS___NSLocale,
           "canonicalLocaleIdentifierFromString:",
           v3));
  objc_release(v3);
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}