_uarpTransmitBuffer2
__int64 __fastcall uarpTransmitBuffer2(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x11
  _QWORD *i; // x9

  v3 = *(unsigned __int16 *)(a2 + 112);
  if ( (unsigned int)v3 >= 2 )
  {
    v4 = 0LL;
    do
    {
      v5 = *(_QWORD *)(a2 + 120);
      if ( !*(_QWORD *)(v5 + v4) )
      {
        *(_QWORD *)(v5 + v4) = *(_QWORD *)(v5 + v4 + 8);
        *(_QWORD *)(*(_QWORD *)(a2 + 120) + v4 + 8) = 0LL;
      }
      v4 += 8LL;
    }
    while ( 8LL * (unsigned int)(v3 - 1) != v4 );
  }
  if ( !(_DWORD)v3 )
    return 11LL;
  for ( i = *(_QWORD **)(a2 + 120); *i; ++i )
  {
    if ( !--v3 )
      return 11LL;
  }
  *i = a3;
  uarpTransmitQueueService(a1, a2);
  return 0LL;
}