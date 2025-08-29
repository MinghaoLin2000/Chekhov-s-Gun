-[KeyboardSettingsMediator bidiVisualSelection]
id __cdecl -[KeyboardSettingsMediator bidiVisualSelection](KeyboardSettingsMediator *self, SEL a2)
{
  NSUserDefaults *v2; // x19
  void *v3; // x20
  uint8_t v5[16]; // [xsp+0h] [xbp-20h] BYREF
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v5 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "IN SERVICE - Bidi Natural Selection",
      v5,
      2u);
  }
  v2 = objc_retainAutoreleasedReturnValue(+[NSUserDefaults standardUserDefaults](&OBJC_CLASS___NSUserDefaults, "standardUserDefaults"));
  v3 = objc_retainAutoreleasedReturnValue(
         -[NSUserDefaults objectForKey:inDomain:](
           v2,
           "objectForKey:inDomain:",
           CFSTR("NSVisualBidiSelectionEnabled"),
           NSGlobalDomain));
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}