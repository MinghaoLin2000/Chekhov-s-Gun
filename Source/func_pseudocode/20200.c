_urfWritePage
__int64 __fastcall urfWritePage(__int64 result, __int64 *a2)
{
  __int64 v3; // x19
  unsigned int v4; // w8
  unsigned int v5; // w8
  unsigned __int64 v6; // x20
  void *v7; // x0
  void *v8; // x0
  const char *v9; // x8
  __int64 v10; // [xsp+0h] [xbp-40h] BYREF
  int v11; // [xsp+8h] [xbp-38h]
  int8x8_t v12; // [xsp+Ch] [xbp-34h]
  unsigned int v13; // [xsp+14h] [xbp-2Ch]
  __int64 v14; // [xsp+18h] [xbp-28h]

  if ( result )
  {
    v3 = result;
    if ( a2 )
    {
      v4 = *(_DWORD *)(result + 16);
      if ( v4 && *(_DWORD *)(result + 20) >= v4 )
      {
        result = 0LL;
        v9 = "Done writing all pages";
      }
      else
      {
        result = _urfSetLineSize(result, a2);
        if ( !(_DWORD)result )
          return result;
        v10 = *a2;
        v11 = *((_DWORD *)a2 + 2);
        v12 = vrev32_s8(*(int8x8_t *)((char *)a2 + 12));
        v5 = bswap32(*((_DWORD *)a2 + 5));
        v14 = 0LL;
        v13 = v5;
        if ( (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64))v3)(*(_QWORD *)(v3 + 8), &v10, 32LL) == 32 )
        {
          ++*(_DWORD *)(v3 + 20);
          *(_QWORD *)(v3 + 80) = 0LL;
          v6 = 2LL * *(_QWORD *)(v3 + 72) + 2;
          if ( v6 <= *(_QWORD *)(v3 + 104) )
            return 1LL;
          v7 = *(void **)(v3 + 96);
          if ( v7 )
          {
            v8 = malloc_type_realloc(v7, 2LL * *(_QWORD *)(v3 + 72) + 2, 0xF73AE04CuLL);
            if ( v8 )
            {
LABEL_10:
              *(_QWORD *)(v3 + 96) = v8;
              *(_QWORD *)(v3 + 104) = v6;
              return 1LL;
            }
          }
          else
          {
            v8 = malloc_type_malloc(2LL * *(_QWORD *)(v3 + 72) + 2, 0x5EA8BDB2uLL);
            if ( v8 )
              goto LABEL_10;
          }
          free(*(void **)(v3 + 96));
          result = 0LL;
          *(_QWORD *)(v3 + 96) = 0LL;
          *(_QWORD *)(v3 + 104) = 0LL;
          v9 = "Unable to allocate memory for compression buffer";
        }
        else
        {
          result = 0LL;
          v9 = "Unable to write page header";
        }
      }
    }
    else
    {
      result = 0LL;
      v9 = "NULL page header";
    }
    *(_QWORD *)(v3 + 112) = v9;
  }
  return result;
}