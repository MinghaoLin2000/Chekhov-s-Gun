+[LSRConnection _scheduleCooldownTimer]
void __cdecl +[LSRConnection _scheduleCooldownTimer](id a1, SEL a2)
{
  os_log_s *v3; // x19
  dispatch_source_t v4; // x0
  void *v5; // x8
  dispatch_source_s *v6; // x19
  dispatch_time_t v7; // x0
  int v8; // [xsp+0h] [xbp-40h] BYREF
  const char *v9; // [xsp+4h] [xbp-3Ch]

  dispatch_assert_queue_V2((dispatch_queue_t)qword_100065418);
  objc_msgSend(a1, "_cancelCooldownTimer");
  if ( !qword_100065478 )
  {
    v3 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_DEBUG) )
    {
      v8 = 136315138;
      v9 = "+[LSRConnection _scheduleCooldownTimer]";
      _os_log_debug_impl(
        (void *)&_mh_execute_header,
        v3,
        OS_LOG_TYPE_DEBUG,
        "%s _scheduleCooldownTimer",
        (uint8_t *)&v8,
        0xCu);
    }
    v4 = dispatch_source_create(
           (dispatch_source_type_t)&_dispatch_source_type_timer,
           0LL,
           0LL,
           (dispatch_queue_t)qword_100065418);
    v5 = (void *)qword_100065478;
    qword_100065478 = (__int64)v4;
    objc_release(v5);
    dispatch_source_set_event_handler((dispatch_source_t)qword_100065478, &stru_100059D48);
    v6 = (dispatch_source_s *)qword_100065478;
    v7 = dispatch_time(0LL, 1000000000LL * kCooldownTimerIntervalSeconds);
    dispatch_source_set_timer(v6, v7, 0xFFFFFFFFFFFFFFFFLL, 0LL);
    dispatch_resume((dispatch_object_t)qword_100065478);
  }
}