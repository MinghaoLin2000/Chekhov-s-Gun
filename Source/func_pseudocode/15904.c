_uarpAssetProcessingComplete
__int64 __fastcall uarpAssetProcessingComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // x0
  __int64 v9; // x23
  __int64 v10; // x24
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( a2 )
  {
    v8 = uarpAllocPrepareTransmitBuffer2(a1, a2, 9LL, 10LL, 1LL);
    if ( v8 )
    {
      v9 = v8;
      v10 = *(_QWORD *)(v8 + 16);
      *(_WORD *)(v10 + 6) = uarpHtons(*(unsigned __int16 *)(a3 + 44));
      *(_WORD *)(v10 + 8) = uarpHtons(a4);
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return uarpTransmitBuffer2(a1, a2, v9);
    }
    else
    {
      return 11LL;
    }
  }
  else if ( (_DWORD)a4 == 3 )
  {
    return 0LL;
  }
  else
  {
    return 13LL;
  }
}