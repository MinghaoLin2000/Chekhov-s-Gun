-[NSData tsu_getMD5Hash:]
void __cdecl -[NSData tsu_getMD5Hash:](NSData *self, SEL a2, char *a3)
{
  NSUInteger v5; // x20
  char *v6; // x0
  char *v7; // x21
  __int64 v8; // x22
  CC_MD5_CTX v9; // [xsp+0h] [xbp-90h] BYREF

  memset(&v9, 0, sizeof(v9));
  CC_MD5_Init(&v9);
  v5 = -[NSData length](self, "length");
  v6 = -[NSData bytes](objc_retainAutorelease(self), "bytes");
  if ( v5 )
  {
    v7 = v6;
    do
    {
      if ( v5 >= 0xFFFFFFFF )
        v8 = 0xFFFFFFFFLL;
      else
        v8 = v5;
      CC_MD5_Update(&v9, v7, v8);
      v7 += v8;
      v5 -= v8;
    }
    while ( v5 );
  }
  CC_MD5_Final((unsigned __int8 *)a3, &v9);
}