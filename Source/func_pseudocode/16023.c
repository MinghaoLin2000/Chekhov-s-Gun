_UARPSuperBinaryGetInternalSuperBinaryMetaData
__int64 __fastcall UARPSuperBinaryGetInternalSuperBinaryMetaData(
        int a1,
        __int64 a2,
        void *__dst,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 *a6)
{
  int v7; // w9
  unsigned int v8; // w8
  unsigned int v9; // w10
  bool v10; // cf
  __int64 v11; // x8
  bool v12; // cc
  unsigned __int16 v13; // w20
  __int64 result; // x0
  unsigned __int16 v15; // w9

  v7 = *(_DWORD *)(a2 + 32);
  if ( v7
    && ((v8 = *(_DWORD *)(a2 + 28), v9 = v7 + v8, v10 = a5 >= v8, v11 = a5 - v8, v10) ? (v12 = v9 > a5) : (v12 = 0), v12) )
  {
    v15 = v7 - v11;
    if ( a4 >= v15 )
      v13 = v15;
    else
      v13 = a4;
    memcpy(__dst, (const void *)(*(_QWORD *)(a2 + 672) + v11), v13);
    result = 0LL;
  }
  else
  {
    v13 = 0;
    result = 40LL;
  }
  *a6 = v13;
  return result;
}