+[SFUCryptoOutputStream encodedLengthForDataLength:key:]
unsigned __int64 __cdecl +[SFUCryptoOutputStream encodedLengthForDataLength:key:](
        id a1,
        SEL a2,
        unsigned __int64 a3,
        id a4)
{
  unsigned int v6; // w21
  unsigned int v7; // w0
  __int64 v8; // x8

  v6 = 2 * +[SFUCryptoUtils ivLengthForKey:](&OBJC_CLASS___SFUCryptoUtils, "ivLengthForKey:", a4);
  v7 = (unsigned int)objc_msgSend(a4, "keyType");
  LODWORD(v8) = v6 - (a3 & 0xF) + 16;
  if ( v7 )
    v8 = v6;
  else
    v8 = (unsigned int)v8;
  if ( __CFADD__(v8, a3) )
    v8 = 0LL;
  return v8 + a3;
}