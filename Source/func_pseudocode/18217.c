-[OSLogService .cxx_destruct]
void __cdecl -[OSLogService .cxx_destruct](OSLogService *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_events, 0LL);
  objc_storeStrong((id *)&self->_stream, 0LL);
  objc_storeStrong((id *)&self->_predicate, 0LL);
  objc_storeStrong((id *)&self->_serial_queue, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_transaction, 0LL);
}