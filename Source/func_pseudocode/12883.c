-[NSUUID tsu_compare:]
signed __int64 __cdecl -[NSUUID tsu_compare:](NSUUID *self, SEL a2, id a3)
{
  id v4; // x20
  unsigned __int64 v5; // x8
  unsigned __int64 v6; // x9
  int v7; // w8
  bool v8; // zf
  bool v9; // nf
  signed __int64 v10; // x8
  unsigned __int64 v12; // [xsp+8h] [xbp-38h] BYREF
  unsigned __int64 v13; // [xsp+10h] [xbp-30h]
  unsigned __int64 v14; // [xsp+18h] [xbp-28h] BYREF
  unsigned __int64 v15; // [xsp+20h] [xbp-20h]

  v14 = 0LL;
  v15 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v4 = objc_retain(a3);
  -[NSUUID getUUIDBytes:](self, "getUUIDBytes:", &v14);
  objc_msgSend(v4, "getUUIDBytes:", &v12);
  objc_release(v4);
  v5 = bswap64(v14);
  v6 = bswap64(v12);
  if ( v5 == v6 && (v5 = bswap64(v15), v6 = bswap64(v13), v5 == v6) )
  {
    v7 = 0;
  }
  else if ( v5 < v6 )
  {
    v7 = -1;
  }
  else
  {
    v7 = 1;
  }
  v8 = v7 == 0;
  v9 = v7 < 0;
  v10 = -1LL;
  if ( !v9 )
    v10 = 1LL;
  if ( v8 )
    return 0LL;
  else
    return v10;
}