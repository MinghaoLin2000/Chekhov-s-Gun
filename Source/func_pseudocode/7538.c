_$s16EyeCandyGraphics13CGSConnectionV3psnSo16CPSProcessSerNumVSgvg
__int64 __fastcall CGSConnection.psn.getter(__int64 a1)
{
  __int64 v2; // [xsp+0h] [xbp-10h] BYREF

  v2 = 0LL;
  if ( (unsigned int)CGSGetConnectionPSN(a1, &v2) )
    return 0LL;
  else
    return v2;
}