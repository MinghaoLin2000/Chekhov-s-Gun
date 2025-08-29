_uarpPlatformAssetApproveOfferVersion
__int64 __fastcall uarpPlatformAssetApproveOfferVersion(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  int v4; // w0
  int v6; // w0
  unsigned int v7; // w8

  if ( *(_WORD *)(a2 + 46) != 1 || !*(_BYTE *)(a1 + 32) )
    return 0LL;
  v3 = a2 + 52;
  v4 = uarpVersionCompare(a1 + 138, a2 + 52);
  if ( v4 == 2 )
    return 59LL;
  if ( !v4 )
    return 60LL;
  v6 = uarpVersionCompare(a1 + 154, v3);
  if ( v6 )
    v7 = 0;
  else
    v7 = 62;
  if ( v6 == 2 )
    return 61LL;
  else
    return v7;
}