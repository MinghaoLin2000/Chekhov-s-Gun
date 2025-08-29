-[NSURL tsu_isOnForeignVolume]
bool __cdecl -[NSURL tsu_isOnForeignVolume](NSURL *self, SEL a2)
{
  _BOOL4 v3; // w0
  bool v4; // zf
  statfs v6; // [xsp+0h] [xbp-890h] BYREF

  v3 = -[NSURL isFileURL](self, "isFileURL");
  if ( v3 )
  {
    memset(&v6, 0, 512);
    LOBYTE(v3) = !(unsigned int)tsu_reachable_statfs(self, &v6)
              && (*(unsigned __int16 *)v6.f_fstypename == 26216 ? (v4 = v6.f_fstypename[2] == 115) : (v4 = 0), !v4)
              && (*(_DWORD *)v6.f_fstypename ^ 0x73667061 | (unsigned __int8)v6.f_fstypename[4]) != 0;
  }
  return v3;
}