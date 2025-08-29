__ZN12ObjConverter5Group13appendIndicesEiii
void __fastcall ObjConverter::Group::appendIndices(ObjConverter::Group *this, int a2, int a3, int a4)
{
  char *v8; // x8
  unsigned __int64 v9; // x11
  char *v10; // x10
  _DWORD *v11; // x23
  char *v12; // x9
  char *v13; // x0
  __int64 v14; // x23
  unsigned __int64 v15; // x12
  __int64 v16; // x11
  __int64 v17; // x1
  __int64 v18; // x8
  _DWORD *v19; // x9
  __int64 v20; // x8
  int v21; // t1
  unsigned __int64 v22; // x11
  char *v23; // x10
  _DWORD *v24; // x22
  char *v25; // x0
  __int64 v26; // x22
  unsigned __int64 v27; // x12
  __int64 v28; // x11
  __int64 v29; // x1
  __int64 v30; // x8
  _DWORD *v31; // x9
  __int64 v32; // x8
  int v33; // t1
  unsigned __int64 v34; // x11
  char *v35; // x10
  _DWORD *v36; // x21
  char *v37; // x0
  __int64 v38; // x21
  unsigned __int64 v39; // x12
  __int64 v40; // x11
  __int64 v41; // x1
  __int64 v42; // x8
  _DWORD *v43; // x9
  __int64 v44; // x8
  int v45; // t1

  v8 = (char *)this + 48;
  v9 = *((_QWORD *)this + 6);
  v10 = (char *)*((_QWORD *)this + 5);
  if ( (unsigned __int64)v10 >= v9 )
  {
    v12 = (char *)this + 32;
    v13 = (char *)*((_QWORD *)this + 4);
    v14 = (v10 - v13) >> 2;
    v15 = v14 + 1;
    if ( (unsigned __int64)(v14 + 1) >> 62 )
      goto LABEL_50;
    v16 = v9 - (_QWORD)v13;
    if ( v16 >> 1 > v15 )
      v15 = v16 >> 1;
    if ( (unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFFCLL )
      v17 = 0x3FFFFFFFFFFFFFFFLL;
    else
      v17 = v15;
    if ( v17 )
    {
      v18 = sub_100007F5C(v8);
      v13 = (char *)*((_QWORD *)this + 4);
      v10 = (char *)*((_QWORD *)this + 5);
    }
    else
    {
      v18 = 0LL;
    }
    v19 = (_DWORD *)(v18 + 4 * v14);
    v20 = v18 + 4 * v17;
    *v19 = a2;
    v11 = v19 + 1;
    while ( v10 != v13 )
    {
      v21 = *((_DWORD *)v10 - 1);
      v10 -= 4;
      *--v19 = v21;
    }
    *((_QWORD *)this + 4) = v19;
    *((_QWORD *)this + 5) = v11;
    *((_QWORD *)this + 6) = v20;
    if ( v13 )
      operator delete(v13);
  }
  else
  {
    *(_DWORD *)v10 = a2;
    v11 = v10 + 4;
  }
  v22 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 5) = v11;
  v23 = (char *)*((_QWORD *)this + 8);
  if ( (unsigned __int64)v23 >= v22 )
  {
    v12 = (char *)this + 56;
    v25 = (char *)*((_QWORD *)this + 7);
    v26 = (v23 - v25) >> 2;
    v27 = v26 + 1;
    if ( (unsigned __int64)(v26 + 1) >> 62 )
      goto LABEL_50;
    v28 = v22 - (_QWORD)v25;
    if ( v28 >> 1 > v27 )
      v27 = v28 >> 1;
    if ( (unsigned __int64)v28 >= 0x7FFFFFFFFFFFFFFCLL )
      v29 = 0x3FFFFFFFFFFFFFFFLL;
    else
      v29 = v27;
    if ( v29 )
    {
      v30 = sub_100007F5C((char *)this + 72);
      v25 = (char *)*((_QWORD *)this + 7);
      v23 = (char *)*((_QWORD *)this + 8);
    }
    else
    {
      v30 = 0LL;
    }
    v31 = (_DWORD *)(v30 + 4 * v26);
    v32 = v30 + 4 * v29;
    *v31 = a3;
    v24 = v31 + 1;
    while ( v23 != v25 )
    {
      v33 = *((_DWORD *)v23 - 1);
      v23 -= 4;
      *--v31 = v33;
    }
    *((_QWORD *)this + 7) = v31;
    *((_QWORD *)this + 8) = v24;
    *((_QWORD *)this + 9) = v32;
    if ( v25 )
      operator delete(v25);
  }
  else
  {
    *(_DWORD *)v23 = a3;
    v24 = v23 + 4;
  }
  v34 = *((_QWORD *)this + 13);
  *((_QWORD *)this + 8) = v24;
  v35 = (char *)*((_QWORD *)this + 12);
  if ( (unsigned __int64)v35 < v34 )
  {
    *(_DWORD *)v35 = a4;
    v36 = v35 + 4;
    goto LABEL_49;
  }
  v12 = (char *)this + 88;
  v37 = (char *)*((_QWORD *)this + 11);
  v38 = (v35 - v37) >> 2;
  v39 = v38 + 1;
  if ( (unsigned __int64)(v38 + 1) >> 62 )
LABEL_50:
    sub_100007480(v12);
  v40 = v34 - (_QWORD)v37;
  if ( v40 >> 1 > v39 )
    v39 = v40 >> 1;
  if ( (unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFFCLL )
    v41 = 0x3FFFFFFFFFFFFFFFLL;
  else
    v41 = v39;
  if ( v41 )
  {
    v42 = sub_100007F5C((char *)this + 104);
    v37 = (char *)*((_QWORD *)this + 11);
    v35 = (char *)*((_QWORD *)this + 12);
  }
  else
  {
    v42 = 0LL;
  }
  v43 = (_DWORD *)(v42 + 4 * v38);
  v44 = v42 + 4 * v41;
  *v43 = a4;
  v36 = v43 + 1;
  while ( v35 != v37 )
  {
    v45 = *((_DWORD *)v35 - 1);
    v35 -= 4;
    *--v43 = v45;
  }
  *((_QWORD *)this + 11) = v43;
  *((_QWORD *)this + 12) = v36;
  *((_QWORD *)this + 13) = v44;
  if ( v37 )
    operator delete(v37);
LABEL_49:
  *((_QWORD *)this + 12) = v36;
}