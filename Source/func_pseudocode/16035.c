_uarpPlatformEndpointAssetDeny
__int64 __fastcall uarpPlatformEndpointAssetDeny(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, _OWORD *a6)
{
  __int64 v6; // x8
  __int128 v8; // q1
  __int128 v9; // q0
  __int128 v10; // q1
  __int128 v11; // q3
  __int128 v12; // q0
  __int128 v13; // q1
  __int128 v14; // q3
  __int128 v15; // q0
  __int128 v16; // q1
  __int128 v17; // q3

  v6 = 30LL;
  if ( a1 && a2 && a3 )
  {
    if ( a5 )
      *(_QWORD *)(a3 + 704) = a5;
    if ( a6 )
    {
      v8 = a6[1];
      *(_OWORD *)(a3 + 80) = *a6;
      *(_OWORD *)(a3 + 96) = v8;
      v9 = a6[2];
      v10 = a6[3];
      v11 = a6[5];
      *(_OWORD *)(a3 + 144) = a6[4];
      *(_OWORD *)(a3 + 160) = v11;
      *(_OWORD *)(a3 + 112) = v9;
      *(_OWORD *)(a3 + 128) = v10;
      v12 = a6[6];
      v13 = a6[7];
      v14 = a6[9];
      *(_OWORD *)(a3 + 208) = a6[8];
      *(_OWORD *)(a3 + 224) = v14;
      *(_OWORD *)(a3 + 176) = v12;
      *(_OWORD *)(a3 + 192) = v13;
      v15 = a6[10];
      v16 = a6[11];
      v17 = a6[13];
      *(_OWORD *)(a3 + 272) = a6[12];
      *(_OWORD *)(a3 + 288) = v17;
      *(_OWORD *)(a3 + 240) = v15;
      *(_OWORD *)(a3 + 256) = v16;
      v6 = uarpAssetProcessingComplete(a1, a2, a3, a4 | 2u);
      if ( !(_DWORD)v6 )
        *(_BYTE *)(a3 + 72) = 1;
    }
    else
    {
      return 30LL;
    }
  }
  return v6;
}