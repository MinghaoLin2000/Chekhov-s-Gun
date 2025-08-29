-[KeyboardSettingsMediator setSpellingLanguage:]
void __cdecl -[KeyboardSettingsMediator setSpellingLanguage:](KeyboardSettingsMediator *self, SEL a2, id a3)
{
  id v3; // x19
  NSSpellChecker *v4; // x20
  void *v5; // x21
  unsigned int v6; // w22
  void *v7; // x21
  void *v8; // x21
  uint8_t v9[16]; // [xsp+0h] [xbp-30h] BYREF

  v3 = objc_retain(a3);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v9 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "XPCSERVICE - Spelling language",
      v9,
      2u);
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
    sub_100007AA0(v3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSSpellChecker sharedSpellChecker](&OBJC_CLASS___NSSpellChecker, "sharedSpellChecker"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKeyedSubscript:", CFSTR("KB_SpellingLanguageIsAutomatic")));
  v6 = (unsigned int)objc_msgSend(v5, "boolValue");
  objc_release(v5);
  if ( v6 )
  {
    -[NSSpellChecker _setLanguageRepresentedObject:](v4, "_setLanguageRepresentedObject:", 0LL);
  }
  else
  {
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKeyedSubscript:", CFSTR("KB_SpellingLanguage")));
    objc_release(v7);
    if ( v7 )
    {
      v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKeyedSubscript:", CFSTR("KB_SpellingLanguage")));
      -[NSSpellChecker _setLanguageRepresentedObject:](v4, "_setLanguageRepresentedObject:", v8);
      objc_release(v8);
    }
  }
  objc_release(v4);
  objc_release(v3);
}