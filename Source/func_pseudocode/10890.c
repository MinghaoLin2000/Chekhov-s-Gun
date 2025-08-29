__ZNK6google8protobuf15FieldDescriptor15GetLocationPathEPNSt3__16vectorIiNS2_9allocatorIiEEEE
void __fastcall google::protobuf::FieldDescriptor::GetLocationPath(__int64 a1, _QWORD *a2)
{
  __int64 v4; // x0
  unsigned __int64 v5; // x8
  _QWORD *v6; // x21
  _DWORD *v7; // x9
  _DWORD *v8; // x22
  unsigned __int64 v9; // x8
  _QWORD *v10; // x21
  _DWORD *v11; // x9
  unsigned __int64 v12; // x8
  _QWORD *v13; // x21
  _DWORD *v14; // x9
  _DWORD *v15; // x0
  __int64 v16; // x22
  unsigned __int64 v17; // x10
  __int64 v18; // x8
  __int64 v19; // x1
  __int64 v20; // x8
  _DWORD *v21; // x0
  __int64 v22; // x22
  unsigned __int64 v23; // x10
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x8
  _DWORD *v27; // x0
  __int64 v28; // x22
  unsigned __int64 v29; // x10
  __int64 v30; // x8
  __int64 v31; // x1
  __int64 v32; // x8
  _DWORD *v33; // x10
  __int64 v34; // x8
  int v35; // t1
  __int64 v36; // x8
  _QWORD *v37; // x8
  int v38; // w20
  _DWORD *v39; // x0
  __int64 v40; // x23
  unsigned __int64 v41; // x9
  __int64 v42; // x8
  __int64 v43; // x1
  __int64 v44; // x8
  _DWORD *v45; // x9
  __int64 v46; // x8
  _DWORD *v47; // x21
  int v48; // t1
  _DWORD *v49; // x10
  __int64 v50; // x8
  int v51; // t1
  __int64 v52; // x8
  _QWORD *v53; // x8
  __int64 v54; // x23
  unsigned __int64 v55; // x9
  __int64 v56; // x8
  __int64 v57; // x1
  __int64 v58; // x8
  int v59; // t1
  _DWORD *v60; // x10
  __int64 v61; // x8
  int v62; // t1
  __int64 v63; // x8
  _QWORD *v64; // x8
  __int64 v65; // x23
  unsigned __int64 v66; // x9
  __int64 v67; // x8
  __int64 v68; // x1
  __int64 v69; // x8
  int v70; // t1

  if ( !*(_BYTE *)(a1 + 67) )
  {
    google::protobuf::Descriptor::GetLocationPath(*(_QWORD *)(a1 + 80), (__int64)a2);
    v10 = a2 + 2;
    v9 = a2[2];
    v11 = (_DWORD *)a2[1];
    if ( (unsigned __int64)v11 >= v9 )
    {
      v21 = (_DWORD *)*a2;
      v22 = ((__int64)v11 - *a2) >> 2;
      v23 = v22 + 1;
      if ( (unsigned __int64)(v22 + 1) >> 62 )
        goto LABEL_109;
      v24 = v9 - (_QWORD)v21;
      if ( v24 >> 1 > v23 )
        v23 = v24 >> 1;
      if ( (unsigned __int64)v24 >= 0x7FFFFFFFFFFFFFFCLL )
        v25 = 0x3FFFFFFFFFFFFFFFLL;
      else
        v25 = v23;
      if ( v25 )
      {
        v26 = sub_10009C294(a2 + 2);
        v21 = (_DWORD *)*a2;
        v11 = (_DWORD *)a2[1];
      }
      else
      {
        v26 = 0LL;
      }
      v49 = (_DWORD *)(v26 + 4 * v22);
      v50 = v26 + 4 * v25;
      *v49 = 2;
      v8 = v49 + 1;
      while ( v11 != v21 )
      {
        v51 = *--v11;
        *--v49 = v51;
      }
      *a2 = v49;
      a2[1] = v8;
      a2[2] = v50;
      if ( v21 )
        operator delete(v21);
    }
    else
    {
      *v11 = 2;
      v8 = v11 + 1;
    }
    a2[1] = v8;
    if ( *(_BYTE *)(a1 + 67) )
    {
      v52 = *(_QWORD *)(a1 + 96);
      if ( v52 )
        v53 = (_QWORD *)(v52 + 80);
      else
        v53 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
    }
    else
    {
      v53 = (_QWORD *)(*(_QWORD *)(a1 + 80) + 40LL);
    }
    v38 = 678152731 * ((unsigned __int64)(a1 - *v53) >> 3);
    if ( (unsigned __int64)v8 < *v10 )
      goto LABEL_93;
    v39 = (_DWORD *)*a2;
    v54 = ((__int64)v8 - *a2) >> 2;
    v55 = v54 + 1;
    if ( !((unsigned __int64)(v54 + 1) >> 62) )
    {
      v56 = *v10 - (_QWORD)v39;
      if ( v56 >> 1 > v55 )
        v55 = v56 >> 1;
      if ( (unsigned __int64)v56 >= 0x7FFFFFFFFFFFFFFCLL )
        v57 = 0x3FFFFFFFFFFFFFFFLL;
      else
        v57 = v55;
      if ( v57 )
      {
        v58 = sub_10009C294(a2 + 2);
        v39 = (_DWORD *)*a2;
        v8 = (_DWORD *)a2[1];
      }
      else
      {
        v58 = 0LL;
      }
      v45 = (_DWORD *)(v58 + 4 * v54);
      v46 = v58 + 4 * v57;
      *v45 = v38;
      v47 = v45 + 1;
      while ( v8 != v39 )
      {
        v59 = *--v8;
        *--v45 = v59;
      }
      goto LABEL_106;
    }
    goto LABEL_109;
  }
  v4 = *(_QWORD *)(a1 + 96);
  if ( !v4 )
  {
    v13 = a2 + 2;
    v12 = a2[2];
    v14 = (_DWORD *)a2[1];
    if ( (unsigned __int64)v14 >= v12 )
    {
      v27 = (_DWORD *)*a2;
      v28 = ((__int64)v14 - *a2) >> 2;
      v29 = v28 + 1;
      if ( (unsigned __int64)(v28 + 1) >> 62 )
        goto LABEL_109;
      v30 = v12 - (_QWORD)v27;
      if ( v30 >> 1 > v29 )
        v29 = v30 >> 1;
      if ( (unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFFCLL )
        v31 = 0x3FFFFFFFFFFFFFFFLL;
      else
        v31 = v29;
      if ( v31 )
      {
        v32 = sub_10009C294(a2 + 2);
        v27 = (_DWORD *)*a2;
        v14 = (_DWORD *)a2[1];
      }
      else
      {
        v32 = 0LL;
      }
      v60 = (_DWORD *)(v32 + 4 * v28);
      v61 = v32 + 4 * v31;
      *v60 = 7;
      v8 = v60 + 1;
      while ( v14 != v27 )
      {
        v62 = *--v14;
        *--v60 = v62;
      }
      *a2 = v60;
      a2[1] = v8;
      a2[2] = v61;
      if ( v27 )
        operator delete(v27);
    }
    else
    {
      *v14 = 7;
      v8 = v14 + 1;
    }
    a2[1] = v8;
    if ( *(_BYTE *)(a1 + 67) )
    {
      v63 = *(_QWORD *)(a1 + 96);
      if ( v63 )
        v64 = (_QWORD *)(v63 + 80);
      else
        v64 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
    }
    else
    {
      v64 = (_QWORD *)(*(_QWORD *)(a1 + 80) + 40LL);
    }
    v38 = 678152731 * ((unsigned __int64)(a1 - *v64) >> 3);
    if ( (unsigned __int64)v8 < *v13 )
    {
LABEL_93:
      *v8 = v38;
      v47 = v8 + 1;
      goto LABEL_108;
    }
    v39 = (_DWORD *)*a2;
    v65 = ((__int64)v8 - *a2) >> 2;
    v66 = v65 + 1;
    if ( !((unsigned __int64)(v65 + 1) >> 62) )
    {
      v67 = *v13 - (_QWORD)v39;
      if ( v67 >> 1 > v66 )
        v66 = v67 >> 1;
      if ( (unsigned __int64)v67 >= 0x7FFFFFFFFFFFFFFCLL )
        v68 = 0x3FFFFFFFFFFFFFFFLL;
      else
        v68 = v66;
      if ( v68 )
      {
        v69 = sub_10009C294(a2 + 2);
        v39 = (_DWORD *)*a2;
        v8 = (_DWORD *)a2[1];
      }
      else
      {
        v69 = 0LL;
      }
      v45 = (_DWORD *)(v69 + 4 * v65);
      v46 = v69 + 4 * v68;
      *v45 = v38;
      v47 = v45 + 1;
      while ( v8 != v39 )
      {
        v70 = *--v8;
        *--v45 = v70;
      }
      goto LABEL_106;
    }
LABEL_109:
    sub_100097888(a2);
  }
  google::protobuf::Descriptor::GetLocationPath(v4, (__int64)a2);
  v6 = a2 + 2;
  v5 = a2[2];
  v7 = (_DWORD *)a2[1];
  if ( (unsigned __int64)v7 >= v5 )
  {
    v15 = (_DWORD *)*a2;
    v16 = ((__int64)v7 - *a2) >> 2;
    v17 = v16 + 1;
    if ( (unsigned __int64)(v16 + 1) >> 62 )
      goto LABEL_109;
    v18 = v5 - (_QWORD)v15;
    if ( v18 >> 1 > v17 )
      v17 = v18 >> 1;
    if ( (unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFFCLL )
      v19 = 0x3FFFFFFFFFFFFFFFLL;
    else
      v19 = v17;
    if ( v19 )
    {
      v20 = sub_10009C294(a2 + 2);
      v15 = (_DWORD *)*a2;
      v7 = (_DWORD *)a2[1];
    }
    else
    {
      v20 = 0LL;
    }
    v33 = (_DWORD *)(v20 + 4 * v16);
    v34 = v20 + 4 * v19;
    *v33 = 6;
    v8 = v33 + 1;
    while ( v7 != v15 )
    {
      v35 = *--v7;
      *--v33 = v35;
    }
    *a2 = v33;
    a2[1] = v8;
    a2[2] = v34;
    if ( v15 )
      operator delete(v15);
  }
  else
  {
    *v7 = 6;
    v8 = v7 + 1;
  }
  a2[1] = v8;
  if ( *(_BYTE *)(a1 + 67) )
  {
    v36 = *(_QWORD *)(a1 + 96);
    if ( v36 )
      v37 = (_QWORD *)(v36 + 80);
    else
      v37 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
  }
  else
  {
    v37 = (_QWORD *)(*(_QWORD *)(a1 + 80) + 40LL);
  }
  v38 = 678152731 * ((unsigned __int64)(a1 - *v37) >> 3);
  if ( (unsigned __int64)v8 < *v6 )
    goto LABEL_93;
  v39 = (_DWORD *)*a2;
  v40 = ((__int64)v8 - *a2) >> 2;
  v41 = v40 + 1;
  if ( (unsigned __int64)(v40 + 1) >> 62 )
    goto LABEL_109;
  v42 = *v6 - (_QWORD)v39;
  if ( v42 >> 1 > v41 )
    v41 = v42 >> 1;
  if ( (unsigned __int64)v42 >= 0x7FFFFFFFFFFFFFFCLL )
    v43 = 0x3FFFFFFFFFFFFFFFLL;
  else
    v43 = v41;
  if ( v43 )
  {
    v44 = sub_10009C294(a2 + 2);
    v39 = (_DWORD *)*a2;
    v8 = (_DWORD *)a2[1];
  }
  else
  {
    v44 = 0LL;
  }
  v45 = (_DWORD *)(v44 + 4 * v40);
  v46 = v44 + 4 * v43;
  *v45 = v38;
  v47 = v45 + 1;
  while ( v8 != v39 )
  {
    v48 = *--v8;
    *--v45 = v48;
  }
LABEL_106:
  *a2 = v45;
  a2[1] = v47;
  a2[2] = v46;
  if ( v39 )
    operator delete(v39);
LABEL_108:
  a2[1] = v47;
}