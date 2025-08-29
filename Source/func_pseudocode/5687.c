-[KeyboardSettingsMediator perContextInput]
id __cdecl -[KeyboardSettingsMediator perContextInput](KeyboardSettingsMediator *self, SEL a2)
{
  const __CFBoolean *v2; // x0
  int Value; // w19
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
      "IN SERVICE - Per context input",
      v6,
      2u);
  }
  v2 = (const __CFBoolean *)TSMCopyTextInputGlobalProperty(CFSTR("TextInputGlobalPropertyPerContextInput"));
  Value = CFBooleanGetValue(v2);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
    sub_100008290(Value != 0);
  v4 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", Value != 0));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}