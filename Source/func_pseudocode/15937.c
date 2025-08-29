_uarpApplePlatformMessageCheckValidToSend
__int64 __fastcall uarpApplePlatformMessageCheckValidToSend(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // x23
  __int64 result; // x0
  int v11; // w8
  void (__fastcall *v12)(_QWORD, _QWORD, _QWORD, _QWORD); // x8

  v4 = *(_QWORD *)(a1 + 40);
  if ( !v4 )
    return 1LL;
  word_10002AC90 = 2492;
  byte_10002AC92 = 99;
  if ( *(_WORD *)(a3 + 6) != 2492 || *(_BYTE *)(a3 + 8) != 99 )
    return 1LL;
  v11 = uarpNtohs(*(unsigned __int16 *)(a3 + 9));
  result = 1LL;
  if ( a4 >= 0xF && v11 == 32 )
  {
    if ( (unsigned int)uarpNtohl(*(unsigned int *)(a3 + 11)) == 2
      && (*(unsigned __int16 *)(a2 + 48) < 2u || *(_DWORD *)(a2 + 24)) )
    {
      v12 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v4 + 32);
      if ( v12 )
LABEL_14:
        v12(*(_QWORD *)(a1 + 544), *(_QWORD *)(a2 + 40), 0LL, 0LL);
    }
    else
    {
      if ( (unsigned int)uarpNtohl(*(unsigned int *)(a3 + 11)) != 1
        || *(unsigned __int16 *)(a2 + 48) >= 2u && !*(_DWORD *)(a2 + 24) )
      {
        return 1LL;
      }
      v12 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v4 + 16);
      if ( v12 )
        goto LABEL_14;
    }
    return 0LL;
  }
  return result;
}