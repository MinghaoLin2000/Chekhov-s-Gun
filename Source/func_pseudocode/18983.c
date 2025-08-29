-[SiriNCAlertViewController _idleDelayTimerFired:]
void __cdecl -[SiriNCAlertViewController _idleDelayTimerFired:](SiriNCAlertViewController *self, SEL a2, id a3)
{
  id v4; // x19
  os_log_s *v5; // x21
  NSDistributedNotificationCenter *v6; // x21
  AFUISiriViewController *v7; // x22
  unsigned __int8 v8; // w23
  id v9; // x22
  AFUISiriViewController *v10; // x20
  __int64 v11; // x2
  int v12; // [xsp+0h] [xbp-50h] BYREF
  const char *v13; // [xsp+4h] [xbp-4Ch]

  v4 = objc_retain(a3);
  v5 = (os_log_s *)AFSiriLogContextConnection;
  if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
  {
    v12 = 136315138;
    v13 = "-[SiriNCAlertViewController _idleDelayTimerFired:]";
    _os_log_impl(
      (void *)&_mh_execute_header,
      v5,
      OS_LOG_TYPE_DEFAULT,
      "%s Idle and quiet timer fired.",
      (uint8_t *)&v12,
      0xCu);
  }
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSDistributedNotificationCenter defaultCenter](
           &OBJC_CLASS___NSDistributedNotificationCenter,
           "defaultCenter"));
  -[NSDistributedNotificationCenter postNotificationName:object:userInfo:options:](
    v6,
    "postNotificationName:object:userInfo:options:",
    SiriUIIdleAndQuietNotification,
    0LL,
    0LL,
    3LL);
  v7 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
  v8 = (unsigned __int8)-[AFUISiriViewController isShowingContent](v7, "isShowingContent");
  objc_release(v7);
  if ( (v8 & 1) == 0 )
  {
    v9 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController autodismisser](self, "autodismisser"));
    v10 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
    if ( (unsigned int)-[AFUISiriViewController hasOrbBeenTapped](v10, "hasOrbBeenTapped") )
      v11 = 2LL;
    else
      v11 = 1LL;
    objc_msgSend(v9, "startTimerWithTimingOption:", v11);
    objc_release(v10);
    objc_release(v9);
  }
  objc_release(v6);
  objc_release(v4);
}