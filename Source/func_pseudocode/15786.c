_uarpPlatformEndpointStreamingRecvInit
__int64 __fastcall uarpPlatformEndpointStreamingRecvInit(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  unsigned int v5; // w21
  void *v6; // x1
  void *v7; // [xsp+8h] [xbp-28h] BYREF

  result = 30LL;
  if ( a1 && a2 )
  {
    v7 = 0LL;
    UARPLayer2RequestBuffer(a1, &v7, 24LL);
    if ( v7 )
    {
      v5 = *(_DWORD *)(a2 + 4) + 36;
      UARPLayer2RequestBuffer(a1, v7, v5);
      v6 = v7;
      if ( *(_QWORD *)v7 )
      {
        result = 0LL;
        *((_DWORD *)v7 + 2) = v5;
        *(_QWORD *)(a2 + 88) = v6;
        return result;
      }
      UARPLayer2ReturnBuffer(a1, v7);
    }
    return 11LL;
  }
  return result;
}