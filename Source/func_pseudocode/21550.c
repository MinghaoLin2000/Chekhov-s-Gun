+[LSRConnection _cooldownTimerFired]
void __cdecl +[LSRConnection _cooldownTimerFired](id a1, SEL a2)
{
  os_log_s *v3; // x20
  int v4; // [xsp+0h] [xbp-30h] BYREF
  const char *v5; // [xsp+4h] [xbp-2Ch]

  dispatch_assert_queue_V2((dispatch_queue_t)qword_100065418);
  v3 = (os_log_s *)SFLogConnection;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_DEBUG) )
  {
    v4 = 136315138;
    v5 = "+[LSRConnection _cooldownTimerFired]";
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      v3,
      OS_LOG_TYPE_DEBUG,
      "%s _cooldownTimerFired",
      (uint8_t *)&v4,
      0xCu);
  }
  +[LSRConnection _cachedRecognizerCleanUp](&OBJC_CLASS___LSRConnection, "_cachedRecognizerCleanUp");
  objc_msgSend(a1, "_cancelCooldownTimer");
}