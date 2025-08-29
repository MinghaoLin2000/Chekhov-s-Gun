-[KeyboardSettingsMediator singleQuoteOption]
id __cdecl -[KeyboardSettingsMediator singleQuoteOption](KeyboardSettingsMediator *self, SEL a2)
{
  void *v2; // x0
  void *v3; // x19
  id v4; // x0
  uint8_t v6[16]; // [xsp+0h] [xbp-20h] BYREF
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v6 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "IN SERVICE - Single Quote option",
      v6,
      2u);
  }
  v2 = (void *)CFPreferencesCopyAppValue(CFSTR("KB_SingleQuoteOption"), kCFPreferencesAnyApplication);
  v3 = v2;
  if ( v2 )
    v4 = objc_retain(v2);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}