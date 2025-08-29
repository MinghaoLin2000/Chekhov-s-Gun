_uarpPlatformCleanupAssetsForRemoteEndpoint
__int64 __fastcall uarpPlatformCleanupAssetsForRemoteEndpoint(__int64 result, __int64 a2, int a3)
{
  __int64 v3; // x21
  __int64 v4; // x23
  __int64 v7; // x22
  __int64 v8; // x8
  bool v9; // zf

  if ( *(_BYTE *)(result + 580) != 1 )
  {
    v3 = result;
    v4 = *(_QWORD *)(result + 568);
    for ( *(_QWORD *)(result + 568) = 0LL; v4; *(_QWORD *)(v3 + 568) = v7 )
    {
      while ( 1 )
      {
        v7 = v4;
        v4 = *(_QWORD *)(v4 + 712);
        *(_QWORD *)(v7 + 712) = 0LL;
        v8 = *(_QWORD *)(v7 + 696);
        v9 = v8 == a2 || a2 == 0;
        if ( !v9 && v8 != 0 )
          break;
        if ( a3 == 1 )
        {
          if ( (*(_WORD *)(v7 + 46) & 1) != 0 )
          {
            *(_QWORD *)(v7 + 696) = 0LL;
            result = UARPLayer2AssetOrphaned(v3, v7);
          }
          else
          {
            *(_BYTE *)(v7 + 72) = 1;
          }
        }
        if ( *(_BYTE *)(v7 + 72) != 1 )
          break;
        UARPLayer2AssetReleased2(v3, a2, (_QWORD *)v7);
        *(_QWORD *)(v7 + 704) = 0LL;
        result = uarpPlatformAssetCleanup(v3);
        if ( !v4 )
          return result;
      }
      *(_QWORD *)(v7 + 712) = *(_QWORD *)(v3 + 568);
    }
  }
  return result;
}