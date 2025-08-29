_uarpPlatformEndpointSolicitDynamicAsset
__int64 __fastcall uarpPlatformEndpointSolicitDynamicAsset(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v4; // x8

  if ( !a1 )
    return 30LL;
  if ( !a2 )
    return 30LL;
  if ( !a4 )
    return 30LL;
  v4 = *(_QWORD *)(a1 + 568);
  if ( !v4 )
    return 30LL;
  while ( *(_DWORD *)(v4 + 304) || *(_QWORD *)(v4 + 704) != a4 )
  {
    v4 = *(_QWORD *)(v4 + 712);
    if ( !v4 )
      return 30LL;
  }
  return uarpSolicitDynamicAsset(a1, a2, a3);
}