__ZL15idle_timer_initv.cold.1
void idle_timer_init()
{
  int v0; // [xsp+0h] [xbp-20h] BYREF
  const char *v1; // [xsp+4h] [xbp-1Ch]

  v0 = 136446210;
  v1 = "EV";
  _os_log_error_impl(
    (void *)&_mh_execute_header,
    (os_log_t)&_os_log_default,
    OS_LOG_TYPE_ERROR,
    "Unable to create idle timer, idle exit %{public}s is disabled.",
    (uint8_t *)&v0,
    0xCu);
}