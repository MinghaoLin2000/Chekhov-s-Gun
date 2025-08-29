+[SFUCryptoUtils hashForPassphrase:withSalt:]
id __cdecl +[SFUCryptoUtils hashForPassphrase:withSalt:](id a1, SEL a2, id a3, id a4)
{
  NSMutableData *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( !a3 || !a4 )
    return 0LL;
  v6 = +[NSMutableData dataWithData:](&OBJC_CLASS___NSMutableData, "dataWithData:", a4);
  -[NSMutableData appendData:](v6, "appendData:", objc_msgSend(a3, "dataUsingEncoding:", 4LL));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return _objc_msgSend(a1, "sha256HashFromData:", v6);
}