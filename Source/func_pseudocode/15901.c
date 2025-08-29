_uarpPlatformAssetDataRequest
__int64 __fastcall uarpPlatformAssetDataRequest(__int64 a1, __int64 a2, int a3, int a4, int a5, void *__dst)
{
  __int64 v7; // x2

  v7 = *(_QWORD *)(a1 + 568);
  if ( !v7 )
    return 17LL;
  while ( *(_DWORD *)(v7 + 304) != 1 || *(_QWORD *)(v7 + 696) != a2 || *(unsigned __int16 *)(v7 + 44) != a3 )
  {
    v7 = *(_QWORD *)(v7 + 712);
    if ( !v7 )
      return 17LL;
  }
  return uarpPlatformEndpointAssetGetBytesAtOffset(a1, a2, v7, __dst);
}