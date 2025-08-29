-[KeyboardSettingsMediator keyRepeatInterval]
id __cdecl -[KeyboardSettingsMediator keyRepeatInterval](KeyboardSettingsMediator *self, SEL a2)
{
  NXEventHandle EVSHandle; // w0
  NSNumber *v3; // x0
  uint8_t v5[16]; // [xsp+0h] [xbp-10h] BYREF
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v5 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "IN SERVICE - KeyRepeatInterval",
      v5,
      2u);
  }
  EVSHandle = getEVSHandle();
  v3 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", NXKeyRepeatInterval(EVSHandle)));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}