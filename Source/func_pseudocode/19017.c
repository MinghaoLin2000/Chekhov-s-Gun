-[SiriNCAlertViewController siriViewController:attemptUnlockWithPassword:]
bool __cdecl -[SiriNCAlertViewController siriViewController:attemptUnlockWithPassword:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  void *v5; // x20
  os_log_s *v6; // x20
  int v8; // [xsp+0h] [xbp-30h] BYREF
  const char *v9; // [xsp+4h] [xbp-2Ch]
  __int16 v10; // [xsp+Ch] [xbp-24h]
  const char *Name; // [xsp+Eh] [xbp-22h]

  v5 = (void *)AFSiriLogContextConnection;
  if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
  {
    v6 = objc_retain(v5);
    v8 = 136315394;
    v9 = "-[SiriNCAlertViewController siriViewController:attemptUnlockWithPassword:]";
    v10 = 2080;
    Name = sel_getName(a2);
    _os_log_impl(
      (void *)&_mh_execute_header,
      v6,
      OS_LOG_TYPE_DEFAULT,
      "%s %s - not yet implemented",
      (uint8_t *)&v8,
      0x16u);
    objc_release(v6);
  }
  return 0;
}