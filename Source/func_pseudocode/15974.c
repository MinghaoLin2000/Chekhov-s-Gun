_uarpTransmitQueuePendingEntryComplete
__int64 __fastcall uarpTransmitQueuePendingEntryComplete(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // w8
  _QWORD *v4; // x9
  __int64 v5; // x10
  __int64 v7; // x9
  _QWORD *v8; // x10
  __int64 v9; // x9
  __int64 v10; // x8
  __int64 v11; // x10

  v3 = *(unsigned __int16 *)(a2 + 112);
  if ( *(_WORD *)(a2 + 112) )
  {
    v4 = *(_QWORD **)(a2 + 120);
    v5 = *(unsigned __int16 *)(a2 + 112);
    while ( !*v4 || *v4 != a3 )
    {
      ++v4;
      if ( !--v5 )
        goto LABEL_15;
    }
    *v4 = 0LL;
    *(_WORD *)(a3 + 32) = 0;
    *(_DWORD *)(a3 + 28) = 0;
    v7 = *(unsigned __int16 *)(a2 + 96);
    if ( *(_WORD *)(a2 + 96) )
    {
      v8 = *(_QWORD **)(a2 + 104);
      while ( *v8 )
      {
        ++v8;
        if ( !--v7 )
          goto LABEL_15;
      }
      *v8 = a3;
    }
LABEL_15:
    if ( v3 >= 2 )
    {
      v9 = 0LL;
      v10 = 8LL * (v3 - 1);
      do
      {
        v11 = *(_QWORD *)(a2 + 120);
        if ( !*(_QWORD *)(v11 + v9) )
        {
          *(_QWORD *)(v11 + v9) = *(_QWORD *)(v11 + v9 + 8);
          *(_QWORD *)(*(_QWORD *)(a2 + 120) + v9 + 8) = 0LL;
        }
        v9 += 8LL;
      }
      while ( v10 != v9 );
    }
  }
  return 0LL;
}