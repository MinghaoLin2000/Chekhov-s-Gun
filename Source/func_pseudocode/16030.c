_uarpPlatformEndpointAssetIsAcceptable
__int64 __fastcall uarpPlatformEndpointAssetIsAcceptable(_QWORD *a1, __int64 a2, _BYTE *a3, __int16 *a4)
{
  __int64 ActiveFirmwareVersion; // x21
  int v9; // w0
  __int16 v10; // w8
  __int16 v11; // w9
  _QWORD v13[2]; // [xsp+0h] [xbp-50h] BYREF
  _QWORD v14[2]; // [xsp+10h] [xbp-40h] BYREF

  ActiveFirmwareVersion = 30LL;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a3 )
      {
        if ( a4 )
        {
          *a3 = 1;
          *a4 = 0;
          v14[0] = 0LL;
          v14[1] = 0LL;
          ActiveFirmwareVersion = uarpPlatformEndpointQueryActiveFirmwareVersion(a1, a2, v14);
          if ( !(_DWORD)ActiveFirmwareVersion )
          {
            v9 = uarpVersionCompare(v14, (_DWORD *)(a2 + 52));
            if ( v9 == 1 )
            {
              v13[0] = 0LL;
              v13[1] = 0LL;
              ActiveFirmwareVersion = uarpPlatformEndpointQueryStagedFirmwareVersion(a1, a2, v13);
              if ( (_DWORD)ActiveFirmwareVersion )
                return ActiveFirmwareVersion;
              v9 = uarpVersionCompare(v13, (_DWORD *)(a2 + 52));
              if ( v9 == 1 )
                return ActiveFirmwareVersion;
              *a3 = 0;
              v10 = 1280;
              v11 = 768;
            }
            else
            {
              ActiveFirmwareVersion = 0LL;
              *a3 = 0;
              v10 = 1536;
              v11 = 1024;
            }
            if ( !v9 )
              v10 = v11;
            *a4 = v10;
          }
        }
      }
    }
  }
  return ActiveFirmwareVersion;
}