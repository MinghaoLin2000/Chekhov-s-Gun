_$s16EyeCandyGraphics9CGSWindowV3psnSo16CPSProcessSerNumVSgvg
__int64 __fastcall CGSWindow.psn.getter(__int64 a1)
{
  __int64 v2; // [xsp+0h] [xbp-10h] BYREF

  v2 = 0LL;
  if ( (unsigned int)CPSGetWindowOwner(a1, &v2) )
    return 0LL;
  else
    return v2;
}