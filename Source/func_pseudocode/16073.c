_uarpPlatformEndpointRescindAsset
__int64 __fastcall uarpPlatformEndpointRescindAsset(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x8

  if ( !a1 )
    return 30LL;
  if ( !a2 )
    return 30LL;
  if ( !a3 )
    return 30LL;
  v3 = *(_QWORD *)(a1 + 568);
  if ( !v3 )
    return 30LL;
  while ( *(_DWORD *)(v3 + 304) != 1 || *(_QWORD *)(v3 + 704) != a3 )
  {
    v3 = *(_QWORD *)(v3 + 712);
    if ( !v3 )
      return 30LL;
  }
  return uarpAssetRescind(a1, a2, *(unsigned __int16 *)(v3 + 44));
}