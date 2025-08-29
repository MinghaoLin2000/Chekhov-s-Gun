_uarpPlatformEndpointIsMessageTypePending
__int64 __fastcall uarpPlatformEndpointIsMessageTypePending(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // x21
  __int64 v6; // x8

  if ( !*(_WORD *)(a2 + 112) )
    return 0LL;
  v5 = 0LL;
  while ( 1 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8 * v5);
    if ( v6 )
    {
      if ( (unsigned int)uarpNtohs(**(unsigned __int16 **)(v6 + 16)) == a3
        && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 120) + 8 * v5) + 33LL) != 1 )
      {
        break;
      }
    }
    if ( ++v5 >= (unsigned __int64)*(unsigned __int16 *)(a2 + 112) )
      return 0LL;
  }
  return 1LL;
}