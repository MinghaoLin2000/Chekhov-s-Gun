+[LSRConnection _cancelCooldownTimer]
void __cdecl +[LSRConnection _cancelCooldownTimer](id a1, SEL a2)
{
  dispatch_source_s *v2; // x20
  os_log_s *v3; // x19
  void *v4; // x0
  int v5; // [xsp+0h] [xbp-40h] BYREF
  const char *v6; // [xsp+4h] [xbp-3Ch]

  dispatch_assert_queue_V2((dispatch_queue_t)qword_100065418);
  v2 = (dispatch_source_s *)qword_100065478;
  if ( qword_100065478 )
  {
    v3 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_DEBUG) )
    {
      v5 = 136315138;
      v6 = "+[LSRConnection _cancelCooldownTimer]";
      _os_log_debug_impl(
        (void *)&_mh_execute_header,
        v3,
        OS_LOG_TYPE_DEBUG,
        "%s _cancelCooldownTimer",
        (uint8_t *)&v5,
        0xCu);
      v2 = (dispatch_source_s *)qword_100065478;
    }
    dispatch_source_cancel(v2);
    v4 = (void *)qword_100065478;
    qword_100065478 = 0LL;
    objc_release(v4);
  }
}