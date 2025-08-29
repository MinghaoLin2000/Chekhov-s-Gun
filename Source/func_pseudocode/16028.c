_uarpPlatformRemoteEndpointRemove
__int64 __fastcall uarpPlatformRemoteEndpointRemove(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v5; // x9
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x10

  result = 30LL;
  if ( a1 && a2 )
  {
    uarpTransmitQueuesCleanup(a1, a2);
    uarpPlatformCleanupAssetsForRemoteEndpoint(a1, a2, 1);
    v5 = *(unsigned int *)(a1 + 556);
    if ( (_DWORD)v5 )
    {
      v6 = 0LL;
      v7 = 8 * v5;
      do
      {
        v8 = *(_QWORD *)(a1 + 560);
        if ( *(_QWORD *)(v8 + v6) == a2 )
          *(_QWORD *)(v8 + v6) = 0LL;
        v6 += 8LL;
      }
      while ( v7 != v6 );
    }
    uarpPlatformEndpointStreamingRecvDeinit(a1, a2);
    UARPLayer2ReturnBuffer(a1, *(void **)(a2 + 80));
    result = 0LL;
    *(_QWORD *)(a2 + 80) = 0LL;
  }
  return result;
}