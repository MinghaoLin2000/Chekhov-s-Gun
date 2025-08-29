-[NSString tsu_sha256HexHashString]
id __cdecl -[NSString tsu_sha256HexHashString](NSString *self, SEL a2)
{
  id v2; // x19
  char *v3; // x20
  __int64 v4; // x24
  char *v5; // x22
  NSString *v6; // x21
  _BYTE v8[32]; // [xsp+8h] [xbp-58h] BYREF
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(+[SFUCryptoUtils sha256HashFromString:](&OBJC_CLASS___SFUCryptoUtils, "sha256HashFromString:", self));
  objc_msgSend(v2, "getBytes:length:", v8, 32LL);
  v3 = (char *)malloc_type_malloc(0x41uLL, 0x769D2E00uLL);
  v4 = 0LL;
  v5 = v3;
  do
  {
    snprintf(v5, 3uLL, "%02x", (unsigned __int8)v8[v4++]);
    v5 += 2;
  }
  while ( v4 != 32 );
  v3[64] = 0;
  v6 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v3));
  free(v3);
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}