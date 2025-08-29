-[CoreMLModelSecurity .cxx_destruct]
void __cdecl -[CoreMLModelSecurity .cxx_destruct](CoreMLModelSecurity *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_txn, 0LL);
  objc_storeStrong((id *)&self->_clientProxy, 0LL);
  objc_storeStrong((id *)&self->_decryptedModel, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_decryptSessionManager, 0LL);
}