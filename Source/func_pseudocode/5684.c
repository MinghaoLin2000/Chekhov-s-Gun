-[KeyboardSettingsMediator uiMode]
id __cdecl -[KeyboardSettingsMediator uiMode](KeyboardSettingsMediator *self, SEL a2)
{
  CFIndex AppIntegerValue; // x0
  CFIndex v3; // x19
  NSNumber *v4; // x0
  Boolean keyExistsAndHasValidFormat; // [xsp+Fh] [xbp-21h] BYREF
  uint8_t buf[16]; // [xsp+10h] [xbp-20h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)buf = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "IN SERVICE - Keyboard UI mode",
      buf,
      2u);
  }
  keyExistsAndHasValidFormat = 0;
  AppIntegerValue = CFPreferencesGetAppIntegerValue(
                      CFSTR("AppleKeyboardUIMode"),
                      kCFPreferencesAnyApplication,
                      &keyExistsAndHasValidFormat);
  if ( keyExistsAndHasValidFormat )
  {
    v3 = AppIntegerValue;
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
      sub_100008140(v3);
    v4 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInteger:](&OBJC_CLASS___NSNumber, "numberWithInteger:", v3));
  }
  else
  {
    v4 = 0LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}