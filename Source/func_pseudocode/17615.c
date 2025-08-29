_EnterSandbox.cold.5
void EnterSandbox_cold_5()
{
  __int64 v0; // x2
  __int64 v1; // x4
  __int64 v2; // x5
  __int64 v3; // x6
  __int64 v4; // x7
  uint8_t v5; // [xsp+0h] [xbp-10h]

  __error();
  OUTLINED_FUNCTION_1();
  OUTLINED_FUNCTION_0(
    (void *)&_mh_execute_header,
    (os_log_s *)&_os_log_default,
    v0,
    "failed to initialize cache directory: %{darwin.errno}d",
    v1,
    v2,
    v3,
    v4,
    v5);
}