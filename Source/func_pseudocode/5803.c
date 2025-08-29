-[IPLocaleCoder languageIdentifier]
NSString *__cdecl -[IPLocaleCoder languageIdentifier](IPLocaleCoder *self, SEL a2)
{
  NSString *v2; // x20
  void *v3; // x21
  void *v4; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[IPLocaleCoder localeIdentifier](self, "localeIdentifier"));
  v3 = objc_retainAutoreleasedReturnValue(
         +[NSLocale addLikelySubtagsToLocaleIdentifier:](
           &OBJC_CLASS___NSLocale,
           "addLikelySubtagsToLocaleIdentifier:",
           v2));
  v4 = objc_retainAutoreleasedReturnValue(
         +[NSLocale languageAndScriptFromLocaleIdentifier:](
           &OBJC_CLASS___NSLocale,
           "languageAndScriptFromLocaleIdentifier:",
           v3));
  objc_release(v3);
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSString *)objc_autoreleaseReturnValue(v4);
}