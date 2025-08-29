-[TSPMutableCryptoInfoInternal reset]
void __cdecl -[TSPMutableCryptoInfoInternal reset](TSPMutableCryptoInfoInternal *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[TSPCryptoInfoInternal setBlockInfos:](self, "setBlockInfos:", 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[TSPCryptoInfoInternal setDecodedLength:](self, "setDecodedLength:", 0LL);
}