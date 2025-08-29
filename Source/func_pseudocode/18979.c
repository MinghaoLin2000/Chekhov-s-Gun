-[SiriNCAlertViewController respondToSheildRaisedNotification:]
void __cdecl -[SiriNCAlertViewController respondToSheildRaisedNotification:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3)
{
  os_log_s *v4; // x20
  int v5; // [xsp+0h] [xbp-30h] BYREF
  const char *v6; // [xsp+4h] [xbp-2Ch]

  if ( !-[SiriNCAlertViewController isHiddenBehindShield](self, "isHiddenBehindShield", a3) )
  {
    v4 = (os_log_s *)AFSiriLogContextConnection;
    if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
    {
      v5 = 136315138;
      v6 = "-[SiriNCAlertViewController respondToSheildRaisedNotification:]";
      _os_log_impl(
        (void *)&_mh_execute_header,
        v4,
        OS_LOG_TYPE_DEFAULT,
        "%s Siri alert is hidden behind shield.",
        (uint8_t *)&v5,
        0xCu);
    }
    -[SiriNCAlertViewController setHiddenBehindShield:](self, "setHiddenBehindShield:", 1LL);
  }
}