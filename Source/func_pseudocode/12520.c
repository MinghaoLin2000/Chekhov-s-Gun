-[NSURL tsu_volumeRenameOpenFail]
bool __cdecl -[NSURL tsu_volumeRenameOpenFail](NSURL *self, SEL a2)
{
  int v3; // w8
  _BOOL4 v4; // w0
  _OWORD v6[2]; // [xsp+0h] [xbp-8F0h] BYREF
  int v7; // [xsp+20h] [xbp-8D0h]
  __int128 v8; // [xsp+30h] [xbp-8C0h] BYREF
  __int64 v9; // [xsp+40h] [xbp-8B0h]
  statfs v10; // [xsp+50h] [xbp-8A0h] BYREF

  if ( !-[NSURL isFileURL](self, "isFileURL") )
    goto LABEL_4;
  memset(&v10, 0, 512);
  v3 = tsu_reachable_statfs(self, &v10);
  LOBYTE(v4) = 0;
  v8 = xmmword_10018F160;
  v9 = 0LL;
  v7 = 0;
  memset(v6, 0, sizeof(v6));
  if ( !v3 )
  {
    if ( getattrlist(v10.f_mntonname, &v8, v6, 0x24uLL, 0x21u) )
    {
LABEL_4:
      LOBYTE(v4) = 0;
      return v4;
    }
    return (BYTE10(v6[0]) >> 4) & 1;
  }
  return v4;
}