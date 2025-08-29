__ZL15idle_timer_initv
__int64 idle_timer_init(void)
{
  __int64 result; // x0
  dispatch_source_s *v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  result = (__int64)getenv("MTL_IDLE_EXIT_TIMEOUT_SECONDS");
  g_idle_timer_reason = (__int64)"EV";
  if ( result )
  {
    result = atoll((const char *)result);
    g_idle_timer_seconds = result;
    if ( result >= 1 )
    {
      if ( serial_queue(void)::onceToken != -1 )
        dispatch_once(&serial_queue(void)::onceToken, &__block_literal_global);
      v1 = dispatch_source_create(
             (dispatch_source_type_t)&_dispatch_source_type_timer,
             0LL,
             0LL,
             (dispatch_queue_t)serial_queue(void)::_serial_queue);
      g_idle_timer = (__int64)v1;
      if ( v1 )
      {
        dispatch_source_set_event_handler_f(v1, (dispatch_function_t)idle_timer_exit);
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        return idle_timer_reset();
      }
      else
      {
        result = os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR);
        if ( (_DWORD)result )
          return idle_timer_init();
      }
    }
  }
  else
  {
    g_idle_timer_seconds = 0LL;
  }
  return result;
}