-[TSPCryptoInfoInternal mutableCryptoInfoCopy]
id __cdecl -[TSPCryptoInfoInternal mutableCryptoInfoCopy](TSPCryptoInfoInternal *self, SEL a2)
{
  TSPMutableCryptoInfoInternal *v3; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_alloc(&OBJC_CLASS___TSPMutableCryptoInfoInternal);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[TSPCryptoInfoInternal initWithCryptoInfo:](v3, "initWithCryptoInfo:", self);
}