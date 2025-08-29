-[KeyboardSettingsMediator setKeyRepeatThreshold:]
void __cdecl -[KeyboardSettingsMediator setKeyRepeatThreshold:](KeyboardSettingsMediator *self, SEL a2, id a3)
{
  id v3; // x19
  NXEventHandle EVSHandle; // w20
  double v5; // d0

  v3 = objc_retain(a3);
  if ( v3 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
      sub_100007330(v3);
    EVSHandle = getEVSHandle();
    objc_msgSend(v3, "doubleValue");
    NXSetKeyRepeatThreshold(EVSHandle, v5);
  }
  objc_release(v3);
}