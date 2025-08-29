-[SFUCryptoKey initAes128KeyFromPassphrase:length:iterationCount:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[SFUCryptoKey initAes128KeyFromPassphrase:length:iterationCount:](
        SFUCryptoKey *self,
        SEL a2,
        const char *a3,
        unsigned int a4,
        unsigned int a5)
{
  return -[SFUCryptoKey initAes128KeyFromPassphrase:length:iterationCount:saltData:](
           self,
           "initAes128KeyFromPassphrase:length:iterationCount:saltData:",
           a3,
           *(_QWORD *)&a4,
           *(_QWORD *)&a5,
           0LL);
}