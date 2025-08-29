__Z17liteNotifyRunningi
__int64 __fastcall liteNotifyRunning(int a1)
{
  int v2; // w0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = dword_1000C3D0C;
  if ( dword_1000C3D0C < 0 )
  {
    notify_register_check("com.apple.printd.running", &dword_1000C3D0C);
    v2 = dword_1000C3D0C;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return notify_set_state(v2, a1 != 0);
}