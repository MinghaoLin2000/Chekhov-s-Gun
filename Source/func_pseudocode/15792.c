_uarpPlatformAssetUpdateMetaData
__int64 __fastcall uarpPlatformAssetUpdateMetaData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void (__fastcall *a4)(__int64, __int64, __int64, __int64, unsigned int *))
{
  unsigned int v4; // w26
  unsigned int *v9; // x25
  __int64 v10; // x24
  __int64 v11; // x0
  unsigned int v12; // w23
  unsigned int v13; // w8
  unsigned int *v14; // x25
  int v15; // w8

  v4 = *(_DWORD *)(a3 + 84);
  if ( v4 < 8 )
    return 0LL;
  v9 = *(unsigned int **)(a3 + 16);
  while ( 1 )
  {
    v10 = uarpNtohl(*v9);
    v11 = uarpNtohl(v9[1]);
    if ( (unsigned int)v11 > *(_DWORD *)(a3 + 24) - 8 )
      break;
    v12 = v11;
    v13 = v4 - 8;
    v4 = v4 - 8 - v11;
    if ( v13 >= (unsigned int)v11 )
    {
      v14 = v9 + 2;
      v15 = *(_DWORD *)(a3 + 88) + 8;
      *(_DWORD *)(a3 + 88) = v15;
      if ( a4 )
      {
        a4(a1, a2, v10, v11, v14);
        v15 = *(_DWORD *)(a3 + 88);
      }
      v9 = (unsigned int *)((char *)v14 + v12);
      *(_DWORD *)(a3 + 88) = v15 + v12;
      if ( v4 > 7 )
        continue;
    }
    return 0LL;
  }
  return 53LL;
}