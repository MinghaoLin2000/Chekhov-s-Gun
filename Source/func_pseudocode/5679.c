-[KeyboardSettingsMediator adjustBacklight]
id __cdecl -[KeyboardSettingsMediator adjustBacklight](KeyboardSettingsMediator *self, SEL a2)
{
  id v2; // x19
  NSNumber *v3; // x20
  uint8_t v5[16]; // [xsp+0h] [xbp-20h] BYREF
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v5 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "IN SERVICE - AdjustBacklight",
      v5,
      2u);
  }
  v2 = objc_alloc_init((Class)&OBJC_CLASS___KeyboardBrightnessClient);
  v3 = objc_retainAutoreleasedReturnValue(
         +[NSNumber numberWithBool:](
           &OBJC_CLASS___NSNumber,
           "numberWithBool:",
           objc_msgSend(v2, "isAutoBrightnessEnabledForKeyboard:", kKBIDBuiltIn)));
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}