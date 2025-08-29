_uarpAssetQueueSolicitation
__int64 __fastcall uarpAssetQueueSolicitation(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // x22
  unsigned __int64 v6; // x21

  if ( !*(_QWORD *)(a2 + 80) )
    return 1LL;
  if ( !*(_WORD *)(a2 + 28) )
    return 2LL;
  v5 = 0LL;
  v6 = 0LL;
  while ( (unsigned int)uarpAssetTagIsValid(*(_QWORD *)(a2 + 80) + v5) == 1 )
  {
    ++v6;
    v5 += 4LL;
    if ( v6 >= *(unsigned __int16 *)(a2 + 28) )
      return 2LL;
  }
  *(_DWORD *)(*(_QWORD *)(a2 + 80) + 4 * v6) = *a3;
  return v6 == 0;
}