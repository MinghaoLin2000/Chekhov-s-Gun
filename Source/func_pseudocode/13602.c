_SFUDeriveAes128Key
__int64 __fastcall SFUDeriveAes128Key(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        char *a4,
        __int64 a5,
        void *a6,
        size_t a7)
{
  bool v7; // zf
  bool v10; // zf
  int v11; // w27
  unsigned int v14; // w25
  int v17; // w23
  int v18; // w24
  __int64 v19; // x8
  void *v20; // x26

  if ( a4 )
    v7 = a5 == 16;
  else
    v7 = 0;
  v10 = v7 && a1 != 0 && a3 >= 0x3E8 && HIDWORD(a2) == 0;
  v11 = !v10;
  if ( v10 )
  {
    v14 = a5;
    v17 = a2;
    v18 = a1;
    v19 = a7 + 4;
    if ( a7 + 4 <= 0x14 )
      v19 = 20LL;
    v20 = malloc_type_calloc(1uLL, v19 + 40, 0xA2988ADBuLL);
    sfu_pbkdf2(sub_100164F2C, 20LL, v18, v17, a6, a7, a3, a4, v14, v20);
    free(v20);
  }
  return v11 ^ 1u;
}