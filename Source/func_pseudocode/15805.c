_UARPLayer2RequestTransmitMsgBuffer
__int64 __fastcall UARPLayer2RequestTransmitMsgBuffer(__int64 a1, __int64 a2, __int64 *a3, unsigned int *a4)
{
  __int64 v5; // x2
  __int64 (__fastcall *v6)(__int64, __int64 *, __int64); // x3
  __int64 v7; // x0
  __int64 v9; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v5 = *a4;
  v6 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64))(a1 + 48);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 544);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v6(v7, a3, v5);
  }
  else
  {
    v9 = uarpZalloc(v5);
    *a3 = v9;
    if ( v9 )
      return 0LL;
    else
      return 11LL;
  }
}