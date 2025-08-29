_main.cold.1
void main_cold_1()
{
  int *v0; // x0
  char *v1; // x0
  uint8_t v2[24]; // [xsp+0h] [xbp-30h] BYREF

  __error();
  v0 = __error();
  v1 = strerror(*v0);
  OUTLINED_FUNCTION_0(v1, COERCE_DOUBLE(67109378LL));
  _os_log_error_impl(
    (void *)&_mh_execute_header,
    (os_log_t)&_os_log_default,
    OS_LOG_TYPE_ERROR,
    "failed to initialize temporary directory (%d): %s",
    v2,
    0x12u);
}