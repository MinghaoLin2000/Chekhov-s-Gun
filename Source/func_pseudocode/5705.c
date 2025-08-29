-[KeyboardSettingsMediator JIMLiveWindowsMode]
id __cdecl -[KeyboardSettingsMediator JIMLiveWindowsMode](KeyboardSettingsMediator *self, SEL a2)
{
  void *v2; // x20
  void *v3; // x19
  NSNumber *v4; // x0
  uint8_t v6[16]; // [xsp+0h] [xbp-20h] BYREF
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v6 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "IN SERVICE - JapaneseIM Windows mode",
      v6,
      2u);
  }
  v2 = objc_retainAutoreleasedReturnValue(+[JIMPreferences sharedPreferences](&OBJC_CLASS___JIMPreferences, "sharedPreferences"));
  v3 = objc_msgSend(v2, "boolForKey:", JIMPrefWindowsModeKey);
  objc_release(v2);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
    sub_100008760(v3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", v3));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}