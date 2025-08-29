-[StoreUIService .cxx_destruct]
void __cdecl -[StoreUIService .cxx_destruct](StoreUIService *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_window, 0LL);
  objc_storeStrong((id *)&self->_consentTask, 0LL);
  objc_storeStrong((id *)&self->_connection, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_dispatchQueue, 0LL);
}