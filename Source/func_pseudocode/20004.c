-[LocalSocketProxy .cxx_destruct]
void __cdecl -[LocalSocketProxy .cxx_destruct](LocalSocketProxy *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_connections, 0LL);
  objc_storeStrong((id *)&self->_waiters, 0LL);
  objc_storeStrong((id *)&self->_listener, 0LL);
  objc_storeStrong((id *)&self->_path, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_queue, 0LL);
}