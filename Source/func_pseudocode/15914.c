_UARPPlatformDownstreamEndpointByDelegate
__int64 __fastcall UARPPlatformDownstreamEndpointByDelegate(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // x0
  __int64 v5; // x9
  __int64 *i; // x8

  result = 0LL;
  if ( a1 && a2 && a3 )
  {
    v5 = *(unsigned int *)(a1 + 556);
    if ( (_DWORD)v5 )
    {
      for ( i = *(__int64 **)(a1 + 560); ; ++i )
      {
        result = *i;
        if ( *(_QWORD *)(*i + 176) == a2 && *(_QWORD *)(result + 40) == a3 )
          break;
        if ( !--v5 )
          return 0LL;
      }
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}