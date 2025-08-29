_EnterSandbox.cold.1
void EnterSandbox_cold_1()
{
  __int64 v0; // x2
  __int64 v1; // x4
  __int64 v2; // x5
  __int64 v3; // x6
  __int64 v4; // x7

  getuid();
  OUTLINED_FUNCTION_0(
    (void *)&_mh_execute_header,
    (os_log_s *)&_os_log_default,
    v0,
    "failed to get passwd entry for uid %u",
    v1,
    v2,
    v3,
    v4,
    0);
}