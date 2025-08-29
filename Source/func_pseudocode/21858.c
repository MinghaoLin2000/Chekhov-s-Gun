__ZN12ObjConverter7addFaceERNSt3__119basic_istringstreamIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
__int64 __fastcall ObjConverter::addFace(_QWORD *a1, __int64 a2)
{
  int v4; // w25
  __int64 v5; // x21
  unsigned __int64 v6; // x8
  unsigned __int64 v7; // x9
  __int64 v8; // x0
  _QWORD *v9; // x0
  _OWORD *v10; // x22
  __int128 v11; // q0
  _OWORD *v12; // x0
  int v13; // w28
  int v14; // w0
  int v15; // w22
  int v16; // w3
  ObjConverter::Group *v17; // x0
  _QWORD *v18; // x8
  __int64 v19; // x20
  __int64 v20; // x21
  _DWORD *v21; // x9
  unsigned __int64 v22; // x10
  _DWORD *v23; // x22
  _DWORD *v24; // x0
  __int64 v25; // x22
  unsigned __int64 v26; // x11
  __int64 v27; // x10
  __int64 v28; // x1
  __int64 v29; // x8
  _DWORD *v30; // x10
  __int64 v31; // x8
  int v32; // t1
  _QWORD *v33; // x19
  int *v34; // x10
  unsigned __int64 v35; // x11
  _DWORD *v36; // x20
  int *v37; // x0
  __int64 v38; // x20
  unsigned __int64 v39; // x12
  __int64 v40; // x11
  __int64 v41; // x1
  __int64 v42; // x8
  int *v43; // x9
  __int64 v44; // x8
  int v45; // t1
  __int64 v47; // [xsp+8h] [xbp-1D8h]
  __int64 v48; // [xsp+10h] [xbp-1D0h]
  __int64 v49; // [xsp+20h] [xbp-1C0h]
  void *v50[2]; // [xsp+28h] [xbp-1B8h] BYREF
  __int64 v51; // [xsp+38h] [xbp-1A8h]
  __int64 v52; // [xsp+40h] [xbp-1A0h] BYREF
  _OWORD *v53; // [xsp+48h] [xbp-198h]
  unsigned __int64 v54; // [xsp+50h] [xbp-190h]
  void *__p[2]; // [xsp+58h] [xbp-188h] BYREF
  __int64 v56; // [xsp+68h] [xbp-178h]
  _QWORD v57[3]; // [xsp+70h] [xbp-170h] BYREF
  _QWORD v58[10]; // [xsp+88h] [xbp-158h] BYREF
  char v59; // [xsp+DFh] [xbp-101h]
  __int64 v60; // [xsp+F0h] [xbp-F0h] BYREF

  v4 = 0;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v5 = a2 + 16;
  v49 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[0];
  v47 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[9];
  v48 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[8];
  do
  {
    v6 = *(_QWORD *)(a2 + 40);
    v7 = *(_QWORD *)(a2 + 48);
    if ( v6 >= v7 )
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
    else
      v8 = v7 - v6;
    if ( !v8 )
      break;
    v50[0] = 0LL;
    v50[1] = 0LL;
    v51 = 0LL;
    sub_1000052A0(a2, v50);
    sub_1000102E4(&v52, 0LL);
    sub_100010384(v57, v50, 24LL);
    __p[0] = 0LL;
    __p[1] = 0LL;
    v56 = 0LL;
    while ( 1 )
    {
      v9 = (_QWORD *)sub_100006FE4(v57, __p, 47LL);
      if ( (*((_BYTE *)v9 + *(_QWORD *)(*v9 - 24LL) + 32) & 5) != 0 )
        break;
      v10 = v53;
      if ( (unsigned __int64)v53 >= v54 )
      {
        v12 = (_OWORD *)sub_100010E6C(&v52, __p);
      }
      else
      {
        if ( SHIBYTE(v56) < 0 )
        {
          sub_100006E68(v53, __p[0]);
        }
        else
        {
          v11 = *(_OWORD *)__p;
          *((_QWORD *)v53 + 2) = v56;
          *v10 = v11;
        }
        v12 = (_OWORD *)((char *)v10 + 24);
      }
      v53 = v12;
    }
    if ( SHIBYTE(v56) < 0 )
      operator delete(__p[0]);
    v57[0] = v49;
    *(_QWORD *)((char *)v57 + *(_QWORD *)(v49 - 24)) = v48;
    v57[2] = v47;
    v58[0] = &`vtable for'std::stringbuf.~basic_stringbuf;
    if ( v59 < 0 )
      operator delete((void *)v58[8]);
    std::streambuf::~streambuf(v58);
    std::iostream::~basic_iostream(
      v57,
      &`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1]);
    std::ios::~ios(&v60);
    v13 = sub_10000D600(v52, -1431655765 * (unsigned int)((a1[2] - a1[1]) >> 2));
    if ( v13 != -1 )
    {
      if ( 0xAAAAAAAAAAAAAAABLL * (((__int64)v53 - v52) >> 3) < 2 )
      {
        v15 = -1;
      }
      else
      {
        v14 = sub_10000D600(v52 + 24, (a1[8] - a1[7]) >> 3);
        v15 = v13;
        if ( v14 != v13 )
        {
          *(_BYTE *)(a1[16] + 80LL) = 1;
          v15 = v14;
        }
      }
      if ( 0xAAAAAAAAAAAAAAABLL * (((__int64)v53 - v52) >> 3) <= 2 )
      {
        v17 = (ObjConverter::Group *)a1[16];
        v16 = -1;
      }
      else
      {
        v16 = sub_10000D600(v52 + 48, -1431655765 * (unsigned int)((a1[11] - a1[10]) >> 2));
        v17 = (ObjConverter::Group *)a1[16];
        if ( v16 == v13 )
          v16 = v13;
        else
          *((_BYTE *)v17 + 112) = 1;
      }
      ObjConverter::Group::appendIndices(v17, v13, v15, v16);
      ++v4;
    }
    if ( SHIBYTE(v51) < 0 )
      operator delete(v50[0]);
  }
  while ( v13 != -1 );
  if ( v4 >= 1 )
  {
    v18 = (_QWORD *)a1[16];
    v19 = v18[3];
    v20 = (v18[16] - v18[15]) >> 2;
    v21 = *(_DWORD **)(v19 + 8);
    v22 = *(_QWORD *)(v19 + 16);
    if ( (unsigned __int64)v21 >= v22 )
    {
      v24 = *(_DWORD **)v19;
      v25 = ((__int64)v21 - *(_QWORD *)v19) >> 2;
      v26 = v25 + 1;
      if ( (unsigned __int64)(v25 + 1) >> 62 )
        sub_100007480(v19);
      v27 = v22 - (_QWORD)v24;
      if ( v27 >> 1 > v26 )
        v26 = v27 >> 1;
      if ( (unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFFCLL )
        v28 = 0x3FFFFFFFFFFFFFFFLL;
      else
        v28 = v26;
      if ( v28 )
      {
        v29 = sub_100007F5C(v19 + 16);
        v24 = *(_DWORD **)v19;
        v21 = *(_DWORD **)(v19 + 8);
      }
      else
      {
        v29 = 0LL;
      }
      v30 = (_DWORD *)(v29 + 4 * v25);
      v31 = v29 + 4 * v28;
      *v30 = v20;
      v23 = v30 + 1;
      while ( v21 != v24 )
      {
        v32 = *--v21;
        *--v30 = v32;
      }
      *(_QWORD *)v19 = v30;
      *(_QWORD *)(v19 + 8) = v23;
      *(_QWORD *)(v19 + 16) = v31;
      if ( v24 )
        operator delete(v24);
    }
    else
    {
      *v21 = v20;
      v23 = v21 + 1;
    }
    *(_QWORD *)(v19 + 8) = v23;
    v33 = (_QWORD *)a1[16];
    v34 = (int *)v33[16];
    v35 = v33[17];
    if ( (unsigned __int64)v34 >= v35 )
    {
      v37 = (int *)v33[15];
      v38 = v34 - v37;
      v39 = v38 + 1;
      if ( (unsigned __int64)(v38 + 1) >> 62 )
        sub_100007480(v33 + 15);
      v40 = v35 - (_QWORD)v37;
      if ( v40 >> 1 > v39 )
        v39 = v40 >> 1;
      if ( (unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFFCLL )
        v41 = 0x3FFFFFFFFFFFFFFFLL;
      else
        v41 = v39;
      if ( v41 )
      {
        v42 = sub_100007F5C(v33 + 17);
        v37 = (int *)v33[15];
        v34 = (int *)v33[16];
      }
      else
      {
        v42 = 0LL;
      }
      v43 = (int *)(v42 + 4 * v38);
      v44 = v42 + 4 * v41;
      *v43 = v4;
      v36 = v43 + 1;
      while ( v34 != v37 )
      {
        v45 = *--v34;
        *--v43 = v45;
      }
      v33[15] = v43;
      v33[16] = v36;
      v33[17] = v44;
      if ( v37 )
        operator delete(v37);
    }
    else
    {
      *v34 = v4;
      v36 = v34 + 1;
    }
    v33[16] = v36;
  }
  v57[0] = &v52;
  return sub_100010FF4(v57);
}