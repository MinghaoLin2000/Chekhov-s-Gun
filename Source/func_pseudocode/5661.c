-[KeyboardSettingsMediator setJIMAutocorrection:]
void __cdecl -[KeyboardSettingsMediator setJIMAutocorrection:](KeyboardSettingsMediator *self, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x20
  void *v5; // x0
  uint8_t v6[16]; // [xsp+0h] [xbp-20h] BYREF

  v3 = objc_retain(a3);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v6 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "XPCSERVICE - JapaneseIM Autocorrection",
      v6,
      2u);
  }
  if ( v3 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
      sub_100007DB0(v3);
    v4 = objc_retainAutoreleasedReturnValue(+[JIMPreferences sharedPreferences](&OBJC_CLASS___JIMPreferences, "sharedPreferences"));
    v5 = objc_msgSend(v3, "boolValue");
    objc_msgSend(v4, "setBool:forKey:", v5, JIMPrefAutocorrectionKey);
    objc_release(v4);
  }
  objc_release(v3);
}