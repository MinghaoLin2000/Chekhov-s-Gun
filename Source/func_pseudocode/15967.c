_uarpDownstreamEndpointGetID
__int64 __fastcall uarpDownstreamEndpointGetID(__int64 a1, _WORD *a2)
{
  __int64 result; // x0

  result = 30LL;
  if ( a1 )
  {
    if ( a2 )
    {
      result = 0LL;
      *a2 = *(_WORD *)(a1 + 136);
    }
  }
  return result;
}