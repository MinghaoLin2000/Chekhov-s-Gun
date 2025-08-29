_uarpPlatformRemoteEndpointAdd
__int64 __fastcall uarpPlatformRemoteEndpointAdd(__int64 a1, __int64 a2, __int128 *a3, __int64 a4)
{
  __int64 result; // x0
  __int128 v7; // q0
  __int128 v8; // q1
  __int128 v9; // q0
  __int128 v10; // q1
  unsigned int v11; // w8
  int v12; // w8
  int v13; // w8
  unsigned __int64 v14; // x21
  int v15; // w8

  result = 30LL;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a4 )
      {
        *(_QWORD *)(a2 + 40) = a4;
        v7 = *(_OWORD *)a1;
        v8 = *(_OWORD *)(a1 + 16);
        *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 32);
        *(_OWORD *)a2 = v7;
        *(_OWORD *)(a2 + 16) = v8;
        if ( !a3
          || (v10 = *a3,
              v9 = a3[1],
              *(_DWORD *)(a2 + 32) = *((_DWORD *)a3 + 8),
              *(_OWORD *)a2 = v10,
              *(_OWORD *)(a2 + 16) = v9,
              (v11 = *(_DWORD *)(a2 + 4)) != 0)
          && *(_DWORD *)a2
          && *(_DWORD *)(a2 + 8) >= v11 )
        {
          if ( !*(_WORD *)(a2 + 12) )
            *(_WORD *)(a2 + 12) = *(_WORD *)(a1 + 12);
          *(_WORD *)(a2 + 48) = 0;
          v12 = *(_DWORD *)(a1 + 584);
          *(_DWORD *)(a1 + 584) = v12 + 1;
          *(_DWORD *)(a2 + 52) = v12;
          *(_BYTE *)(a2 + 56) = 1;
          *(_DWORD *)(a2 + 58) = 1;
          if ( !*(_WORD *)(a2 + 28)
            || (result = UARPLayer2RequestBuffer(
                           a1,
                           (__int64 *)(a2 + 80),
                           4 * (unsigned int)*(unsigned __int16 *)(a2 + 28)),
                !(_DWORD)result) )
          {
            result = uarpPlatformRemoteEndpointAddEntry(a1, a2);
            if ( !(_DWORD)result )
            {
              v13 = *(unsigned __int16 *)(a2 + 20);
              if ( !*(_WORD *)(a2 + 20) )
              {
                v13 = 1;
                *(_WORD *)(a2 + 20) = 1;
              }
              *(_WORD *)(a2 + 96) = v13;
              result = UARPLayer2RequestBuffer(a1, (__int64 *)(a2 + 104), 8 * v13);
              if ( !(_DWORD)result )
              {
                if ( *(_WORD *)(a2 + 96) )
                {
                  v14 = 0LL;
                  do
                    *(_QWORD *)(*(_QWORD *)(a2 + 104) + 8 * v14++) = uarpAllocateTransmitBuffer2(a1, a2, 0);
                  while ( v14 < *(unsigned __int16 *)(a2 + 96) );
                }
                v15 = *(unsigned __int16 *)(a2 + 20);
                *(_WORD *)(a2 + 112) = v15;
                result = UARPLayer2RequestBuffer(a1, (__int64 *)(a2 + 120), 8 * v15);
                if ( !(_DWORD)result )
                {
                  if ( (unsigned int)(*(_DWORD *)(a1 + 552) - 1) > 1 )
                    return 0LL;
                  result = uarpPlatformEndpointSendSyncMsg(a1, a2);
                  if ( !(_DWORD)result )
                  {
                    if ( *(_DWORD *)(a1 + 552) != 2 )
                      return 0LL;
                    result = uarpSendVersionDiscoveryRequest(a1, a2, *(unsigned __int16 *)(a2 + 12));
                    if ( !(_DWORD)result )
                      return 0LL;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}