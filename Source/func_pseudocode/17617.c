_EnterSandbox.cold.7
void __fastcall EnterSandbox_cold_7(__int64 *a1)
{
  __int64 v1; // x8
  int v2; // [xsp+0h] [xbp-20h] BYREF
  __int64 v3; // [xsp+4h] [xbp-1Ch]

  v1 = *a1;
  v2 = 136446210;
  v3 = v1;
  _os_log_error_impl(
    (void *)&_mh_execute_header,
    (os_log_t)&_os_log_default,
    OS_LOG_TYPE_ERROR,
    "Failed to enter sandbox: %{public}s",
    (uint8_t *)&v2,
    0xCu);
}