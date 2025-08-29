_uarpTransmitQueuesCleanup
void __fastcall uarpTransmitQueuesCleanup(__int64 a1, __int64 a2)
{
  void *v4; // x1
  unsigned int v5; // w8
  unsigned __int64 v6; // x22
  void **v7; // x21
  void *v8; // x1
  unsigned int v9; // w8
  unsigned __int64 v10; // x22
  void **v11; // x21

  UARPLayer2WatchdogCancel(a1, a2);
  v4 = *(void **)(a2 + 104);
  if ( v4 )
  {
    v5 = *(unsigned __int16 *)(a2 + 96);
    if ( *(_WORD *)(a2 + 96) )
    {
      v6 = 0LL;
      do
      {
        v7 = *(void ***)(*(_QWORD *)(a2 + 104) + 8 * v6);
        if ( v7 )
        {
          UARPLayer2ReturnTransmitMsgBuffer(a1, a2, *v7);
          UARPLayer2ReturnBuffer(a1, v7);
          *(_QWORD *)(*(_QWORD *)(a2 + 104) + 8 * v6) = 0LL;
          v5 = *(unsigned __int16 *)(a2 + 96);
        }
        ++v6;
      }
      while ( v6 < v5 );
      v4 = *(void **)(a2 + 104);
    }
    UARPLayer2ReturnBuffer(a1, v4);
    *(_QWORD *)(a2 + 104) = 0LL;
    *(_WORD *)(a2 + 96) = 0;
  }
  v8 = *(void **)(a2 + 120);
  if ( v8 )
  {
    v9 = *(unsigned __int16 *)(a2 + 112);
    if ( *(_WORD *)(a2 + 112) )
    {
      v10 = 0LL;
      do
      {
        v11 = *(void ***)(*(_QWORD *)(a2 + 120) + 8 * v10);
        if ( v11 )
        {
          UARPLayer2ReturnTransmitMsgBuffer(a1, a2, *v11);
          UARPLayer2ReturnBuffer(a1, v11);
          *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8 * v10) = 0LL;
          v9 = *(unsigned __int16 *)(a2 + 112);
        }
        ++v10;
      }
      while ( v10 < v9 );
      v8 = *(void **)(a2 + 120);
    }
    UARPLayer2ReturnBuffer(a1, v8);
    *(_QWORD *)(a2 + 120) = 0LL;
    *(_WORD *)(a2 + 112) = 0;
  }
}