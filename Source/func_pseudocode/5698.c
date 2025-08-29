-[KeyboardSettingsMediator bidiKeyboardShortcut]
id __cdecl -[KeyboardSettingsMediator bidiKeyboardShortcut](KeyboardSettingsMediator *self, SEL a2)
{
  NSNumber *v2; // x0
  uint8_t v4[16]; // [xsp+0h] [xbp-20h] BYREF
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v4 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "IN SERVICE - Bidi keyboard shortcut",
      v4,
      2u);
  }
  v2 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", NSUseWritingDirectionKeyBindings()));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}