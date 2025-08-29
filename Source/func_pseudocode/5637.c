-[KeyboardSettingsMediator setDFRPresentationMode:]
void __cdecl -[KeyboardSettingsMediator setDFRPresentationMode:](KeyboardSettingsMediator *self, SEL a2, id a3)
{
  id v3; // x19
  int v4; // [xsp+0h] [xbp-30h] BYREF
  id v5; // [xsp+4h] [xbp-2Ch]

  v3 = objc_retain(a3);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    LOWORD(v4) = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "XPCSERVICE - DFRPresentationMode",
      (uint8_t *)&v4,
      2u);
  }
  if ( v3 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
    {
      v4 = 138412290;
      v5 = v3;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_DEFAULT,
        "XPCSERVICE - New DFR Presentation mode: %@",
        (uint8_t *)&v4,
        0xCu);
    }
    DFRPresentationModeSetDefault(objc_msgSend(v3, "integerValue"));
  }
  objc_release(v3);
}