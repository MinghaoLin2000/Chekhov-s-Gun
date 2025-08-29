_uarpPlatformEndpointProvideAssetPayloadWindow
__int64 __fastcall uarpPlatformEndpointProvideAssetPayloadWindow(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // x0
  void *v9; // x1

  result = 30LL;
  if ( a3 && a4 )
  {
    v9 = *(void **)(a2 + 640);
    if ( v9 )
    {
      if ( !*(_BYTE *)(a2 + 652) )
        UARPLayer2ReturnBuffer(a1, v9);
    }
    result = 0LL;
    *(_QWORD *)(a2 + 640) = a3;
    *(_DWORD *)(a2 + 648) = a4;
    *(_BYTE *)(a2 + 652) = 1;
  }
  return result;
}