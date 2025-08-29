_uarpRemoteEndpointID
__int64 __fastcall uarpRemoteEndpointID(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(a1 + 52);
  else
    return 0xFFFFFFFFLL;
}