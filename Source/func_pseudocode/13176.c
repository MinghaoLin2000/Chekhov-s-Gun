-[SFUCryptoKey initAes128KeyFromPassphrase:iterationCount:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[SFUCryptoKey initAes128KeyFromPassphrase:iterationCount:](
        SFUCryptoKey *self,
        SEL a2,
        id a3,
        unsigned int a4)
{
  __int64 v4; // x19
  const char *v6; // x0
  const char *v7; // x21
  size_t v8; // x22
  id v9; // x5
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( !a3 )
    return 0LL;
  v4 = *(_QWORD *)&a4;
  v6 = (const char *)objc_msgSend(a3, "UTF8String");
  if ( !v6 )
    return 0LL;
  v7 = v6;
  v8 = strlen(v6);
  v9 = +[SFUCryptoUtils generateRandomSaltWithLength:](
         &OBJC_CLASS___SFUCryptoUtils,
         "generateRandomSaltWithLength:",
         16LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[SFUCryptoKey initAes128KeyFromPassphrase:length:iterationCount:saltData:](
           self,
           "initAes128KeyFromPassphrase:length:iterationCount:saltData:",
           v7,
           v8,
           v4,
           v9);
}