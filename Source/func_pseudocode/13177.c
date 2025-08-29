-[SFUCryptoKey initAes128KeyFromPassphrase:withIterationCountAndSaltDataFromCryptoKey:]
id __cdecl -[SFUCryptoKey initAes128KeyFromPassphrase:withIterationCountAndSaltDataFromCryptoKey:](
        SFUCryptoKey *self,
        SEL a2,
        id a3,
        id a4)
{
  const char *v6; // x21
  size_t v7; // x22
  void *v8; // x23
  void *v9; // x5
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( !a3 )
    return 0LL;
  v6 = (const char *)objc_msgSend(a3, "UTF8String");
  v7 = strlen(v6);
  v8 = objc_msgSend(a4, "iterationCount");
  v9 = objc_msgSend(a4, "saltData");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[SFUCryptoKey initAes128KeyFromPassphrase:length:iterationCount:saltData:](
           self,
           "initAes128KeyFromPassphrase:length:iterationCount:saltData:",
           v6,
           v7,
           v8,
           v9);
}