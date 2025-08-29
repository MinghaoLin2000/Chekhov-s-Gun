_uarpPlatformEndpointPayloadRequestAllHeadersAndMetaData
__int64 __fastcall uarpPlatformEndpointPayloadRequestAllHeadersAndMetaData(__int64 a1, __int64 a2)
{
  __int64 vars8; // [xsp+8h] [xbp+8h]

  *(_BYTE *)(a2 + 460) = 1;
  if ( *(int *)(a2 + 448) < 1 )
  {
    if ( *(_DWORD *)(a2 + 32) )
    {
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return uarpPlatformAssetPullAllMetaData(a1, a2);
    }
    else
    {
      UARPLayer2AssetAllHeadersAndMetaDataComplete(a1, *(_QWORD *)(a2 + 696), a2);
      return 0LL;
    }
  }
  else
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return uarpPlatformAssetPullAllPayloadHeaders(a1, a2);
  }
}