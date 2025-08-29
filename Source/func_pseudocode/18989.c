-[SiriNCAlertViewController willBreakoutOfNotificationCenter]
void __cdecl -[SiriNCAlertViewController willBreakoutOfNotificationCenter](SiriNCAlertViewController *self, SEL a2)
{
  os_log_s *v3; // x20
  signed __int64 ncBreakOutState; // x8
  AFUISiriViewController *v5; // x19
  int v6; // [xsp+0h] [xbp-40h] BYREF
  const char *v7; // [xsp+4h] [xbp-3Ch]
  __int16 v8; // [xsp+Ch] [xbp-34h]
  signed __int64 v9; // [xsp+Eh] [xbp-32h]

  v3 = (os_log_s *)AFSiriLogContextConnection;
  if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
  {
    ncBreakOutState = self->_ncBreakOutState;
    v6 = 136315394;
    v7 = "-[SiriNCAlertViewController willBreakoutOfNotificationCenter]";
    v8 = 2048;
    v9 = ncBreakOutState;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v3,
      OS_LOG_TYPE_DEFAULT,
      "%s #SiriWindow: preparing remote view transfer %ld",
      (uint8_t *)&v6,
      0x16u);
  }
  self->_ncBreakOutState = 1LL;
  v5 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
  -[AFUISiriViewController willBreakoutOfNotificationCenter](v5, "willBreakoutOfNotificationCenter");
  objc_release(v5);
}