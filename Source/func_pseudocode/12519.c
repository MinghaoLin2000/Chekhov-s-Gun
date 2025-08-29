-[NSURL tsu_volumeSupportsCloning]
bool __cdecl -[NSURL tsu_volumeSupportsCloning](NSURL *self, SEL a2)
{
  _BOOL4 v3; // w0
  int v4; // w8
  _OWORD v6[2]; // [xsp+0h] [xbp-8F0h] BYREF
  int v7; // [xsp+20h] [xbp-8D0h]
  __int128 v8; // [xsp+30h] [xbp-8C0h] BYREF
  __int64 v9; // [xsp+40h] [xbp-8B0h]
  statfs v10; // [xsp+50h] [xbp-8A0h] BYREF

  v8 = xmmword_10018F160;
  v9 = 0LL;
  v3 = -[NSURL isFileURL](self, "isFileURL");
  if ( v3 )
  {
    memset(&v10, 0, 512);
    v7 = 0;
    memset(v6, 0, sizeof(v6));
    v4 = tsu_reachable_statfs(self, &v10);
    LOBYTE(v3) = 0;
    if ( !v4 )
    {
      if ( getattrlist(v10.f_mntonname, &v8, v6, 0x24uLL, 0x21u) )
        LOBYTE(v3) = 0;
      else
        LOBYTE(v3) = BYTE10(v6[0]) & 1;
    }
  }
  return v3;
}