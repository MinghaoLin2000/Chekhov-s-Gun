_$sSl16EyeCandyGraphicsAA9CGSWindowV7ElementRtzrlE5reset10connectionyAA13CGSConnectionV_tF
void __fastcall Collection<>.reset(connection:)(__int64 a1, __int64 a2, __int64 a3)
{
  void *v6; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( (sub_10001CC50(a2, a3) & 1) == 0 )
  {
    v6 = (void *)Collection<>.cfarray.getter(a2, a3);
    CGSResetWindows(a1, v6);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v6);
  }
}