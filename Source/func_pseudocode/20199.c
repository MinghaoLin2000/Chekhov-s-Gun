_urfWriteLine
__int64 __fastcall urfWriteLine(__int64 a1, void *__src, int a3, int a4, int a5)
{
  __int64 result; // x0
  unsigned int v8; // w8
  unsigned int v9; // w26
  const void *v11; // x20
  int v12; // w28
  size_t v13; // x23
  unsigned int v14; // w27
  int v15; // w25
  const void *v16; // x24
  void *v17; // x0
  int v18; // w8
  unsigned __int64 __n; // [xsp+8h] [xbp-58h]

  result = 0LL;
  if ( a1 && a3 >= 1 && a4 >= 1 )
  {
    v8 = *(_DWORD *)(a1 + 80);
    v9 = *(_DWORD *)(a1 + 40);
    if ( v9 <= v8 )
    {
      result = 0LL;
      *(_QWORD *)(a1 + 112) = "Too many lines in page image";
      return result;
    }
    v11 = __src;
    if ( v8 + a4 <= v9 )
      v12 = a4;
    else
      v12 = v9 - v8;
    v13 = *(_QWORD *)(a1 + 72);
    v14 = v12 + v8;
    *(_DWORD *)(a1 + 80) = v12 + v8;
    v15 = *(_DWORD *)(a1 + 84);
    __n = v13 / (unsigned int)a3;
    if ( v15 )
    {
      if ( *(_DWORD *)(a1 + 88) == a3 )
      {
        v16 = *(const void **)(a1 + 64);
        if ( !memcmp(__src, v16, __n) )
        {
          *(_DWORD *)(a1 + 84) = v15 + v12;
          if ( a5 )
          {
            *(_QWORD *)(a1 + 64) = v11;
          }
          else
          {
            v17 = *(void **)(a1 + 56);
            if ( v16 != v17 )
            {
              memcpy(v17, v11, v13);
              *(_QWORD *)(a1 + 64) = *(_QWORD *)(a1 + 56);
              v14 = *(_DWORD *)(a1 + 80);
              v9 = *(_DWORD *)(a1 + 40);
            }
          }
          if ( v14 >= v9 )
          {
            while ( *(_DWORD *)(a1 + 84) )
            {
              v18 = sub_100038F2C(a1);
              result = 0LL;
              if ( !v18 )
                return result;
            }
          }
          return 1LL;
        }
      }
      while ( *(_DWORD *)(a1 + 84) )
      {
        result = sub_100038F2C(a1);
        if ( !(_DWORD)result )
          return result;
      }
    }
    *(_DWORD *)(a1 + 84) = v12;
    *(_DWORD *)(a1 + 88) = a3;
    if ( !a5 && *(_DWORD *)(a1 + 80) < *(_DWORD *)(a1 + 40) )
    {
      memcpy(*(void **)(a1 + 56), v11, __n);
      v11 = *(const void **)(a1 + 56);
    }
    *(_QWORD *)(a1 + 64) = v11;
    if ( *(_DWORD *)(a1 + 80) >= *(_DWORD *)(a1 + 40) )
    {
      while ( *(_DWORD *)(a1 + 84) )
      {
        result = sub_100038F2C(a1);
        if ( !(_DWORD)result )
          return result;
      }
    }
    return 1LL;
  }
  return result;
}