_GenerateUpdateEfiPasswordModeCommand
__int64 __fastcall GenerateUpdateEfiPasswordModeCommand(
        __int64 a1,
        _WORD *a2,
        __int64 a3,
        const char *a4,
        char a5,
        _QWORD *a6,
        _DWORD *a7)
{
  void *v13; // x20
  char *v14; // x0
  void *v15; // x22
  char *v16; // x26
  __int64 v17; // x27
  void *v19; // [xsp+8h] [xbp-58h] BYREF

  v19 = 0LL;
  v13 = ConvertToEfiCompatibleChar16(a4, &v19, a2);
  v14 = (char *)malloc_type_malloc(0x59uLL, 0x10000400D7E65EFuLL);
  *a6 = v14;
  v15 = v19;
  if ( v14 )
  {
    v16 = v14;
    *(_QWORD *)v14 = 0x5900000004LL;
    *(_OWORD *)(v14 + 8) = gAppleTamperResistantBootEfiUserGuid;
    v17 = DeriveKey(
            a2,
            &gAppleTamperResistantBootEfiUserGuid,
            v15,
            (__int64)v13,
            *(_QWORD *)(a3 + 48),
            1LL,
            (unsigned int)(*(_DWORD *)(a3 + 57) - 1),
            v14 + 24);
    if ( !(_DWORD)v17 )
    {
      v17 = DeriveKey(
              a2,
              &gAppleTamperResistantBootEfiUserGuid,
              v15,
              (__int64)v13,
              a1,
              1LL,
              *(unsigned int *)(a3 + 61),
              v16 + 56);
      if ( !(_DWORD)v17 )
      {
        v16[88] = a5;
        *a7 = 89;
      }
    }
  }
  else
  {
    v17 = 10LL;
  }
  if ( v15 )
  {
    bzero(v15, (int)v13);
    free(v15);
  }
  return v17;
}