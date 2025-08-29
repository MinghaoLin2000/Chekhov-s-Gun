-[SFUCryptoKey initAes128KeyFromPassphrase:iterationCount:saltData:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[SFUCryptoKey initAes128KeyFromPassphrase:iterationCount:saltData:](
        SFUCryptoKey *self,
        SEL a2,
        id a3,
        unsigned int a4,
        id a5)
{
  __int64 v6; // x20
  void *v9; // x23
  size_t v10; // x3
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( !a3 )
    return 0LL;
  v6 = *(_QWORD *)&a4;
  v9 = objc_msgSend(a3, "UTF8String");
  v10 = strlen((const char *)objc_msgSend(a3, "UTF8String"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[SFUCryptoKey initAes128KeyFromPassphrase:length:iterationCount:saltData:](
           self,
           "initAes128KeyFromPassphrase:length:iterationCount:saltData:",
           v9,
           v10,
           v6,
           a5);
}