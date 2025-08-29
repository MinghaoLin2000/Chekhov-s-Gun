_uarpPlatformAssetIsKnown
__int64 __fastcall uarpPlatformAssetIsKnown(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x8

  v3 = *(_QWORD *)(a1 + 568);
  if ( !v3 )
    return 0LL;
  while ( v3 != a3 )
  {
    v3 = *(_QWORD *)(v3 + 712);
    if ( !v3 )
      return 0LL;
  }
  return 1LL;
}