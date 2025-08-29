-[IPLocaleCoder setLanguageIdentifier:]
void __cdecl -[IPLocaleCoder setLanguageIdentifier:](IPLocaleCoder *self, SEL a2, id a3)
{
  id v4; // x19
  NSException *v5; // x21
  NSDictionary *v6; // x21
  id v7; // x22
  id v8; // x23
  NSString *v9; // x27
  NSDictionary *v10; // x28
  void *v11; // x24
  NSString *v12; // x25
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v4 = objc_retain(a3);
  if ( !v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(
           +[NSException exceptionWithName:reason:userInfo:](
             &OBJC_CLASS___NSException,
             "exceptionWithName:reason:userInfo:",
             NSInvalidArgumentException,
             CFSTR("*** setLanguageIdentifier: object cannot be nil"),
             0LL));
    -[NSException raise](v5, "raise");
    objc_release(v5);
  }
  -[IPLocaleCoder willChangeValueForKey:](self, "willChangeValueForKey:", CFSTR("languageIdentifier"));
  v6 = objc_retainAutoreleasedReturnValue(+[NSLocale componentsFromLocaleIdentifier:](&OBJC_CLASS___NSLocale, "componentsFromLocaleIdentifier:", v4));
  v7 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKey:](v6, "objectForKey:", NSLocaleLanguageCode));
  v8 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKey:](v6, "objectForKey:", NSLocaleScriptCode));
  v9 = objc_retainAutoreleasedReturnValue(-[IPLocaleCoder localeIdentifier](self, "localeIdentifier"));
  v10 = objc_retainAutoreleasedReturnValue(+[NSLocale componentsFromLocaleIdentifier:](&OBJC_CLASS___NSLocale, "componentsFromLocaleIdentifier:", v9));
  v11 = -[NSDictionary mutableCopy](v10, "mutableCopy");
  objc_release(v10);
  objc_release(v9);
  objc_msgSend(v11, "setObject:forKey:", v7, NSLocaleLanguageCode);
  if ( v8 )
    objc_msgSend(v11, "setObject:forKey:", v8, NSLocaleScriptCode);
  else
    objc_msgSend(v11, "removeObjectForKey:", NSLocaleScriptCode);
  v12 = objc_retainAutoreleasedReturnValue(+[NSLocale localeIdentifierFromComponents:](&OBJC_CLASS___NSLocale, "localeIdentifierFromComponents:", v11));
  -[IPLocaleCoder setLocaleIdentifier:](self, "setLocaleIdentifier:", v12);
  objc_release(v12);
  -[IPLocaleCoder didChangeValueForKey:](self, "didChangeValueForKey:", CFSTR("languageIdentifier"));
  objc_release(v11);
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}