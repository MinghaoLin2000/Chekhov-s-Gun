-[KeyboardSettingsMediator setBidiSplitCursor:]
void __cdecl -[KeyboardSettingsMediator setBidiSplitCursor:](KeyboardSettingsMediator *self, SEL a2, id a3)
{
  id v3; // x19
  uint8_t v4[16]; // [xsp+0h] [xbp-20h] BYREF

  v3 = objc_retain(a3);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v4 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "XPCSERVICE - Bidi split cursor",
      v4,
      2u);
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
  {
    sub_100007BF0(v3);
    if ( !v3 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( v3 )
LABEL_5:
    NSSetUseSplitCursor(objc_msgSend(v3, "boolValue"));
LABEL_6:
  objc_release(v3);
}