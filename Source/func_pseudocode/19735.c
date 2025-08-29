-[platform_http_t .cxx_destruct]
void __cdecl -[platform_http_t .cxx_destruct](platform_http_t *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong(&self->_pass_callback, 0LL);
  objc_storeStrong(&self->_trust_callback, 0LL);
  objc_storeStrong((id *)&self->_documentCompression, 0LL);
  objc_storeStrong(&self->_boundInterfaceFixer, 0LL);
  objc_storeStrong((id *)&self->_streamedTaskResponse, 0LL);
  objc_storeStrong((id *)&self->_streamedTask, 0LL);
  objc_storeStrong((id *)&self->_streamedTaskFinishedSemaphore, 0LL);
  objc_storeStrong((id *)&self->_session, 0LL);
  objc_storeStrong((id *)&self->_logLeader, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_url, 0LL);
}