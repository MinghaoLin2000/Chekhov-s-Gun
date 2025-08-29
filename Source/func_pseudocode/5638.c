-[KeyboardSettingsMediator setDFRFnBehavior:]
void __cdecl -[KeyboardSettingsMediator setDFRFnBehavior:](KeyboardSettingsMediator *self, SEL a2, id a3)
{
  id v3; // x19
  __int64 Default; // x20
  uint8_t v5[16]; // [xsp+0h] [xbp-20h] BYREF

  v3 = objc_retain(a3);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v5 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "XPCSERVICE - DFRFnBehavior",
      v5,
      2u);
  }
  if ( v3 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
      sub_100007560(v3);
    Default = DFRPresentationModeGetDefault();
    DFRPresentationModeSetFNBehavior(Default, objc_msgSend(v3, "integerValue"));
  }
  objc_release(v3);
}