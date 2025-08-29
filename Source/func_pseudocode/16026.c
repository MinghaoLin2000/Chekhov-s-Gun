_uarpPlatformEndpointInit
__int64 __fastcall uarpPlatformEndpointInit(
        char *a1,
        __int64 a2,
        unsigned int a3,
        __int128 *a4,
        const void *a5,
        __int64 a6,
        __int64 a7)
{
  __int64 result; // x0
  __int128 v15; // q0
  __int128 v16; // q1

  result = 30LL;
  if ( a3 <= 2 && a2 && a1 && a4 && a5 )
  {
    uarpZero(a1, 0x260uLL);
    memcpy(a1 + 48, a5, 0x1F0uLL);
    *((_QWORD *)a1 + 68) = a2;
    *((_QWORD *)a1 + 5) = a6;
    *((_DWORD *)a1 + 144) = 1;
    *((_QWORD *)a1 + 74) = a7;
    v16 = *a4;
    v15 = a4[1];
    *((_DWORD *)a1 + 8) = *((_DWORD *)a4 + 8);
    *(_OWORD *)a1 = v16;
    *((_OWORD *)a1 + 1) = v15;
    if ( !*((_WORD *)a1 + 6) )
      *((_WORD *)a1 + 6) = 4;
    result = 0LL;
    *((_DWORD *)a1 + 138) = a3;
    a1[580] = 0;
    *((_DWORD *)a1 + 146) = 1;
    *((_WORD *)a1 + 300) = 1;
  }
  return result;
}