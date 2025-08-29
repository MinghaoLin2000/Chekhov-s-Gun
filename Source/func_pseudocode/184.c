__os_log_impl
void __cdecl _os_log_impl(void *dso, os_log_t log, os_log_type_t type, const char *format, uint8_t *buf, uint32_t size)
{
  __os_log_impl(dso, log, type, format, buf, size);
}