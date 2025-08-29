-[KeyboardSettingsMediator spellingLanguage]
id __cdecl -[KeyboardSettingsMediator spellingLanguage](KeyboardSettingsMediator *self, SEL a2)
{
  void *v2; // x19
  id v3; // x0
  uint8_t v5[16]; // [xsp+0h] [xbp-20h] BYREF
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v5 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "IN SERVICE - Spelling language",
      v5,
      2u);
  }
  v2 = (void *)CFPreferencesCopyAppValue(CFSTR("KB_SpellingLanguage"), kCFPreferencesAnyApplication);
  if ( !os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
  {
    if ( !v2 )
      goto LABEL_6;
    goto LABEL_5;
  }
  sub_1000085A0(v2);
  if ( v2 )
LABEL_5:
    v3 = objc_retain(v2);
LABEL_6:
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}