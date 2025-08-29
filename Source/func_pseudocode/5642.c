-[KeyboardSettingsMediator setPerContextInput:]
void __cdecl -[KeyboardSettingsMediator setPerContextInput:](KeyboardSettingsMediator *self, SEL a2, id a3)
{
  id v3; // x19
  unsigned int v4; // w0
  const CFBooleanRef *v5; // x8
  uint8_t v6[16]; // [xsp+0h] [xbp-20h] BYREF

  v3 = objc_retain(a3);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v6 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "XPCSERVICE - Per context input",
      v6,
      2u);
  }
  if ( v3 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
      sub_100007720(v3);
    v4 = (unsigned int)objc_msgSend(v3, "boolValue");
    v5 = &kCFBooleanTrue;
    if ( !v4 )
      v5 = &kCFBooleanFalse;
    TSMSetTextInputGlobalProperty(CFSTR("TextInputGlobalPropertyPerContextInput"), *v5);
  }
  objc_release(v3);
}