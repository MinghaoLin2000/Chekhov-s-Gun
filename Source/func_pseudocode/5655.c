-[KeyboardSettingsMediator setSingleQuoteOption:]
void __cdecl -[KeyboardSettingsMediator setSingleQuoteOption:](KeyboardSettingsMediator *self, SEL a2, id a3)
{
  id v3; // x19
  NSSpellChecker *v4; // x20
  uint8_t v5[16]; // [xsp+0h] [xbp-20h] BYREF

  v3 = objc_retain(a3);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v5 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "XPCSERVICE - Single Quote option",
      v5,
      2u);
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
  {
    sub_100007B10(v3);
    if ( !v3 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( v3 )
  {
LABEL_5:
    v4 = objc_retainAutoreleasedReturnValue(+[NSSpellChecker sharedSpellChecker](&OBJC_CLASS___NSSpellChecker, "sharedSpellChecker"));
    -[NSSpellChecker _setSingleQuoteString:](v4, "_setSingleQuoteString:", v3);
    objc_release(v4);
  }
LABEL_6:
  objc_release(v3);
}