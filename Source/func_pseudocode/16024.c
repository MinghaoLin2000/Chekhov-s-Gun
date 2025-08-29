_UARPSuperBinaryGetInternalPayloadMetaData
__int64 __fastcall UARPSuperBinaryGetInternalPayloadMetaData(
        int a1,
        __int64 a2,
        void *__dst,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 *a6)
{
  __int64 v7; // x8
  int v8; // w10
  unsigned int v9; // w9
  unsigned int v10; // w11
  bool v11; // cf
  __int64 v12; // x9
  unsigned __int16 v14; // w20
  __int64 result; // x0
  unsigned __int16 v16; // w10

  v7 = *(_QWORD *)(a2 + 632);
  if ( !v7 )
  {
LABEL_9:
    v14 = 0;
    result = 40LL;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v8 = *(_DWORD *)(v7 + 28);
    if ( v8 )
      break;
LABEL_8:
    if ( !v7 )
      goto LABEL_9;
  }
  v9 = *(_DWORD *)(v7 + 24);
  v10 = v8 + v9;
  v11 = a5 >= v9;
  v12 = a5 - v9;
  if ( !v11 || v10 <= a5 )
  {
    v7 = *(_QWORD *)(v7 + 176);
    goto LABEL_8;
  }
  v16 = v8 - v12;
  if ( a4 >= v16 )
    v14 = v16;
  else
    v14 = a4;
  memcpy(__dst, (const void *)(*(_QWORD *)(v7 + 152) + v12), v14);
  result = 0LL;
LABEL_14:
  *a6 = v14;
  return result;
}