-[UARPUpdaterServiceLegacyAudio updateCompleteForAccessory:]
void __cdecl -[UARPUpdaterServiceLegacyAudio updateCompleteForAccessory:](
        UARPUpdaterServiceLegacyAudio *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  LegacyAudioController **p_controller; // x20
  NSArray *v6; // x20
  NSUInteger v7; // x21
  __int16 v8[8]; // [xsp+0h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  p_controller = &self->_controller;
  -[LegacyAudioController removeActiveAccessory:](*p_controller, "removeActiveAccessory:", v4);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
    sub_10001B0F0(v4, p_controller);
  v6 = objc_retainAutoreleasedReturnValue(-[LegacyAudioController activeAccessories](*p_controller, "activeAccessories"));
  v7 = -[NSArray count](v6, "count");
  objc_release(v6);
  if ( !v7 && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    v8[0] = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "No more active accessories",
      (uint8_t *)v8,
      2u);
  }
  objc_release(v4);
}