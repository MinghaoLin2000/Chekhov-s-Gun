_uarpPlatformEndpointRemoveAssetPayloadWindow
__int64 __fastcall uarpPlatformEndpointRemoveAssetPayloadWindow(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 result; // x0

  result = 30LL;
  if ( a3 )
  {
    if ( a4 )
    {
      result = 0LL;
      *a3 = *(_QWORD *)(a2 + 640);
      *(_QWORD *)(a2 + 640) = 0LL;
      *a4 = *(_DWORD *)(a2 + 648);
      *(_DWORD *)(a2 + 648) = 0;
    }
  }
  return result;
}