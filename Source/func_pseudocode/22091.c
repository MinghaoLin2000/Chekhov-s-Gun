_GenerateArmEfiUserCommand
__int64 __fastcall GenerateArmEfiUserCommand(__int64 a1, _WORD *a2, const char *a3, char a4, __int64 *a5, _DWORD *a6)
{
  void *v11; // x27
  void *v12; // x22
  __int64 v13; // x23
  _QWORD *v14; // x0
  __int64 v15; // x8
  __int128 v16; // q0
  __int128 v17; // q1
  __int128 v18; // q2
  void *v20; // [xsp+8h] [xbp-A8h] BYREF
  __int128 v21; // [xsp+10h] [xbp-A0h]
  _BYTE v22[53]; // [xsp+20h] [xbp-90h] BYREF

  v20 = 0LL;
  memset(v22, 0, 41);
  v21 = gAppleTamperResistantBootEfiUserGuid;
  v11 = ConvertToEfiCompatibleChar16(a3, &v20, a2);
  *(_DWORD *)&v22[41] = CCCalibratePBKDF(2u, (int)v11, 8uLL, 2u, 0x20uLL, 0x64u);
  *(_DWORD *)&v22[45] = 2 * *(_DWORD *)&v22[41];
  *(_QWORD *)&v22[32] = a1;
  *(_DWORD *)&v22[49] = a4 & 3;
  v12 = v20;
  v13 = DeriveKey(
          a2,
          &gAppleTamperResistantBootEfiUserGuid,
          v20,
          (__int64)v11,
          a1,
          1LL,
          (unsigned int)(2 * *(_DWORD *)&v22[41]),
          v22);
  if ( !(_DWORD)v13 )
  {
    v14 = malloc_type_malloc(0x4DuLL, 0xEB316EDCuLL);
    *a5 = (__int64)v14;
    if ( !v14 )
    {
      v13 = 10LL;
      if ( !v12 )
        return v13;
      goto LABEL_5;
    }
    v13 = 0LL;
    *v14 = 0x4500000000LL;
    v15 = *a5;
    v16 = *(_OWORD *)v22;
    v17 = *(_OWORD *)&v22[16];
    v18 = *(_OWORD *)&v22[32];
    *(_QWORD *)(v15 + 69) = *(_QWORD *)&v22[45];
    *(_OWORD *)(v15 + 56) = v18;
    *(_OWORD *)(v15 + 40) = v17;
    *(_OWORD *)(v15 + 24) = v16;
    *(_OWORD *)(v15 + 8) = v21;
    *a6 = 77;
  }
  if ( v12 )
  {
LABEL_5:
    bzero(v12, (int)v11);
    free(v12);
  }
  return v13;
}