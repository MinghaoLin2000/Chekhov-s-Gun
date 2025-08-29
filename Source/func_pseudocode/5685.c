-[KeyboardSettingsMediator textInputMenu]
id __cdecl -[KeyboardSettingsMediator textInputMenu](KeyboardSettingsMediator *self, SEL a2)
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
      "IN SERVICE - Text input menu",
      v6,
      2u);
  }
  v2 = objc_msgSend(
         objc_alloc((Class)&OBJC_CLASS___NSUserDefaults),
         "initWithSuiteName:",
         CFSTR("com.apple.TextInputMenu"));
  v3 = objc_msgSend(v2, "boolForKey:", CFSTR("visible"));
  objc_release(v2);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
    sub_1000081B0(v3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", v3));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}