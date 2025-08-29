_uarpPlatformEndpointAssetSetPayloadIndex2
__int64 __fastcall uarpPlatformEndpointAssetSetPayloadIndex2(void *a1, __int64 a2, int a3)
{
  __int64 result; // x0
  _OWORD *v6; // x21
  __int128 *v7; // x22
  int v8; // w8
  __int128 v9; // q0
  __int128 v10; // q2
  __int128 v11; // q0
  __int128 v12; // q1
  __int128 v13; // q3
  __int128 v14; // q0
  __int128 v15; // q1
  __int128 v16; // q2
  unsigned int *i; // x23
  __int64 v18; // x1
  __int64 vars8; // [xsp+38h] [xbp+8h]

  result = 30LL;
  if ( a1 && a2 )
  {
    if ( *(_DWORD *)(a2 + 448) <= a3 )
    {
      return 44LL;
    }
    else
    {
      *(_DWORD *)(a2 + 456) = a3;
      v6 = (_OWORD *)(a2 + 464);
      *(_QWORD *)(a2 + 508) = 0LL;
      if ( *(_BYTE *)(a2 + 460) == 1 )
      {
        v7 = *(__int128 **)(a2 + 632);
        if ( v7 )
        {
          while ( 1 )
          {
            v8 = *((_DWORD *)v7 + 31);
            if ( v8 == *(_DWORD *)(a2 + 456) )
            {
              *(_DWORD *)(a2 + 452) = v8;
              v9 = *v7;
              v10 = v7[2];
              *(_OWORD *)(a2 + 480) = v7[1];
              *(_OWORD *)(a2 + 496) = v10;
              *v6 = v9;
              v11 = v7[3];
              v12 = v7[4];
              v13 = v7[6];
              *(_OWORD *)(a2 + 544) = v7[5];
              *(_OWORD *)(a2 + 560) = v13;
              *(_OWORD *)(a2 + 512) = v11;
              *(_OWORD *)(a2 + 528) = v12;
              v14 = v7[7];
              v15 = v7[8];
              v16 = v7[9];
              *(_QWORD *)(a2 + 624) = *((_QWORD *)v7 + 20);
              *(_OWORD *)(a2 + 592) = v15;
              *(_OWORD *)(a2 + 608) = v16;
              *(_OWORD *)(a2 + 576) = v14;
              for ( i = (unsigned int *)*((_QWORD *)v7 + 21); i; i = (unsigned int *)*((_QWORD *)i + 2) )
                uarpProcessPayloadTLVInternal(a1, a2, a2 + 464, *i, i[1], *((unsigned __int16 **)i + 1));
              v18 = *((unsigned int *)v7 + 19);
              if ( (_DWORD)v18 )
              {
                UARPLayer2HashFinal(
                  (__int64)a1,
                  v18,
                  *((_QWORD *)v7 + 10),
                  *((_QWORD *)v7 + 12),
                  *((unsigned int *)v7 + 26));
                if ( memcmp(*((const void **)v7 + 12), *((const void **)v7 + 14), *((unsigned int *)v7 + 30)) )
                  return 54LL;
              }
            }
            v7 = (__int128 *)*((_QWORD *)v7 + 22);
            if ( !v7 )
              goto LABEL_12;
          }
        }
        else
        {
LABEL_12:
          if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
            __break(0xC471u);
          return uarpPlatformEndpointPayloadRequestData(a1, a2);
        }
      }
      else
      {
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        return uarpPlatformAssetSuperBinaryPullProposedPayloadHeader((__int64)a1, a2);
      }
    }
  }
  return result;
}