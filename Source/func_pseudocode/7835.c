_$s16EyeCandyGraphics9CGSWindowV13getScreenRect10connectionSo6CGRectVAA13CGSConnectionV_tF
__int64 __fastcall CGSWindow.getScreenRect(connection:)(__int64 a1, __int64 a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_100019BC0(a1, a2, &CGSGetScreenRectForWindow);
}