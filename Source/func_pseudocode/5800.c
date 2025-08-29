-[IPLocaleCoder setLocaleIdentifier:]
void __cdecl -[IPLocaleCoder setLocaleIdentifier:](IPLocaleCoder *self, SEL a2, id a3)
{
  id v4; // x20
  NSException *v5; // x21
  NSMutableDictionary *v6; // x22
  NSString *v7; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  if ( !v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(
           +[NSException exceptionWithName:reason:userInfo:](
             &OBJC_CLASS___NSException,
             "exceptionWithName:reason:userInfo:",
             NSInvalidArgumentException,
             CFSTR("*** setLocaleIdentifier: object cannot be nil"),
             0LL));
    -[NSException raise](v5, "raise");
    objc_release(v5);
  }
  -[IPLocaleCoder willChangeValueForKey:](self, "willChangeValueForKey:", CFSTR("localeIdentifier"));
  v6 = objc_retainAutoreleasedReturnValue(-[IPLocaleCoder mutablePreferences](self, "mutablePreferences"));
  v7 = objc_retainAutoreleasedReturnValue(
         +[NSLocale canonicalLocaleIdentifierFromString:](
           &OBJC_CLASS___NSLocale,
           "canonicalLocaleIdentifierFromString:",
           v4));
  -[NSMutableDictionary setObject:forKey:](v6, "setObject:forKey:", v7, CFSTR("AppleLocale"));
  objc_release(v7);
  objc_release(v6);
  -[IPLocaleCoder didChangeValueForKey:](self, "didChangeValueForKey:", CFSTR("localeIdentifier"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}