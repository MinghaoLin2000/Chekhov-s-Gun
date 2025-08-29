_uarpPlatformEndpointQueryStagedFirmwareVersion
__int64 __fastcall uarpPlatformEndpointQueryStagedFirmwareVersion(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  int v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = 0;
  if ( a2 )
    v4 = *(_DWORD *)(a2 + 48);
  return UARPLayer2StagedFirmwareVersion2(a1, (__int64)&v4, a3);
}