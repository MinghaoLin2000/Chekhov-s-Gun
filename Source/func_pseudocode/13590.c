+[SFUCryptoUtils saltForSageFiles]
id __cdecl +[SFUCryptoUtils saltForSageFiles](id a1, SEL a2)
{
  void *v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v2 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSData), "initWithBytes:length:", "someSalt", 8LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autorelease(v2);
}