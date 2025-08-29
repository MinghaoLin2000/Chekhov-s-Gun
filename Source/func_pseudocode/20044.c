-[PKNANEndpoint identifier]
NSString *__cdecl -[PKNANEndpoint identifier](PKNANEndpoint *self, SEL a2)
{
  WiFiAwareDiscoveryResult *v3; // x21
  void *v4; // x22
  void *v5; // x19
  id v6; // x22
  char *v7; // x21
  __int64 v8; // x0
  char *v9; // x10
  __int64 *v10; // x23
  unsigned __int64 v11; // x13
  WiFiAwareDiscoveryResult *v13; // x21
  NSString *v14; // x20
  _OWORD v16[8]; // [xsp+20h] [xbp-C0h] BYREF
  __int64 v17; // [xsp+A0h] [xbp-40h] BYREF
  __int64 vars8; // [xsp+E8h] [xbp+8h]

  memset(v16, 0, sizeof(v16));
  v3 = objc_retainAutoreleasedReturnValue(-[PKNANEndpoint discoveryResult](self, "discoveryResult"));
  v4 = objc_retainAutoreleasedReturnValue(-[WiFiAwareDiscoveryResult publisherAddress](v3, "publisherAddress"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "data"));
  objc_release(v4);
  objc_release(v3);
  if ( v5
    && (v6 = objc_retainAutorelease(v5),
        v7 = (char *)objc_msgSend(v6, "bytes"),
        v8 = (__int64)objc_msgSend(v6, "length"),
        v8 >= 1) )
  {
    v9 = v7 + 1;
    v10 = (__int64 *)v16;
    do
    {
      v11 = (unsigned __int8)*(v9 - 1);
      *(_BYTE *)v10 = a01234567789abc[v11 >> 4];
      *((_BYTE *)v10 + 1) = a01234567789abc[v11 & 0xF];
      *((_BYTE *)v10 + 2) = 58;
      v10 = (__int64 *)((char *)v10 + 3);
      if ( v10 >= &v17 )
        break;
    }
    while ( v9++ < &v7[v8] );
  }
  else
  {
    v10 = (__int64 *)v16;
  }
  v13 = objc_retainAutoreleasedReturnValue(-[PKNANEndpoint discoveryResult](self, "discoveryResult"));
  v14 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("peer[%.*s]-pubid[%d]"),
            (unsigned int)v10 - (unsigned int)v16,
            v16,
            (unsigned int)-[WiFiAwareDiscoveryResult publishID](v13, "publishID")));
  objc_release(v13);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v14);
}