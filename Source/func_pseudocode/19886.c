-[job_spool_client_t .cxx_destruct]
void __cdecl -[job_spool_client_t .cxx_destruct](job_spool_client_t *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_printer, 0LL);
  objc_storeStrong((id *)&self->_printSettings, 0LL);
  objc_storeStrong((id *)&self->_fileHandleForStreaming, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_filePathForStreaming, 0LL);
}