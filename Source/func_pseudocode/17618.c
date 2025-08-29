_EnterSandbox.cold.8
void EnterSandbox_cold_8()
{
  uint8_t v0[16]; // [xsp+0h] [xbp-10h] BYREF

  *(_WORD *)v0 = 0;
  _os_log_debug_impl(
    (void *)&_mh_execute_header,
    (os_log_t)&_os_log_default,
    OS_LOG_TYPE_DEBUG,
    "$HOME not set, falling back to using getpwuid",
    v0,
    2u);
}