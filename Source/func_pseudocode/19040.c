-[SiriNCAlertViewController _beginDelayingSessionEndForTTS]
void __cdecl -[SiriNCAlertViewController _beginDelayingSessionEndForTTS](SiriNCAlertViewController *self, SEL a2)
{
  os_log_s *v3; // x20
  NSNotificationCenter *v4; // x20
  os_log_s *v5; // x19
  id v6; // x0
  id eventMonitor; // x8
  _QWORD v8[5]; // [xsp+8h] [xbp-88h] BYREF
  __int128 buf; // [xsp+30h] [xbp-60h] BYREF
  __int64 v10; // [xsp+40h] [xbp-50h]
  __int64 (__fastcall *v11)(); // [xsp+48h] [xbp-48h]
  __int64 (__fastcall *v12)(); // [xsp+50h] [xbp-40h]
  id v13; // [xsp+58h] [xbp-38h]

  if ( !-[SiriNCAlertViewController delaySessionForTTS](self, "delaySessionForTTS") )
  {
    v3 = (os_log_s *)AFSiriLogContextConnection;
    if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
    {
      LODWORD(buf) = 136315138;
      *(_QWORD *)((char *)&buf + 4) = "-[SiriNCAlertViewController _beginDelayingSessionEndForTTS]";
      _os_log_impl(
        (void *)&_mh_execute_header,
        v3,
        OS_LOG_TYPE_DEFAULT,
        "%s Delaying session end until TTS completed",
        (uint8_t *)&buf,
        0xCu);
    }
    -[SiriNCAlertViewController setDelaySessionForTTS:](self, "setDelaySessionForTTS:", 1LL);
    v4 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
    -[NSNotificationCenter addObserver:selector:name:object:](
      v4,
      "addObserver:selector:name:object:",
      self,
      "_ttsQueueDidEmpty:",
      AFUISpeechSynthesisQueueDidEmptyNotification,
      0LL);
    objc_release(v4);
    if ( self->_eventMonitor )
    {
      v5 = (os_log_s *)AFSiriLogContextConnection;
      if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_ERROR) )
        sub_100012E68(v5);
    }
    else
    {
      *(_QWORD *)&buf = 0LL;
      *((_QWORD *)&buf + 1) = &buf;
      v10 = 0x3032000000LL;
      v11 = sub_1000113DC;
      v12 = sub_1000113EC;
      v13 = objc_retain(self);
      v8[0] = _NSConcreteStackBlock;
      v8[1] = 3254779904LL;
      v8[2] = sub_1000113F4;
      v8[3] = &unk_100020CF0;
      v8[4] = &buf;
      v6 = objc_retainAutoreleasedReturnValue(
             +[NSEvent addLocalMonitorForEventsMatchingMask:handler:](
               &OBJC_CLASS___NSEvent,
               "addLocalMonitorForEventsMatchingMask:handler:",
               4195338LL,
               v8));
      eventMonitor = self->_eventMonitor;
      self->_eventMonitor = v6;
      objc_release(eventMonitor);
      _Block_object_dispose(&buf, 8);
      objc_release(v13);
    }
  }
}