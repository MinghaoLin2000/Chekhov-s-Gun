__ZNK6google8protobuf17ServiceDescriptor15GetLocationPathEPNSt3__16vectorIiNS2_9allocatorIiEEEE
void __fastcall google::protobuf::ServiceDescriptor::GetLocationPath(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // x8
  unsigned __int64 *v5; // x20
  _DWORD *v6; // x9
  _DWORD *v7; // x22
  _DWORD *v8; // x0
  __int64 v9; // x22
  unsigned __int64 v10; // x10
  __int64 v11; // x8
  __int64 v12; // x1
  __int64 v13; // x8
  _DWORD *v14; // x10
  int v15; // t1
  int v16; // w21
  _DWORD *v17; // x20
  _DWORD *v18; // x0
  __int64 v19; // x23
  unsigned __int64 v20; // x9
  __int64 v21; // x8
  __int64 v22; // x1
  __int64 v23; // x8
  _DWORD *v24; // x9
  __int64 v25; // x8
  int v26; // t1

  v5 = (unsigned __int64 *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 16);
  v6 = *(_DWORD **)(a2 + 8);
  if ( (unsigned __int64)v6 >= v4 )
  {
    v8 = *(_DWORD **)a2;
    v9 = ((__int64)v6 - *(_QWORD *)a2) >> 2;
    v10 = v9 + 1;
    if ( (unsigned __int64)(v9 + 1) >> 62 )
      goto LABEL_34;
    v11 = v4 - (_QWORD)v8;
    if ( v11 >> 1 > v10 )
      v10 = v11 >> 1;
    if ( (unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFFCLL )
      v12 = 0x3FFFFFFFFFFFFFFFLL;
    else
      v12 = v10;
    if ( v12 )
    {
      v13 = sub_10009C294(v5);
      v8 = *(_DWORD **)a2;
      v6 = *(_DWORD **)(a2 + 8);
    }
    else
    {
      v13 = 0LL;
    }
    v14 = (_DWORD *)(v13 + 4 * v9);
    v4 = v13 + 4 * v12;
    *v14 = 6;
    v7 = v14 + 1;
    while ( v6 != v8 )
    {
      v15 = *--v6;
      *--v14 = v15;
    }
    *(_QWORD *)a2 = v14;
    *(_QWORD *)(a2 + 8) = v7;
    *(_QWORD *)(a2 + 16) = v4;
    if ( v8 )
    {
      operator delete(v8);
      v4 = *v5;
    }
  }
  else
  {
    *v6 = 6;
    v7 = v6 + 1;
  }
  *(_QWORD *)(a2 + 8) = v7;
  v16 = -1431655765 * ((unsigned __int64)(a1 - *(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL)) >> 4);
  if ( (unsigned __int64)v7 < v4 )
  {
    *v7 = v16;
    v17 = v7 + 1;
    goto LABEL_33;
  }
  v18 = *(_DWORD **)a2;
  v19 = ((__int64)v7 - *(_QWORD *)a2) >> 2;
  v20 = v19 + 1;
  if ( (unsigned __int64)(v19 + 1) >> 62 )
LABEL_34:
    sub_100097888(a2);
  v21 = v4 - (_QWORD)v18;
  if ( v21 >> 1 > v20 )
    v20 = v21 >> 1;
  if ( (unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFFCLL )
    v22 = 0x3FFFFFFFFFFFFFFFLL;
  else
    v22 = v20;
  if ( v22 )
  {
    v23 = sub_10009C294(v5);
    v18 = *(_DWORD **)a2;
    v7 = *(_DWORD **)(a2 + 8);
  }
  else
  {
    v23 = 0LL;
  }
  v24 = (_DWORD *)(v23 + 4 * v19);
  v25 = v23 + 4 * v22;
  *v24 = v16;
  v17 = v24 + 1;
  while ( v7 != v18 )
  {
    v26 = *--v7;
    *--v24 = v26;
  }
  *(_QWORD *)a2 = v24;
  *(_QWORD *)(a2 + 8) = v17;
  *(_QWORD *)(a2 + 16) = v25;
  if ( v18 )
    operator delete(v18);
LABEL_33:
  *(_QWORD *)(a2 + 8) = v17;
}