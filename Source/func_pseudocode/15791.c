_uarpPlatformAssetResponseData
__int64 __fastcall uarpPlatformAssetResponseData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *__src,
        int a5,
        int a6,
        size_t __n)
{
  __int64 v7; // x22
  __int64 v10; // x8
  int v12; // w8
  int v13; // w23
  int v14; // w24
  int v15; // w8
  __int64 v16; // x9
  int v17; // w22
  __int64 (__fastcall *v18)(__int64, __int64, __int64); // x3
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( !*(_BYTE *)(a2 + 392) )
    return 29LL;
  v7 = a3;
  if ( (_DWORD)a3 )
  {
    uarpPlatformAssetProcessingCompleteInternal(a1, *(_QWORD *)(a2 + 696), a2, 4u, 0, 0);
    return v7;
  }
  if ( *(_DWORD *)(a2 + 404) != a5 )
    return 29LL;
  if ( *(_DWORD *)(a2 + 408) != a6 )
    return 29LL;
  v10 = *(unsigned int *)(a2 + 396);
  if ( (unsigned int)(v10 + __n) > *(_DWORD *)(a2 + 336) )
    return 29LL;
  *(_BYTE *)(a2 + 392) = 0;
  *(_DWORD *)(a2 + 412) = __n;
  memcpy((void *)(*(_QWORD *)(a2 + 328) + v10), __src, (unsigned int)__n);
  v12 = *(_DWORD *)(a2 + 396) + *(_DWORD *)(a2 + 412);
  v13 = *(_DWORD *)(a2 + 320) + v12;
  *(_DWORD *)(a2 + 396) = v12;
  v14 = *(_DWORD *)(a2 + 316);
  if ( v12 == *(_DWORD *)(a2 + 336) || v13 == v14 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a2 + 376))(a1, a2, a2 + 312);
    if ( (_DWORD)v7 )
      return v7;
    v15 = *(_DWORD *)(a2 + 396);
    v16 = *(unsigned int *)(a2 + 400);
    v17 = v15 - v16;
    if ( v15 != (_DWORD)v16 )
    {
      memcpy(*(void **)(a2 + 328), (const void *)(*(_QWORD *)(a2 + 328) + v16), (unsigned int)(v15 - v16));
      v15 = *(_DWORD *)(a2 + 400);
    }
    *(_DWORD *)(a2 + 396) = v17;
    *(_DWORD *)(a2 + 320) += v15;
    *(_DWORD *)(a2 + 400) = 0;
  }
  if ( v13 == v14 )
  {
    v18 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a2 + 384);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v18(a1, a2, a2 + 312);
  }
  else
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return uarpPlatformAssetRequestData(a1, a2, a2 + 312);
  }
}