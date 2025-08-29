_UARPSuperBinaryBuildMetaData
__int64 __fastcall UARPSuperBinaryBuildMetaData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 **a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int v8; // w25
  unsigned __int64 *v9; // x21
  __int64 v11; // x23
  unsigned int v12; // w24
  __int64 v13; // x0
  char *v14; // x21
  __int64 result; // x0

  v8 = *a6;
  v9 = *a4;
  if ( a3 )
  {
    v11 = a3;
    while ( 1 )
    {
      v12 = uarpNtohl(*(_DWORD *)v11);
      v13 = uarpNtohl(*(_DWORD *)(v11 + 4));
      v8 += *(_DWORD *)(v11 + 4) + 8;
      if ( v8 > a5 )
        return 11LL;
      *v9 = v12 | (unsigned __int64)(v13 << 32);
      v14 = (char *)(v9 + 1);
      memcpy(v14, *(const void **)(v11 + 8), *(unsigned int *)(v11 + 4));
      v9 = (unsigned __int64 *)&v14[*(unsigned int *)(v11 + 4)];
      v11 = *(_QWORD *)(v11 + 16);
      if ( !v11 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    result = 0LL;
    *a6 = v8;
    *a4 = v9;
  }
  return result;
}