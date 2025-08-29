_uarpPlatformEndpointAssetSetCallbacks
__n128 __fastcall uarpPlatformEndpointAssetSetCallbacks(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v3; // q1
  __int128 v4; // q0
  __int128 v5; // q1
  __int128 v6; // q3
  __int128 v7; // q0
  __int128 v8; // q1
  __int128 v9; // q3
  __n128 result; // q0
  __int128 v11; // q1
  __int128 v12; // q3

  if ( a1 && a2 )
  {
    if ( a3 )
    {
      v3 = *(_OWORD *)(a3 + 16);
      *(_OWORD *)(a2 + 80) = *(_OWORD *)a3;
      *(_OWORD *)(a2 + 96) = v3;
      v4 = *(_OWORD *)(a3 + 32);
      v5 = *(_OWORD *)(a3 + 48);
      v6 = *(_OWORD *)(a3 + 80);
      *(_OWORD *)(a2 + 144) = *(_OWORD *)(a3 + 64);
      *(_OWORD *)(a2 + 160) = v6;
      *(_OWORD *)(a2 + 112) = v4;
      *(_OWORD *)(a2 + 128) = v5;
      v7 = *(_OWORD *)(a3 + 96);
      v8 = *(_OWORD *)(a3 + 112);
      v9 = *(_OWORD *)(a3 + 144);
      *(_OWORD *)(a2 + 208) = *(_OWORD *)(a3 + 128);
      *(_OWORD *)(a2 + 224) = v9;
      *(_OWORD *)(a2 + 176) = v7;
      *(_OWORD *)(a2 + 192) = v8;
      result = *(__n128 *)(a3 + 160);
      v11 = *(_OWORD *)(a3 + 176);
      v12 = *(_OWORD *)(a3 + 208);
      *(_OWORD *)(a2 + 272) = *(_OWORD *)(a3 + 192);
      *(_OWORD *)(a2 + 288) = v12;
      *(__n128 *)(a2 + 240) = result;
      *(_OWORD *)(a2 + 256) = v11;
    }
  }
  return result;
}