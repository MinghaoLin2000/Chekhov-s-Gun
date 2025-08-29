-[KeyboardSettingsMediator setIdleDimTime:]
void __cdecl -[KeyboardSettingsMediator setIdleDimTime:](KeyboardSettingsMediator *self, SEL a2, id a3)
{
  id v3; // x19
  id v4; // x20
  uint8_t v5[16]; // [xsp+0h] [xbp-20h] BYREF

  v3 = objc_retain(a3);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v5 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "XPCSERVICE - Update IdleDimTime",
      v5,
      2u);
  }
  v4 = objc_alloc_init((Class)&OBJC_CLASS___KeyboardBrightnessClient);
  if ( v3 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
      sub_100007480(v3);
    objc_msgSend(v3, "doubleValue");
    objc_msgSend(v4, "setIdleDimTime:forKeyboard:", kKBIDBuiltIn);
  }
  objc_release(v4);
  objc_release(v3);
}