__ZNK12StlConverter10createMeshERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKNS_5SolidEPN9serialize3MatEPNSC_5StageE
void __fastcall StlConverter::createMesh(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  char *v5; // x25
  char *v10; // x19
  int v11; // w9
  const std::string::value_type *v12; // x1
  std::string::size_type v13; // x2
  std::string *v14; // x0
  std::string::size_type size; // x2
  void *v16; // x24
  int v17; // w26
  unsigned __int64 v18; // x8
  _QWORD *v19; // x26
  _QWORD *v20; // x26
  __int64 v21; // x9
  __int64 v22; // x26
  __int64 v23; // x8
  __int64 v24; // x9
  __int64 v25; // x1
  __int64 v26; // x0
  _QWORD *v27; // x9
  __int64 v28; // x8
  char *v29; // x0
  char *v30; // x10
  __int64 v31; // t1
  void **v32; // x22
  unsigned __int64 v33; // x25
  _QWORD *v34; // x23
  char *v35; // x9
  char *v36; // x28
  char *v37; // x0
  __int64 v38; // x28
  unsigned __int64 v39; // x10
  __int64 v40; // x8
  __int64 v41; // x1
  __int64 v42; // x8
  _DWORD *v43; // x10
  int v44; // t1
  std::string __p; // [xsp+0h] [xbp-70h] BYREF
  _DWORD v46[2]; // [xsp+18h] [xbp-58h]

  v5 = (char *)(a3 + 72);
  if ( *(_QWORD *)(a3 + 80) != *(_QWORD *)(a3 + 72) )
  {
    v10 = (char *)operator new(0x128uLL);
    sub_1000066A8(&__p, a2, 47LL);
    v11 = *(char *)(a3 + 23);
    if ( v11 >= 0 )
      v12 = (const std::string::value_type *)a3;
    else
      v12 = *(const std::string::value_type **)a3;
    if ( v11 >= 0 )
      v13 = *(unsigned __int8 *)(a3 + 23);
    else
      v13 = *(_QWORD *)(a3 + 8);
    v14 = std::string::append(&__p, v12, v13);
    v16 = (void *)v14->__r_.__value_.__r.__words[0];
    size = v14->__r_.__value_.__l.__size_;
    v46[0] = v14->__r_.__value_.__r.__words[2];
    *(_DWORD *)((char *)v46 + 3) = *(_DWORD *)((char *)&v14->__r_.__value_.__r.__words[2] + 3);
    v17 = SHIBYTE(v14->__r_.__value_.__r.__words[2]);
    v14->__r_.__value_.__l.__size_ = 0LL;
    v14->__r_.__value_.__r.__words[2] = 0LL;
    v14->__r_.__value_.__r.__words[0] = 0LL;
    *(_QWORD *)v10 = off_1000185F8;
    *((_DWORD *)v10 + 2) = 4;
    if ( v17 < 0 )
    {
      sub_100006E68(v10 + 16, v16);
    }
    else
    {
      *((_QWORD *)v10 + 2) = v16;
      *((_QWORD *)v10 + 3) = size;
      *((_DWORD *)v10 + 8) = v46[0];
      *(_DWORD *)(v10 + 35) = *(_DWORD *)((char *)v46 + 3);
      v10[39] = v17;
    }
    *((_QWORD *)v10 + 5) = 0LL;
    *((_QWORD *)v10 + 6) = 0LL;
    *((_QWORD *)v10 + 7) = 0LL;
    *(_QWORD *)v10 = &off_1000186C8;
    *((_OWORD *)v10 + 4) = 0u;
    *((_QWORD *)v10 + 35) = 0LL;
    *((_QWORD *)v10 + 36) = 0LL;
    *((_QWORD *)v10 + 34) = 0LL;
    *((_OWORD *)v10 + 5) = 0u;
    *((_OWORD *)v10 + 6) = 0u;
    *((_OWORD *)v10 + 7) = 0u;
    *((_OWORD *)v10 + 8) = 0u;
    *((_OWORD *)v10 + 9) = 0u;
    *((_OWORD *)v10 + 10) = 0u;
    *((_OWORD *)v10 + 11) = 0u;
    *((_OWORD *)v10 + 12) = 0u;
    *((_OWORD *)v10 + 13) = 0u;
    *((_OWORD *)v10 + 14) = 0u;
    *((_OWORD *)v10 + 15) = 0u;
    *(_OWORD *)(v10 + 252) = 0u;
    if ( v17 < 0 )
      operator delete(v16);
    if ( SHIBYTE(__p.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(__p.__r_.__value_.__l.__data_);
    v18 = a5[7];
    v19 = (_QWORD *)a5[6];
    if ( (unsigned __int64)v19 >= v18 )
    {
      v21 = a5[5];
      v22 = ((__int64)v19 - v21) >> 3;
      if ( (unsigned __int64)(v22 + 1) >> 61 )
        sub_100007480(a5 + 5);
      v23 = v18 - v21;
      v24 = v23 >> 2;
      if ( v23 >> 2 <= (unsigned __int64)(v22 + 1) )
        v24 = v22 + 1;
      if ( (unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL )
        v25 = 0x1FFFFFFFFFFFFFFFLL;
      else
        v25 = v24;
      if ( v25 )
        v26 = sub_100008574(a5 + 7);
      else
        v26 = 0LL;
      v27 = (_QWORD *)(v26 + 8 * v22);
      v28 = v26 + 8 * v25;
      *v27 = v10;
      v20 = v27 + 1;
      v30 = (char *)a5[5];
      v29 = (char *)a5[6];
      if ( v29 != v30 )
      {
        do
        {
          v31 = *((_QWORD *)v29 - 1);
          v29 -= 8;
          *--v27 = v31;
        }
        while ( v29 != v30 );
        v29 = (char *)a5[5];
      }
      a5[5] = v27;
      a5[6] = v20;
      a5[7] = v28;
      if ( v29 )
        operator delete(v29);
    }
    else
    {
      *v19 = v10;
      v20 = v19 + 1;
    }
    a5[6] = v20;
    if ( v10 + 64 != v5 )
      sub_100008230((_DWORD)v10 + 64, *(void **)(a3 + 72));
    if ( v10 + 160 != (char *)(a3 + 24) )
      sub_10000801C(v10 + 160);
    v32 = (void **)(v10 + 88);
    sub_1000063CC(v10 + 88, 0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD *)(a3 + 32) - *(_QWORD *)(a3 + 24)) >> 2));
    if ( *(_QWORD *)(a3 + 32) != *(_QWORD *)(a3 + 24) )
    {
      v33 = 0LL;
      v34 = v10 + 104;
      v35 = (char *)*((_QWORD *)v10 + 12);
      do
      {
        if ( (unsigned __int64)v35 >= *v34 )
        {
          v37 = (char *)*v32;
          v38 = (v35 - (_BYTE *)*v32) >> 2;
          v39 = v38 + 1;
          if ( (unsigned __int64)(v38 + 1) >> 62 )
            sub_100007480(v10 + 88);
          v40 = *v34 - (_QWORD)v37;
          if ( v40 >> 1 > v39 )
            v39 = v40 >> 1;
          if ( (unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFFCLL )
            v41 = 0x3FFFFFFFFFFFFFFFLL;
          else
            v41 = v39;
          if ( v41 )
          {
            v42 = sub_100007F5C(v10 + 104);
            v37 = (char *)*((_QWORD *)v10 + 11);
            v35 = (char *)*((_QWORD *)v10 + 12);
          }
          else
          {
            v42 = 0LL;
          }
          v43 = (_DWORD *)(v42 + 4 * v38);
          *v43 = v33;
          v36 = (char *)(v43 + 1);
          while ( v35 != v37 )
          {
            v44 = *((_DWORD *)v35 - 1);
            v35 -= 4;
            *--v43 = v44;
          }
          *((_QWORD *)v10 + 11) = v43;
          *((_QWORD *)v10 + 12) = v36;
          *((_QWORD *)v10 + 13) = v42 + 4 * v41;
          if ( v37 )
            operator delete(v37);
        }
        else
        {
          *(_DWORD *)v35 = v33;
          v36 = v35 + 4;
        }
        *((_QWORD *)v10 + 12) = v36;
        ++v33;
        v35 = v36;
      }
      while ( 0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD *)(a3 + 32) - *(_QWORD *)(a3 + 24)) >> 2) > v33 );
    }
    if ( v10 + 184 != (char *)(a3 + 48) )
      sub_10000801C(v10 + 184);
    *((_DWORD *)v10 + 64) = 1;
    std::string::operator=((std::string *)(v10 + 272), (const std::string *)(a4 + 16));
  }
}