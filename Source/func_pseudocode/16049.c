_uarpPlatformEndpointPayloadRequestData
__int64 __fastcall uarpPlatformEndpointPayloadRequestData(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  unsigned int v3; // w8
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v2 = 30LL;
  if ( !a1 || !a2 )
    return v2;
  v3 = *(_DWORD *)(a2 + 500);
  if ( v3 )
    v3 -= *(_DWORD *)(a2 + 508);
  if ( v3 >= *(_DWORD *)(a2 + 648) )
    v3 = *(_DWORD *)(a2 + 648);
  if ( !v3 )
  {
    UARPLayer2PayloadDataComplete2(a1, (_QWORD *)a2);
    return 0LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return uarpPlatformAssetPayloadPullData(a1, a2);
}