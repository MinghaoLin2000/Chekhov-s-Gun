_$s16EyeCandyGraphics9CGSWindowV23getSpecifiedWindowShape_10connectionSo11CGRegionRefaSgSo0dH9SpecifierV_AA13CGSConnectionVtF
__int64 __fastcall CGSWindow.getSpecifiedWindowShape(_:connection:)(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // [xsp+0h] [xbp-10h] BYREF

  v4 = 0LL;
  if ( (unsigned int)CGSCopySpecifiedWindowShape(a2, a3, a1, &v4) )
    return 0LL;
  else
    return v4;
}