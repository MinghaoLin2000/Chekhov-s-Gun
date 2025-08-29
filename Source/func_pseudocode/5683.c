-[KeyboardSettingsMediator DFRFnBehavior]
id __cdecl -[KeyboardSettingsMediator DFRFnBehavior](KeyboardSettingsMediator *self, SEL a2)
{
  __int64 Default; // x0
  __int64 FNBehavior; // x19
  NSNumber *v4; // x0
  uint8_t v6[16]; // [xsp+0h] [xbp-20h] BYREF
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v6 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "IN SERVICE - DFR FnBehavior",
      v6,
      2u);
  }
  Default = DFRPresentationModeGetDefault();
  FNBehavior = DFRPresentationModeGetFNBehavior(Default);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
    sub_1000080D0(FNBehavior);
  v4 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithLong:](&OBJC_CLASS___NSNumber, "numberWithLong:", FNBehavior));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}