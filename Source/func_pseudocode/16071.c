_uarpPlatformEndpointAssetSetBytesAtOffset
__int64 __fastcall uarpPlatformEndpointAssetSetBytesAtOffset(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  if ( a1 && a3 && a4 && (_DWORD)a5 )
    return UARPLayer2AssetSetBytesAtOffset2(a1, a2, a3, a4, a5, a6);
  else
    return 30LL;
}