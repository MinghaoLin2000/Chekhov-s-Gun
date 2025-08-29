-[SiriNCAlertViewController siriViewControllerDidChangeListeningState:]
void __cdecl -[SiriNCAlertViewController siriViewControllerDidChangeListeningState:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3)
{
  void *v4; // x20
  os_log_s *v5; // x20
  int v6; // [xsp+0h] [xbp-30h] BYREF
  const char *v7; // [xsp+4h] [xbp-2Ch]
  __int16 v8; // [xsp+Ch] [xbp-24h]
  const char *Name; // [xsp+Eh] [xbp-22h]

  v4 = (void *)AFSiriLogContextConnection;
  if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
  {
    v5 = objc_retain(v4);
    v6 = 136315394;
    v7 = "-[SiriNCAlertViewController siriViewControllerDidChangeListeningState:]";
    v8 = 2080;
    Name = sel_getName(a2);
    _os_log_impl(
      (void *)&_mh_execute_header,
      v5,
      OS_LOG_TYPE_DEFAULT,
      "%s %s - not yet implemented",
      (uint8_t *)&v6,
      0x16u);
    objc_release(v5);
  }
}