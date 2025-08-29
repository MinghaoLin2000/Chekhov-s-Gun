__ZL15idle_timer_exitPv
void __fastcall __noreturn idle_timer_exit(void *a1)
{
  int v1; // [xsp+0h] [xbp-20h] BYREF
  __int64 v2; // [xsp+4h] [xbp-1Ch]
  __int16 v3; // [xsp+Ch] [xbp-14h]
  __int64 v4; // [xsp+Eh] [xbp-12h]

  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    v1 = 134349314;
    v2 = g_idle_timer_seconds;
    v3 = 2082;
    v4 = g_idle_timer_reason;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Idle exit MTLCompilerService after %{public}lld seconds (reason: %{public}s).",
      (uint8_t *)&v1,
      0x16u);
  }
  _Exit(0);
}