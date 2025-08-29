__ZN6google8protobuf8internal15UTF8GenericScanEPKNS1_19UTF8StateMachineObjEPKciPi
__int64 __fastcall google::protobuf::internal::UTF8GenericScan(unsigned int *a1, _BYTE *a2, int a3, _DWORD *a4)
{
  unsigned __int64 v4; // x9
  unsigned __int64 v5; // x12
  __int64 v6; // x10
  __int64 v7; // x13
  _BYTE *v8; // x16
  __int64 v9; // x8
  char v10; // w17
  _DWORD *v11; // x17
  unsigned __int64 v12; // x16
  _DWORD *v13; // x8
  _DWORD *v14; // x16
  unsigned __int64 v15; // x5
  _BYTE *v16; // x2
  __int64 v17; // x4
  __int64 v18; // x8
  _DWORD *v19; // x8
  _BYTE *v20; // x8

  *a4 = 0;
  if ( !a3 )
    return 241LL;
  v4 = (unsigned __int64)&a2[a3];
  if ( a3 >= 7 )
    v5 = v4 - 7;
  else
    v5 = (unsigned __int64)a2;
  v6 = *((_QWORD *)a1 + 4) + *a1;
  v7 = *((_QWORD *)a1 + 7);
  v8 = a2;
  while ( 2 )
  {
    v9 = (unsigned __int8)v8 & 7;
    if ( ((unsigned __int8)v8 & 7) != 0 && (unsigned __int64)v8 < v4 )
    {
      v10 = (_BYTE)v8 + 1;
      while ( !*(_BYTE *)(v7 + (unsigned __int8)*v8) )
      {
        ++v8;
        v9 = v10 & 7;
        if ( (v10 & 7) != 0 )
        {
          ++v10;
          if ( (unsigned __int64)v8 < v4 )
            continue;
        }
        goto LABEL_12;
      }
LABEL_20:
      v11 = v8;
      goto LABEL_21;
    }
LABEL_12:
    if ( v9 || (unsigned __int64)v8 >= v5 )
      goto LABEL_20;
    v11 = v8 + 4;
    while ( 1 )
    {
      v12 = (unsigned int)*(v11 - 1);
      if ( ((((_DWORD)v12 - a1[6]) | ((_DWORD)v12 + a1[7]) | (*v11 - a1[6]) | (*v11 + a1[7])) & 0x80808080) != 0 )
        break;
LABEL_18:
      v13 = v11 + 2;
      v14 = v11 + 1;
      v11 += 2;
      if ( (unsigned __int64)v14 >= v5 )
      {
        v11 = v13 - 1;
        goto LABEL_21;
      }
    }
    if ( !(*(unsigned __int8 *)(v7 + BYTE1(v12)) | *(unsigned __int8 *)(v7 + (unsigned __int8)v12) | *(unsigned __int8 *)(v7 + BYTE2(v12)) | *(unsigned __int8 *)(v7 + (v12 >> 24))) )
    {
      if ( *(unsigned __int8 *)(v7 + (unsigned __int8)BYTE1(*v11)) | *(unsigned __int8 *)(v7 + (unsigned __int8)*v11) | *(unsigned __int8 *)(v7 + (unsigned __int8)BYTE2(*v11)) | *(unsigned __int8 *)(v7 + ((unsigned __int64)(unsigned int)*v11 >> 24)) )
        goto LABEL_21;
      goto LABEL_18;
    }
    --v11;
LABEL_21:
    if ( (unsigned __int64)v11 < v4 )
    {
      v15 = v4 - (_QWORD)v11;
      v16 = (char *)v11 - 1;
      v17 = *((_QWORD *)a1 + 4) + *a1;
      v8 = v11;
      while ( 1 )
      {
        v18 = *(unsigned __int8 *)(v17 + (unsigned __int8)*v8);
        if ( (unsigned int)v18 > 0xEF )
          break;
        ++v8;
        v17 = v6 + (int)((_DWORD)v18 << a1[4]);
        ++v16;
        if ( !--v15 )
        {
          LODWORD(v8) = v4;
          goto LABEL_32;
        }
      }
      if ( a1[1] <= (int)v17 - (int)v6 )
      {
        do
        {
          v8 = v16;
          if ( v16 <= a2 )
            break;
          --v16;
        }
        while ( (*v8 & 0xC0) == 0x80 );
      }
      if ( (_DWORD)v18 != 253 )
        goto LABEL_42;
      continue;
    }
    break;
  }
  LODWORD(v8) = (_DWORD)v11;
  LODWORD(v17) = a1[8] + *a1;
LABEL_32:
  if ( a1[1] <= (int)v17 - (int)v6 )
  {
    if ( (unsigned __int64)v11 <= v4 )
      v19 = (_DWORD *)v4;
    else
      v19 = v11;
    v20 = (char *)v19 - 1;
    do
    {
      v8 = v20;
      if ( v20 <= a2 )
        break;
      --v20;
    }
    while ( (*v8 & 0xC0) == 0x80 );
    v18 = 240LL;
  }
  else
  {
    v18 = 241LL;
  }
LABEL_42:
  *a4 = (_DWORD)v8 - (_DWORD)a2;
  return v18;
}