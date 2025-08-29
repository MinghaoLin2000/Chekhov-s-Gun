_uarpPlatformEndpointStreamingRecvDeinit
__int64 __fastcall uarpPlatformEndpointStreamingRecvDeinit(__int64 result, __int64 a2)
{
  void **v3; // x1
  int v4; // w20

  if ( result )
  {
    if ( a2 )
    {
      v3 = *(void ***)(a2 + 88);
      if ( v3 )
      {
        v4 = result;
        if ( *v3 )
        {
          UARPLayer2ReturnBuffer(result, *v3);
          v3 = *(void ***)(a2 + 88);
          *v3 = 0LL;
        }
        result = UARPLayer2ReturnBuffer(v4, v3);
        *(_QWORD *)(a2 + 88) = 0LL;
      }
    }
  }
  return result;
}