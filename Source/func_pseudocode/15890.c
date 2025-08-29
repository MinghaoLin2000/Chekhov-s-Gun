_uarpPlatformPrepareAsset
__int64 __fastcall uarpPlatformPrepareAsset(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5, int a6)
{
  __int64 result; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  int v14; // w9
  __int64 v15; // [xsp+8h] [xbp-38h] BYREF

  result = 30LL;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a3 )
      {
        v15 = 0LL;
        result = UARPLayer2RequestBuffer(a1, &v15, 0x2D8u);
        if ( !(_DWORD)result )
        {
          v12 = v15;
          if ( v15 )
          {
            *(_QWORD *)(v15 + 704) = a3;
            *(_QWORD *)(v12 + 696) = a2;
            result = uarpPlatformEndpointAssetSetCallbacks(a1);
            if ( !(_DWORD)result )
            {
              v13 = v15;
              if ( a6 == 1 )
              {
                *(_DWORD *)(v15 + 304) = 1;
                v14 = *(_DWORD *)(a1 + 576);
                if ( v14 == 65534 )
                  v14 = 1;
                *(_DWORD *)(a1 + 576) = v14 + 1;
              }
              else
              {
                LOWORD(v14) = 0;
                *(_DWORD *)(v15 + 304) = 0;
              }
              *(_WORD *)(v13 + 44) = v14;
              *(_QWORD *)(v13 + 712) = *(_QWORD *)(a1 + 568);
              *(_QWORD *)(a1 + 568) = v13;
              result = 0LL;
              if ( a4 )
              {
                *(_WORD *)(v13 + 46) = 2;
                *(_DWORD *)(v13 + 48) = *a4;
              }
              else
              {
                *(_WORD *)(v13 + 46) = 1;
              }
            }
          }
          else
          {
            return 11LL;
          }
        }
      }
    }
  }
  return result;
}