__ZNK6google8protobuf16MethodDescriptor15GetLocationPathEPNSt3__16vectorIiNS2_9allocatorIiEEEE
void __fastcall google::protobuf::MethodDescriptor::GetLocationPath(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // x8
  _DWORD *v5; // x9
  _DWORD *v6; // x22
  _DWORD *v7; // x0
  __int64 v8; // x22
  unsigned __int64 v9; // x10
  __int64 v10; // x8
  __int64 v11; // x1
  __int64 v12; // x8
  _DWORD *v13; // x10
  int v14; // t1
  int v15; // w21
  _DWORD *v16; // x20
  _DWORD *v17; // x0
  __int64 v18; // x23
  unsigned __int64 v19; // x9
  __int64 v20; // x8
  __int64 v21; // x1
  __int64 v22; // x8
  _DWORD *v23; // x9
  __int64 v24; // x8
  int v25; // t1

  google::protobuf::ServiceDescriptor::GetLocationPath(*(_QWORD *)(a1 + 16));
  v4 = *(_QWORD *)(a2 + 16);
  v5 = *(_DWORD **)(a2 + 8);
  if ( (unsigned __int64)v5 >= v4 )
  {
    v7 = *(_DWORD **)a2;
    v8 = ((__int64)v5 - *(_QWORD *)a2) >> 2;
    v9 = v8 + 1;
    if ( (unsigned __int64)(v8 + 1) >> 62 )
      goto LABEL_34;
    v10 = v4 - (_QWORD)v7;
    if ( v10 >> 1 > v9 )
      v9 = v10 >> 1;
    if ( (unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFFCLL )
      v11 = 0x3FFFFFFFFFFFFFFFLL;
    else
      v11 = v9;
    if ( v11 )
    {
      v12 = sub_10009C294(a2 + 16);
      v7 = *(_DWORD **)a2;
      v5 = *(_DWORD **)(a2 + 8);
    }
    else
    {
      v12 = 0LL;
    }
    v13 = (_DWORD *)(v12 + 4 * v8);
    v4 = v12 + 4 * v11;
    *v13 = 2;
    v6 = v13 + 1;
    while ( v5 != v7 )
    {
      v14 = *--v5;
      *--v13 = v14;
    }
    *(_QWORD *)a2 = v13;
    *(_QWORD *)(a2 + 8) = v6;
    *(_QWORD *)(a2 + 16) = v4;
    if ( v7 )
    {
      operator delete(v7);
      v4 = *(_QWORD *)(a2 + 16);
    }
  }
  else
  {
    *v5 = 2;
    v6 = v5 + 1;
  }
  *(_QWORD *)(a2 + 8) = v6;
  v15 = -991146299 * ((unsigned __int64)(a1 - *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL)) >> 3);
  if ( (unsigned __int64)v6 < v4 )
  {
    *v6 = v15;
    v16 = v6 + 1;
    goto LABEL_33;
  }
  v17 = *(_DWORD **)a2;
  v18 = ((__int64)v6 - *(_QWORD *)a2) >> 2;
  v19 = v18 + 1;
  if ( (unsigned __int64)(v18 + 1) >> 62 )
LABEL_34:
    sub_100097888(a2);
  v20 = v4 - (_QWORD)v17;
  if ( v20 >> 1 > v19 )
    v19 = v20 >> 1;
  if ( (unsigned __int64)v20 >= 0x7FFFFFFFFFFFFFFCLL )
    v21 = 0x3FFFFFFFFFFFFFFFLL;
  else
    v21 = v19;
  if ( v21 )
  {
    v22 = sub_10009C294(a2 + 16);
    v17 = *(_DWORD **)a2;
    v6 = *(_DWORD **)(a2 + 8);
  }
  else
  {
    v22 = 0LL;
  }
  v23 = (_DWORD *)(v22 + 4 * v18);
  v24 = v22 + 4 * v21;
  *v23 = v15;
  v16 = v23 + 1;
  while ( v6 != v17 )
  {
    v25 = *--v6;
    *--v23 = v25;
  }
  *(_QWORD *)a2 = v23;
  *(_QWORD *)(a2 + 8) = v16;
  *(_QWORD *)(a2 + 16) = v24;
  if ( v17 )
    operator delete(v17);
LABEL_33:
  *(_QWORD *)(a2 + 8) = v16;
}