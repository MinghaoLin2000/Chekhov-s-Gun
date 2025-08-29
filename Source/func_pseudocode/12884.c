_sfu_pbkdf2
void *__fastcall sfu_pbkdf2(
        void *result,
        __int64 a2,
        int a3,
        int a4,
        void *__src,
        size_t __n,
        int a7,
        char *a8,
        unsigned int a9,
        const void *a10)
{
  int v16; // w27
  __int64 v17; // x12
  __int64 v18; // x11
  unsigned int v19; // w23
  __int64 v20; // x20
  __int64 v21; // x22
  __int64 v22; // x19
  __int64 v23; // [xsp+0h] [xbp-80h]
  size_t v24; // [xsp+18h] [xbp-68h]
  __int64 v25; // [xsp+20h] [xbp-60h]
  char *v26; // [xsp+28h] [xbp-58h]
  __int64 vars8; // [xsp+88h] [xbp+8h]

  v16 = (int)result;
  v17 = a9 / (unsigned int)a2;
  v18 = (__int64)a10 + (unsigned int)a2;
  v24 = a9 % (unsigned int)a2;
  if ( (unsigned int)a2 <= a9 )
  {
    v25 = (unsigned int)a2;
    v19 = 1;
    do
    {
      v26 = a8;
      v23 = (__int64)a8;
      v20 = a2;
      v21 = v18;
      v22 = v17;
      result = (void *)sub_100138984(v16, a2, a3, a4, __src, __n, a7, v19, v23, v18);
      v17 = v22;
      v18 = v21;
      a2 = v20;
      a8 = &v26[v25];
      ++v19;
    }
    while ( v19 <= (unsigned int)v17 );
  }
  else
  {
    v19 = 1;
  }
  if ( (_DWORD)v24 )
  {
    sub_100138984(v16, a2, a3, a4, __src, __n, a7, v19, (__int64)a10, v18);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return memcpy(a8, a10, v24);
  }
  return result;
}