-[KeyboardSettingsMediator setKeyRepeatInterval:]
void __cdecl -[KeyboardSettingsMediator setKeyRepeatInterval:](KeyboardSettingsMediator *self, SEL a2, id a3)
{
  id v3; // x19
  NXEventHandle EVSHandle; // w20
  double v5; // d0
  uint8_t v6[16]; // [xsp+0h] [xbp-20h] BYREF

  v3 = objc_retain(a3);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v6 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "XPCSERVICE - Update KeyRepeatInterval",
      v6,
      2u);
  }
  if ( v3 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
      sub_1000073A0(v3);
    EVSHandle = getEVSHandle();
    objc_msgSend(v3, "doubleValue");
    NXSetKeyRepeatInterval(EVSHandle, v5);
  }
  objc_release(v3);
}