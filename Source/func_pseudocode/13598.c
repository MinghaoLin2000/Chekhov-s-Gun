+[SFUCryptoUtils sha256HashFromStorage:]
id __cdecl +[SFUCryptoUtils sha256HashFromStorage:](id a1, SEL a2, id a3)
{
  int v4; // w20
  void *v5; // x19
  void *v6; // x0
  void *data; // [xsp+8h] [xbp-A8h] BYREF
  CC_SHA256_CTX c; // [xsp+10h] [xbp-A0h] BYREF
  unsigned __int8 md[32]; // [xsp+78h] [xbp-38h] BYREF

  v4 = CC_SHA256_Init(&c);
  v5 = objc_msgSend(a3, "bufferedInputStream");
  objc_msgSend(v5, "disableSystemCaching");
  data = 0LL;
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    v6 = objc_msgSend(v5, "readToOwnBuffer:size:", &data, 0xFFFFFFFFLL);
    if ( !v6 )
      break;
    if ( !CC_SHA256_Update(&c, data, (CC_LONG)v6) )
      return 0LL;
  }
  if ( CC_SHA256_Final(md, &c) )
    return +[NSData dataWithBytes:length:](&OBJC_CLASS___NSData, "dataWithBytes:length:", md, 32LL);
  else
    return 0LL;
}