_uarpPlatformEndpointAssetAcceptWithPayloadAndDecompressionWindows
__int64 __fastcall uarpPlatformEndpointAssetAcceptWithPayloadAndDecompressionWindows(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        unsigned int a9)
{
  __int64 result; // x0
  __int64 v15; // x8
  __int64 v16; // x9
  __int128 v17; // q1
  __int128 v18; // q0
  __int128 v19; // q1
  __int128 v20; // q3
  __int128 v21; // q0
  __int128 v22; // q1
  __int128 v23; // q3
  __int128 v24; // q0
  __int128 v25; // q1
  __int128 v26; // q3
  char v27; // w8
  int v28; // w8
  _QWORD *v29; // x22
  unsigned int v30; // w2
  __int64 vars8; // [xsp+38h] [xbp+8h]

  result = 30LL;
  if ( a1 && a2 && a3 && (!a6 || a7 && *(_DWORD *)(a2 + 8) <= a7) && (!a8 || a9 && *(_DWORD *)(a2 + 8) <= a9) )
  {
    v15 = *(_QWORD *)(a1 + 568);
    if ( v15 )
    {
      v16 = *(_QWORD *)(a1 + 568);
      while ( v16 != a3 || *(_DWORD *)(v16 + 304) )
      {
        v16 = *(_QWORD *)(v16 + 712);
        if ( !v16 )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      *(_QWORD *)(a3 + 712) = v15;
      *(_QWORD *)(a1 + 568) = a3;
    }
    if ( a4 )
      *(_QWORD *)(a3 + 704) = a4;
    *(_WORD *)(a3 + 72) = 0;
    if ( !a5 )
      return 30LL;
    v17 = a5[1];
    *(_OWORD *)(a3 + 80) = *a5;
    *(_OWORD *)(a3 + 96) = v17;
    v18 = a5[2];
    v19 = a5[3];
    v20 = a5[5];
    *(_OWORD *)(a3 + 144) = a5[4];
    *(_OWORD *)(a3 + 160) = v20;
    *(_OWORD *)(a3 + 112) = v18;
    *(_OWORD *)(a3 + 128) = v19;
    v21 = a5[6];
    v22 = a5[7];
    v23 = a5[9];
    *(_OWORD *)(a3 + 208) = a5[8];
    *(_OWORD *)(a3 + 224) = v23;
    *(_OWORD *)(a3 + 176) = v21;
    *(_OWORD *)(a3 + 192) = v22;
    v24 = a5[10];
    v25 = a5[11];
    v26 = a5[13];
    *(_OWORD *)(a3 + 272) = a5[12];
    *(_OWORD *)(a3 + 288) = v26;
    *(_OWORD *)(a3 + 240) = v24;
    *(_OWORD *)(a3 + 256) = v25;
    if ( a6 )
    {
      if ( !*(_BYTE *)(a3 + 652) )
        UARPLayer2ReturnBuffer(a1, *(void **)(a3 + 640));
      *(_QWORD *)(a3 + 640) = a6;
      *(_DWORD *)(a3 + 648) = a7;
      *(_BYTE *)(a3 + 652) = 1;
    }
    else if ( !*(_QWORD *)(a3 + 640) )
    {
      v29 = (_QWORD *)(a3 + 640);
      *(_BYTE *)(a3 + 652) = 0;
      v30 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a3 + 648) = v30;
      result = UARPLayer2RequestBuffer(a1, (__int64 *)(a3 + 640), v30);
      if ( (_DWORD)result )
        return result;
      if ( !*v29 )
        return 11LL;
    }
    if ( a8 )
    {
      if ( !*(_BYTE *)(a3 + 668) )
        UARPLayer2ReturnBuffer(a1, *(void **)(a3 + 656));
      *(_QWORD *)(a3 + 656) = a8;
      *(_DWORD *)(a3 + 664) = a9;
      v27 = 1;
    }
    else
    {
      v27 = 0;
    }
    *(_BYTE *)(a3 + 668) = v27;
    if ( (unsigned int)uarpVersionCompare((_DWORD *)(a3 + 52), (_DWORD *)(a3 + 12))
      || *(_DWORD *)(a3 + 68) != *(_DWORD *)(a3 + 8) )
    {
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return uarpPlatformAssetSuperBinaryPullHeader(a1, a3);
    }
    else if ( *(_DWORD *)(a3 + 688) == *(_DWORD *)(a3 + 32) )
    {
      v28 = *(_DWORD *)(a3 + 452);
      if ( v28 == -1 )
      {
        UARPLayer2AssetMetaDataComplete(a1, a3);
        return 0LL;
      }
      else if ( v28 == *(_DWORD *)(a3 + 456) )
      {
        if ( *(_DWORD *)(a3 + 512) == *(_DWORD *)(a3 + 492) )
        {
          if ( *(_DWORD *)(a3 + 508) || (result = uarpPlatformAssetPayloadPullData(a1, a3), !(_DWORD)result) )
          {
            if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
              __break(0xC471u);
            return uarpPlatformAssetRequestData(a1, a3, a3 + 312);
          }
        }
        else
        {
          if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
            __break(0xC471u);
          return uarpPlatformAssetPayloadPullMetaData(a1, a3);
        }
      }
      else
      {
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        return uarpPlatformAssetSuperBinaryPullProposedPayloadHeader(a1, a3);
      }
    }
    else
    {
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return uarpPlatformAssetSuperBinaryPullMetaData(a1, a3);
    }
  }
  return result;
}