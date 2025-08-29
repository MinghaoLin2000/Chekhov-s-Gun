_UARPLayer2PayloadMetaDataComplete
__int64 __fastcall UARPLayer2PayloadMetaDataComplete(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  void (*v5)(void); // x8
  __int64 (__fastcall *v6)(__int64, __int64); // x2
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  result = *(unsigned int *)(a2 + 540);
  if ( !(_DWORD)result )
    goto LABEL_5;
  v5 = *(void (**)(void))(a1 + 376);
  if ( v5 )
    v5();
  result = uarpPlatformCompareHash(a1, *(void **)(a2 + 560), *(unsigned int *)(a2 + 568), *(void **)(a2 + 576));
  if ( !(_DWORD)result )
  {
    v6 = *(__int64 (__fastcall **)(__int64, __int64))(a2 + 200);
    if ( !v6 )
      return result;
  }
  else
  {
LABEL_5:
    v6 = *(__int64 (__fastcall **)(__int64, __int64))(a2 + 128);
    if ( !v6 )
      return result;
  }
  v7 = *(_QWORD *)(a1 + 544);
  v8 = *(_QWORD *)(a2 + 704);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return v6(v7, v8);
}