__ZL16idle_timer_resetv
void idle_timer_reset(void)
{
  dispatch_time_t v0; // x0
  dispatch_object_s *v1; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( g_idle_timer )
  {
    v0 = dispatch_time(0LL, 1000000000 * g_idle_timer_seconds);
    dispatch_source_set_timer((dispatch_source_t)g_idle_timer, v0, 0xFFFFFFFFFFFFFFFFLL, 0LL);
    v1 = (dispatch_object_s *)g_idle_timer;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    dispatch_resume(v1);
  }
}