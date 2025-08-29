+[TSUSystemInfo macAddress]
id __cdecl +[TSUSystemInfo macAddress](id a1, SEL a2)
{
  int v2; // w0
  int v3; // w19
  unsigned __int8 *v4; // x23
  unsigned __int8 *v5; // x24
  char *v6; // x0
  NSString *v7; // x22
  __int64 v8; // x8
  __int64 v9; // x8
  unsigned int v12; // [xsp+3Ch] [xbp-1024h] BYREF
  __int64 v13; // [xsp+40h] [xbp-1020h] BYREF
  __int64 v14; // [xsp+48h] [xbp-1018h] BYREF
  unsigned int v15; // [xsp+50h] [xbp-1010h] BYREF
  int v16; // [xsp+54h] [xbp-100Ch] BYREF
  _BYTE *v17; // [xsp+58h] [xbp-1008h]
  _BYTE v18[4000]; // [xsp+60h] [xbp-1000h] BYREF

  v2 = socket(2, 2, 0);
  if ( v2 < 0 )
    return 0LL;
  v3 = v2;
  v16 = 4000;
  v17 = v18;
  if ( ioctl(v2, 0xC00C6924uLL, &v16) < 0 || v16 < 1 )
  {
    v7 = 0LL;
  }
  else
  {
    v4 = &v18[v16];
    v5 = v18;
    do
    {
      if ( v5[17] == 18
        && ((v15 = 0,
             v13 = 0LL,
             v14 = 0LL,
             v12 = 0,
             v6 = ether_ntoa((const ether_addr *)&v5[v5[21] + 24]),
             sscanf(v6, "%x:%x:%x:%x:%x:%x", &v15, (char *)&v14 + 4, &v14, (char *)&v13 + 4, &v13, &v12),
             v15)
         || v14
         || HIDWORD(v13)
         || (_DWORD)v13
         || v12) )
      {
        v7 = +[NSString stringWithFormat:](
               &OBJC_CLASS___NSString,
               "stringWithFormat:",
               CFSTR("%02X:%02X:%02X:%02X:%02X:%02X"),
               v15,
               HIDWORD(v14),
               (unsigned int)v14,
               HIDWORD(v13),
               (unsigned int)v13,
               v12);
      }
      else
      {
        v7 = 0LL;
      }
      v8 = v5[16];
      if ( (unsigned int)v8 <= 0x10 )
        v9 = 32LL;
      else
        v9 = v8 + 16;
      v5 += v9;
    }
    while ( v5 < v4 && v7 == 0LL );
  }
  close(v3);
  return v7;
}