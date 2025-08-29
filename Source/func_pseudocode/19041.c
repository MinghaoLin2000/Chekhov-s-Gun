-[SiriNCAlertViewController _endDelayingSessionEndForTTS]
void __cdecl -[SiriNCAlertViewController _endDelayingSessionEndForTTS](SiriNCAlertViewController *self, SEL a2)
{
  NSNotificationCenter *v3; // x20
  id eventMonitor; // x0
  os_log_s *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( -[SiriNCAlertViewController delaySessionForTTS](self, "delaySessionForTTS") )
  {
    -[SiriNCAlertViewController setDelaySessionForTTS:](self, "setDelaySessionForTTS:", 0LL);
    v3 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
    -[NSNotificationCenter removeObserver:name:object:](
      v3,
      "removeObserver:name:object:",
      self,
      AFUISpeechSynthesisQueueDidEmptyNotification,
      0LL);
    objc_release(v3);
    if ( self->_eventMonitor )
    {
      +[NSEvent removeMonitor:](&OBJC_CLASS___NSEvent, "removeMonitor:");
      eventMonitor = self->_eventMonitor;
      self->_eventMonitor = 0LL;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      objc_release(eventMonitor);
    }
    else
    {
      v5 = (os_log_s *)AFSiriLogContextConnection;
      if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_ERROR) )
        sub_100012EEC(v5);
    }
  }
}