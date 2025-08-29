+[SFUCryptoUtils decodePassphraseHint:]
id __cdecl +[SFUCryptoUtils decodePassphraseHint:](id a1, SEL a2, id a3)
{
  id result; // x0
  void *v5; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  result = objc_msgSend(a3, "length");
  if ( result )
  {
    v5 = objc_msgSend(
           objc_alloc((Class)&OBJC_CLASS___NSString),
           "initWithBytes:length:encoding:",
           objc_msgSend(a3, "bytes"),
           result,
           4LL);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return objc_autorelease(v5);
  }
  return result;
}