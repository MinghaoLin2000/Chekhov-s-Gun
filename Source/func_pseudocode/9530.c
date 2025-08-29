-[TSPMutableCryptoInfoInternal incrementDecodedLengthBy:]
void __cdecl -[TSPMutableCryptoInfoInternal incrementDecodedLengthBy:](
        TSPMutableCryptoInfoInternal *self,
        SEL a2,
        unsigned __int64 a3)
{
  char *v4; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = (char *)-[TSPCryptoInfoInternal decodedLength](self, "decodedLength") + a3;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[TSPCryptoInfoInternal setDecodedLength:](self, "setDecodedLength:", v4);
}