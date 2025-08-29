__ZNK6google8protobuf14EnumDescriptor15GetLocationPathEPNSt3__16vectorIiNS2_9allocatorIiEEEE
void __fastcall google::protobuf::EnumDescriptor::GetLocationPath(__int64 a1, _QWORD *a2)
{
  __int64 v4; // x0
  unsigned __int64 v5; // x8
  _QWORD *v6; // x21
  _DWORD *v7; // x9
  _DWORD *v8; // x22
  unsigned __int64 v9; // x8
  _QWORD *v10; // x21
  _DWORD *v11; // x9
  _DWORD *v12; // x0
  __int64 v13; // x22
  unsigned __int64 v14; // x10
  __int64 v15; // x8
  __int64 v16; // x1
  __int64 v17; // x8
  _DWORD *v18; // x0
  __int64 v19; // x22
  unsigned __int64 v20; // x10
  __int64 v21; // x8
  __int64 v22; // x1
  __int64 v23; // x8
  _DWORD *v24; // x10
  __int64 v25; // x8
  int v26; // t1
  __int64 v27; // x8
  _QWORD *v28; // x8
  int v29; // w20
  _DWORD *v30; // x0
  __int64 v31; // x23
  unsigned __int64 v32; // x9
  __int64 v33; // x8
  __int64 v34; // x1
  __int64 v35; // x8
  _DWORD *v36; // x9
  __int64 v37; // x8
  _DWORD *v38; // x21
  int v39; // t1
  _DWORD *v40; // x10
  __int64 v41; // x8
  int v42; // t1
  __int64 v43; // x8
  _QWORD *v44; // x8
  __int64 v45; // x23
  unsigned __int64 v46; // x9
  __int64 v47; // x8
  __int64 v48; // x1
  __int64 v49; // x8
  int v50; // t1

  v4 = *(_QWORD *)(a1 + 24);
  if ( !v4 )
  {
    v10 = a2 + 2;
    v9 = a2[2];
    v11 = (_DWORD *)a2[1];
    if ( (unsigned __int64)v11 >= v9 )
    {
      v18 = (_DWORD *)*a2;
      v19 = ((__int64)v11 - *a2) >> 2;
      v20 = v19 + 1;
      if ( (unsigned __int64)(v19 + 1) >> 62 )
        goto LABEL_70;
      v21 = v9 - (_QWORD)v18;
      if ( v21 >> 1 > v20 )
        v20 = v21 >> 1;
      if ( (unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFFCLL )
        v22 = 0x3FFFFFFFFFFFFFFFLL;
      else
        v22 = v20;
      if ( v22 )
      {
        v23 = sub_10009C294(a2 + 2);
        v18 = (_DWORD *)*a2;
        v11 = (_DWORD *)a2[1];
      }
      else
      {
        v23 = 0LL;
      }
      v40 = (_DWORD *)(v23 + 4 * v19);
      v41 = v23 + 4 * v22;
      *v40 = 5;
      v8 = v40 + 1;
      while ( v11 != v18 )
      {
        v42 = *--v11;
        *--v40 = v42;
      }
      *a2 = v40;
      a2[1] = v8;
      a2[2] = v41;
      if ( v18 )
        operator delete(v18);
    }
    else
    {
      *v11 = 5;
      v8 = v11 + 1;
    }
    a2[1] = v8;
    v43 = *(_QWORD *)(a1 + 24);
    if ( v43 )
      v44 = (_QWORD *)(v43 + 64);
    else
      v44 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL);
    v29 = -858993459 * ((unsigned __int64)(a1 - *v44) >> 4);
    if ( (unsigned __int64)v8 >= *v10 )
    {
      v30 = (_DWORD *)*a2;
      v45 = ((__int64)v8 - *a2) >> 2;
      v46 = v45 + 1;
      if ( !((unsigned __int64)(v45 + 1) >> 62) )
      {
        v47 = *v10 - (_QWORD)v30;
        if ( v47 >> 1 > v46 )
          v46 = v47 >> 1;
        if ( (unsigned __int64)v47 >= 0x7FFFFFFFFFFFFFFCLL )
          v48 = 0x3FFFFFFFFFFFFFFFLL;
        else
          v48 = v46;
        if ( v48 )
        {
          v49 = sub_10009C294(a2 + 2);
          v30 = (_DWORD *)*a2;
          v8 = (_DWORD *)a2[1];
        }
        else
        {
          v49 = 0LL;
        }
        v36 = (_DWORD *)(v49 + 4 * v45);
        v37 = v49 + 4 * v48;
        *v36 = v29;
        v38 = v36 + 1;
        while ( v8 != v30 )
        {
          v50 = *--v8;
          *--v36 = v50;
        }
        goto LABEL_67;
      }
LABEL_70:
      sub_100097888(a2);
    }
LABEL_54:
    *v8 = v29;
    v38 = v8 + 1;
    goto LABEL_69;
  }
  google::protobuf::Descriptor::GetLocationPath(v4, (__int64)a2);
  v6 = a2 + 2;
  v5 = a2[2];
  v7 = (_DWORD *)a2[1];
  if ( (unsigned __int64)v7 >= v5 )
  {
    v12 = (_DWORD *)*a2;
    v13 = ((__int64)v7 - *a2) >> 2;
    v14 = v13 + 1;
    if ( (unsigned __int64)(v13 + 1) >> 62 )
      goto LABEL_70;
    v15 = v5 - (_QWORD)v12;
    if ( v15 >> 1 > v14 )
      v14 = v15 >> 1;
    if ( (unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFFCLL )
      v16 = 0x3FFFFFFFFFFFFFFFLL;
    else
      v16 = v14;
    if ( v16 )
    {
      v17 = sub_10009C294(a2 + 2);
      v12 = (_DWORD *)*a2;
      v7 = (_DWORD *)a2[1];
    }
    else
    {
      v17 = 0LL;
    }
    v24 = (_DWORD *)(v17 + 4 * v13);
    v25 = v17 + 4 * v16;
    *v24 = 4;
    v8 = v24 + 1;
    while ( v7 != v12 )
    {
      v26 = *--v7;
      *--v24 = v26;
    }
    *a2 = v24;
    a2[1] = v8;
    a2[2] = v25;
    if ( v12 )
      operator delete(v12);
  }
  else
  {
    *v7 = 4;
    v8 = v7 + 1;
  }
  a2[1] = v8;
  v27 = *(_QWORD *)(a1 + 24);
  if ( v27 )
    v28 = (_QWORD *)(v27 + 64);
  else
    v28 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL);
  v29 = -858993459 * ((unsigned __int64)(a1 - *v28) >> 4);
  if ( (unsigned __int64)v8 < *v6 )
    goto LABEL_54;
  v30 = (_DWORD *)*a2;
  v31 = ((__int64)v8 - *a2) >> 2;
  v32 = v31 + 1;
  if ( (unsigned __int64)(v31 + 1) >> 62 )
    goto LABEL_70;
  v33 = *v6 - (_QWORD)v30;
  if ( v33 >> 1 > v32 )
    v32 = v33 >> 1;
  if ( (unsigned __int64)v33 >= 0x7FFFFFFFFFFFFFFCLL )
    v34 = 0x3FFFFFFFFFFFFFFFLL;
  else
    v34 = v32;
  if ( v34 )
  {
    v35 = sub_10009C294(a2 + 2);
    v30 = (_DWORD *)*a2;
    v8 = (_DWORD *)a2[1];
  }
  else
  {
    v35 = 0LL;
  }
  v36 = (_DWORD *)(v35 + 4 * v31);
  v37 = v35 + 4 * v34;
  *v36 = v29;
  v38 = v36 + 1;
  while ( v8 != v30 )
  {
    v39 = *--v8;
    *--v36 = v39;
  }
LABEL_67:
  *a2 = v36;
  a2[1] = v38;
  a2[2] = v37;
  if ( v30 )
    operator delete(v30);
LABEL_69:
  a2[1] = v38;
}