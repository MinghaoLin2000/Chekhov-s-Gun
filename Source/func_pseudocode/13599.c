+[SFUCryptoUtils sha256HashFromString:]
id __cdecl +[SFUCryptoUtils sha256HashFromString:](id a1, SEL a2, id a3)
{
  void *v4; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_msgSend(a3, "dataUsingEncoding:", 4LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return _objc_msgSend(a1, "sha256HashFromData:", v4);
}