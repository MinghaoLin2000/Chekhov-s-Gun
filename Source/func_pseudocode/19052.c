-[SiriNCAlertViewController autoDismissControllerShouldIgnoreDismissalForClickOutsideOfContent:]
bool __cdecl -[SiriNCAlertViewController autoDismissControllerShouldIgnoreDismissalForClickOutsideOfContent:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  os_log_s *v5; // x20
  const char *v6; // x3
  _BOOL8 v7; // x0
  bool v8; // w20
  int v10; // [xsp+0h] [xbp-30h] BYREF
  const char *v11; // [xsp+4h] [xbp-2Ch]

  v4 = objc_retain(a3);
  if ( self->_ncBreakOutState )
  {
    v5 = (os_log_s *)AFSiriLogContextConnection;
    if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
    {
      v10 = 136315138;
      v11 = "-[SiriNCAlertViewController autoDismissControllerShouldIgnoreDismissalForClickOutsideOfContent:]";
      v6 = "%s [Click Monitor] Ignoring because not in fixed mode.";
LABEL_15:
      _os_log_impl((void *)&_mh_execute_header, v5, OS_LOG_TYPE_DEFAULT, v6, (uint8_t *)&v10, 0xCu);
      goto LABEL_16;
    }
    goto LABEL_16;
  }
  if ( (unsigned int)-[SRFLockStateNotifier isLocked](self->_lockStateNotifier, "isLocked") )
  {
    v5 = (os_log_s *)AFSiriLogContextConnection;
    if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
    {
      v10 = 136315138;
      v11 = "-[SiriNCAlertViewController autoDismissControllerShouldIgnoreDismissalForClickOutsideOfContent:]";
      v6 = "%s [Click Monitor] Ignoring because on lock screen.";
      goto LABEL_15;
    }
LABEL_16:
    v8 = 1;
    goto LABEL_17;
  }
  if ( -[SiriNCAlertViewController wasDismissed](self, "wasDismissed") )
  {
    v5 = (os_log_s *)AFSiriLogContextConnection;
    if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
    {
      v10 = 136315138;
      v11 = "-[SiriNCAlertViewController autoDismissControllerShouldIgnoreDismissalForClickOutsideOfContent:]";
      v6 = "%s [Click Monitor] Ignoring because already dismissed.";
      goto LABEL_15;
    }
    goto LABEL_16;
  }
  v7 = -[SiriNCAlertViewController isSiriIdleAndQuiet](self, "isSiriIdleAndQuiet");
  if ( !v7 && (AFDeviceSupportsSystemAssistantExperience(v7) & 1) == 0 )
  {
    v5 = (os_log_s *)AFSiriLogContextConnection;
    if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
    {
      v10 = 136315138;
      v11 = "-[SiriNCAlertViewController autoDismissControllerShouldIgnoreDismissalForClickOutsideOfContent:]";
      v6 = "%s [Click Monitor] Ignoring because Siri is not idle nor quiet.";
      goto LABEL_15;
    }
    goto LABEL_16;
  }
  v8 = 0;
LABEL_17:
  objc_release(v4);
  return v8;
}