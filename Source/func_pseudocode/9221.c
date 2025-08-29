-[TSPCryptoReadChannel .cxx_destruct]
void __cdecl -[TSPCryptoReadChannel .cxx_destruct](TSPCryptoReadChannel *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_holdData, 0LL);
  objc_storeStrong((id *)&self->_blockInfos, 0LL);
  objc_storeStrong((id *)&self->_decryptionKey, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_readChannel, 0LL);
}