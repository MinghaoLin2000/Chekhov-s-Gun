_GenerateDisarmEfiUserCommand
__int64 __fastcall GenerateDisarmEfiUserCommand(
        __int64 a1,
        _WORD *a2,
        __int64 a3,
        const char *a4,
        _QWORD *a5,
        _DWORD *a6)
{
  void *v10; // x19
  char *v11; // x0
  void *v12; // x21
  __int128 v13; // q0
  __int64 v14; // x22
  void *v16; // [xsp+8h] [xbp-38h] BYREF

  v16 = 0LL;
  v10 = ConvertToEfiCompatibleChar16(a4, &v16, a2);
  v11 = (char *)malloc_type_malloc(0x68uLL, 0x1000040ED882C02uLL);
  *a5 = v11;
  v12 = v16;
  if ( v11 )
  {
    *(_QWORD *)v11 = 0x6800000002LL;
    v13 = gAppleTamperResistantBootEfiUserGuid;
    *(_OWORD *)(v11 + 8) = gAppleTamperResistantBootEfiUserGuid;
    *(_OWORD *)(v11 + 88) = v13;
    *(_OWORD *)(v11 + 56) = 0u;
    *(_OWORD *)(v11 + 72) = 0u;
    v14 = DeriveKey(
            a2,
            &gAppleTamperResistantBootEfiUserGuid,
            v12,
            (__int64)v10,
            *(_QWORD *)(a3 + 48),
            1LL,
            (unsigned int)(*(_DWORD *)(a3 + 57) - 1),
            v11 + 24);
    if ( !(_DWORD)v14 )
      *a6 = 104;
  }
  else
  {
    v14 = 10LL;
  }
  if ( v12 )
  {
    bzero(v12, (int)v10);
    free(v12);
  }
  return v14;
}