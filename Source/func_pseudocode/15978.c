_uarpTransmitQueueAssetRescinded
void __fastcall uarpTransmitQueueAssetRescinded(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // x21
  __int64 v6; // x23
  int v7; // w0

  if ( a2 && *(_WORD *)(a2 + 112) )
  {
    v5 = 0LL;
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8 * v5);
      if ( v6 )
      {
        if ( (unsigned int)uarpNtohs(**(unsigned __int16 **)(v6 + 16)) == 6 )
        {
          v7 = uarpNtohs(*(unsigned __int16 *)(*(_QWORD *)(v6 + 16) + 6LL));
          if ( !a3 || v7 == *(unsigned __int16 *)(a3 + 44) )
            *(_BYTE *)(v6 + 33) = 1;
        }
      }
      ++v5;
    }
    while ( v5 < *(unsigned __int16 *)(a2 + 112) );
  }
}