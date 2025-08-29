__os_signpost_emit_with_name_impl
void __cdecl _os_signpost_emit_with_name_impl(
        void *dso,
        os_log_t log,
        os_signpost_type_t type,
        os_signpost_id_t spid,
        const char *name,
        const char *format,
        uint8_t *buf,
        uint32_t size)
{
  __os_signpost_emit_with_name_impl(dso, log, type, spid, name, format, buf, size);
}