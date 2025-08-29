_GenerateUpdateEfiUserCommand
__int64 __fastcall GenerateUpdateEfiUserCommand(
        __int64 a1,
        _WORD *a2,
        __int64 a3,
        const char *a4,
        const char *a5,
        char a6,
        _QWORD *a7,
        _DWORD *a8)
{
  void *v16; // x22
  void *v17; // x21
  char *v18; // x0
  void *v19; // x23
  char *v20; // x27
  __int128 v21; // q0
  __int64 v22; // x28
  __int128 v23; // q1
  void *v24; // x19
  void *v25; // [xsp+0h] [xbp-60h] BYREF
  void *v26; // [xsp+8h] [xbp-58h] BYREF
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v25 = 0LL;
  v26 = 0LL;
  if ( !a4 || a5 )
  {
    v16 = ConvertToEfiCompatibleChar16(a4, &v26, a2);
    v17 = ConvertToEfiCompatibleChar16(a5, &v25, a2);
    v18 = (char *)malloc_type_malloc(0x8CuLL, 0x1000040AB7D74EDuLL);
    *a7 = v18;
    v19 = v26;
    if ( v18 )
    {
      v20 = v18;
      *(_QWORD *)v18 = 0x8C00000003LL;
      v21 = gAppleTamperResistantBootEfiUserGuid;
      *(_OWORD *)(v18 + 8) = gAppleTamperResistantBootEfiUserGuid;
      *(_OWORD *)(v18 + 88) = v21;
      v22 = DeriveKey(
              a2,
              &gAppleTamperResistantBootEfiUserGuid,
              v19,
              (__int64)v16,
              *(_QWORD *)(a3 + 48),
              1LL,
              (unsigned int)(*(_DWORD *)(a3 + 57) - 1),
              v18 + 24);
      if ( !(_DWORD)v22 )
      {
        v22 = DeriveKey(
                a2,
                &gAppleTamperResistantBootEfiUserGuid,
                v25,
                (__int64)v17,
                a1,
                1LL,
                *(unsigned int *)(a3 + 61),
                v20 + 56);
        if ( !(_DWORD)v22 )
        {
          v23 = *(_OWORD *)(v20 + 72);
          *(_OWORD *)(v20 + 104) = *(_OWORD *)(v20 + 56);
          *(_OWORD *)(v20 + 120) = v23;
          *((_DWORD *)v20 + 34) = a6 & 3;
          *a8 = 140;
        }
      }
    }
    else
    {
      v22 = 10LL;
    }
    if ( v19 )
    {
      bzero(v19, (int)v16);
      free(v19);
    }
    v24 = v25;
    if ( v25 )
    {
      bzero(v25, (int)v17);
      free(v24);
    }
    return v22;
  }
  else
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return GenerateUpdateEfiPasswordModeCommand(a1, a2, a3, a4, a6, a7, a8);
  }
}