-[TSPPackage keyFromPassword:passwordVerifier:]
id __cdecl -[TSPPackage keyFromPassword:passwordVerifier:](TSPPackage *self, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x0
  void *v7; // x20
  id v8; // x21
  SFUCryptoKey *v9; // x21
  __int64 v10; // x23
  id v11; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = v6;
  v8 = 0LL;
  if ( v5 && v6 )
  {
    v9 = objc_alloc(&OBJC_CLASS___SFUCryptoKey);
    v10 = +[SFUCryptoUtils iterationCountFromPassphraseVerifier:](
            &OBJC_CLASS___SFUCryptoUtils,
            "iterationCountFromPassphraseVerifier:",
            v7);
    v11 = objc_retainAutoreleasedReturnValue(
            +[SFUCryptoUtils saltFromVerifier:saltLength:](
              &OBJC_CLASS___SFUCryptoUtils,
              "saltFromVerifier:saltLength:",
              v7,
              16LL));
    v8 = -[SFUCryptoKey initAes128KeyFromPassphrase:iterationCount:saltData:](
           v9,
           "initAes128KeyFromPassphrase:iterationCount:saltData:",
           v5,
           v10,
           v11);
    objc_release(v11);
  }
  objc_release(v7);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}