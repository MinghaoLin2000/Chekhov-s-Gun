_UARPLayer2RequestBuffer
__int64 __fastcall UARPLayer2RequestBuffer(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 (__fastcall *v4)(__int64); // x3
  __int64 v5; // x0
  __int64 v7; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = *(__int64 (__fastcall **)(__int64))(a1 + 48);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 544);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v4(v5);
  }
  else
  {
    v7 = uarpZalloc(a3);
    *a2 = v7;
    if ( v7 )
      return 0LL;
    else
      return 11LL;
  }
}