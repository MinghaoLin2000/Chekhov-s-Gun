-[UARPUpdaterServiceLegacyAudio getDASActivityListWithReply:]
void __cdecl -[UARPUpdaterServiceLegacyAudio getDASActivityListWithReply:](
        UARPUpdaterServiceLegacyAudio *self,
        SEL a2,
        id a3)
{
  LegacyAudioController *controller; // x20
  void (__fastcall **v4)(id, void *); // x19
  NSArray *v5; // x20
  int v6; // [xsp+0h] [xbp-30h] BYREF
  const char *v7; // [xsp+4h] [xbp-2Ch]
  __int16 v8; // [xsp+Ch] [xbp-24h]
  NSArray *v9; // [xsp+Eh] [xbp-22h]

  controller = self->_controller;
  v4 = (void (__fastcall **)(id, void *))objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[LegacyAudioController matchingDASActivityList](controller, "matchingDASActivityList"));
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    v6 = 136315394;
    v7 = "-[UARPUpdaterServiceLegacyAudio getDASActivityListWithReply:]";
    v8 = 2112;
    v9 = v5;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "%s: matchingDASActivities %@",
      (uint8_t *)&v6,
      0x16u);
  }
  v4[2](v4, v5);
  objc_release(v4);
  objc_release(v5);
}