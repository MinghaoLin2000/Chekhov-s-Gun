_uarpPlatformEndpointSuperBinaryMerge
double __fastcall uarpPlatformEndpointSuperBinaryMerge(__int64 a1, __int128 *a2, __int64 a3)
{
  __int128 v3; // q0
  __int128 v4; // q1
  __int128 v5; // q0
  __int128 v6; // q1
  __int128 v7; // q2
  __int128 v8; // q0
  __int128 v9; // q1
  __int128 v10; // q2
  __int128 v11; // q0
  __int128 v12; // q2
  __int128 v13; // q0
  __int128 v14; // q1
  __int128 v15; // q3
  __int128 v16; // q0
  __int128 v17; // q1
  __int128 v18; // q2
  double result; // d0

  if ( a1 && a2 )
  {
    if ( a3 )
    {
      v3 = *a2;
      v4 = a2[1];
      *(_OWORD *)(a3 + 28) = *(__int128 *)((char *)a2 + 28);
      *(_OWORD *)a3 = v3;
      *(_OWORD *)(a3 + 16) = v4;
      *((_BYTE *)a2 + 72) = 1;
      *(_BYTE *)(a3 + 72) = 0;
      *(_BYTE *)(a3 + 73) = *((_BYTE *)a2 + 73);
      *((_BYTE *)a2 + 392) = 0;
      v6 = *(__int128 *)((char *)a2 + 360);
      v5 = *(__int128 *)((char *)a2 + 376);
      v7 = *(__int128 *)((char *)a2 + 344);
      *(_OWORD *)(a3 + 328) = *(__int128 *)((char *)a2 + 328);
      *(_OWORD *)(a3 + 344) = v7;
      *(_OWORD *)(a3 + 360) = v6;
      *(_OWORD *)(a3 + 376) = v5;
      *(_OWORD *)(a3 + 312) = *(__int128 *)((char *)a2 + 312);
      v8 = *(__int128 *)((char *)a2 + 392);
      v9 = *(__int128 *)((char *)a2 + 408);
      v10 = *(__int128 *)((char *)a2 + 424);
      *(_QWORD *)(a3 + 440) = *((_QWORD *)a2 + 55);
      *(_OWORD *)(a3 + 408) = v9;
      *(_OWORD *)(a3 + 424) = v10;
      *(_OWORD *)(a3 + 392) = v8;
      *(_DWORD *)(a3 + 452) = *((_DWORD *)a2 + 113);
      *(_DWORD *)(a3 + 456) = *((_DWORD *)a2 + 114);
      v11 = a2[29];
      v12 = a2[31];
      *(_OWORD *)(a3 + 480) = a2[30];
      *(_OWORD *)(a3 + 496) = v12;
      *(_OWORD *)(a3 + 464) = v11;
      v13 = a2[32];
      v14 = a2[33];
      v15 = a2[35];
      *(_OWORD *)(a3 + 544) = a2[34];
      *(_OWORD *)(a3 + 560) = v15;
      *(_OWORD *)(a3 + 512) = v13;
      *(_OWORD *)(a3 + 528) = v14;
      v16 = a2[36];
      v17 = a2[37];
      v18 = a2[38];
      *(_QWORD *)(a3 + 624) = *((_QWORD *)a2 + 78);
      *(_OWORD *)(a3 + 592) = v17;
      *(_OWORD *)(a3 + 608) = v18;
      *(_OWORD *)(a3 + 576) = v16;
      *((_QWORD *)a2 + 78) = 0LL;
      result = 0.0;
      a2[37] = 0u;
      a2[38] = 0u;
      a2[35] = 0u;
      a2[36] = 0u;
      a2[33] = 0u;
      a2[34] = 0u;
      a2[31] = 0u;
      a2[32] = 0u;
      a2[29] = 0u;
      a2[30] = 0u;
      *(_QWORD *)(a3 + 640) = *((_QWORD *)a2 + 80);
      *((_QWORD *)a2 + 80) = 0LL;
      *(_BYTE *)(a3 + 652) = *((_BYTE *)a2 + 652);
      *(_DWORD *)(a3 + 648) = *((_DWORD *)a2 + 162);
      *((_DWORD *)a2 + 162) = 0;
      *(_QWORD *)(a3 + 656) = *((_QWORD *)a2 + 82);
      *((_QWORD *)a2 + 82) = 0LL;
      *(_BYTE *)(a3 + 668) = *((_BYTE *)a2 + 668);
      *(_DWORD *)(a3 + 664) = *((_DWORD *)a2 + 166);
      *((_DWORD *)a2 + 166) = 0;
      *(_DWORD *)(a3 + 688) = *((_DWORD *)a2 + 172);
    }
  }
  return result;
}