_uarpPlatformReOfferFirmware
__int64 __fastcall uarpPlatformReOfferFirmware(__int64 result, __int64 a2)
{
  __int64 v2; // x21
  int v4; // w20

  v2 = *(_QWORD *)(result + 568);
  if ( v2 )
  {
    v4 = result;
    do
    {
      if ( *(_DWORD *)(v2 + 304) == 1 && *(_QWORD *)(v2 + 696) == a2 && (*(_WORD *)(v2 + 46) & 2) == 0 )
        result = uarpPlatformEndpointOfferAsset(v4, a2);
      v2 = *(_QWORD *)(v2 + 712);
    }
    while ( v2 );
  }
  return result;
}