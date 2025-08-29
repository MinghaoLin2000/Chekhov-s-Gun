-[LocalProxyConnection .cxx_destruct]
void __cdecl -[LocalProxyConnection .cxx_destruct](LocalProxyConnection *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong(&self->_cleanupBlock, 0LL);
  objc_storeStrong((id *)&self->_context, 0LL);
  objc_storeStrong((id *)&self->_wd, 0LL);
  objc_storeStrong((id *)&self->_ws, 0LL);
  objc_storeStrong((id *)&self->_dataToSendToSocket, 0LL);
  objc_storeStrong((id *)&self->_rs, 0LL);
  objc_storeStrong((id *)&self->_path, 0LL);
  objc_storeStrong((id *)&self->_conn, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_queue, 0LL);
}