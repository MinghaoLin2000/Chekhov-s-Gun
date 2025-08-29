__Z15pwgMediaForSizeiiP10pwg_info_t
char **__fastcall pwgMediaForSize(int a1, int a2, __int64 a3)
{
  char **result; // x0
  char **v7; // x8
  int v8; // w9
  unsigned int v9; // w10
  int v10; // w12
  int v11; // w14
  int v12; // w13
  bool v13; // zf
  int v14; // w14
  char v19[32]; // [xsp+18h] [xbp-68h] BYREF
  char __str[32]; // [xsp+38h] [xbp-48h] BYREF

  result = 0LL;
  if ( a1 >= 1 && a2 >= 1 && a3 )
  {
    result = 0LL;
    *(_OWORD *)(a3 + 112) = 0u;
    *(_OWORD *)(a3 + 128) = 0u;
    *(_OWORD *)(a3 + 80) = 0u;
    *(_OWORD *)(a3 + 96) = 0u;
    *(_OWORD *)(a3 + 48) = 0u;
    *(_OWORD *)(a3 + 64) = 0u;
    *(_OWORD *)(a3 + 16) = 0u;
    *(_OWORD *)(a3 + 32) = 0u;
    v7 = &off_10009C908;
    v8 = 999;
    v9 = 177;
    v10 = 999;
    *(_OWORD *)a3 = 0u;
    do
    {
      v11 = *((_DWORD *)v7 + 7);
      v12 = *((_DWORD *)v7 + 6) - a1;
      if ( v12 )
        v13 = 0;
      else
        v13 = v11 == a2;
      if ( v13 )
        return v7;
      v14 = v11 - a2;
      if ( v14 < 0 )
        v14 = -v14;
      if ( v12 < 0 )
        v12 = a1 - *((_DWORD *)v7 + 6);
      if ( (unsigned int)v12 <= 0x32 && (unsigned int)v14 <= 0x32 && v12 <= v10 && v14 <= v8 )
      {
        v10 = v12;
        result = v7;
        v8 = v14;
      }
      v7 += 4;
      --v9;
    }
    while ( v9 > 1 );
    if ( !result )
    {
      sub_100021010(a3 + 32, "custom");
      *(_QWORD *)a3 = a3 + 32;
      *(_DWORD *)(a3 + 24) = a1;
      *(_DWORD *)(a3 + 28) = a2;
      if ( (a2 % 0x27Bu) | (a1 % 0x27Bu) )
      {
        sub_100020AAC(__str);
        sub_100020AAC(v19);
        snprintf((char *)(a3 + 97), 0x29uLL, "%sx%smm");
      }
      else
      {
        sub_100020B58(__str);
        sub_100020B58(v19);
        snprintf((char *)(a3 + 97), 0x29uLL, "%sx%s");
      }
      *(_QWORD *)(a3 + 16) = a3 + 97;
      return (char **)a3;
    }
  }
  return result;
}