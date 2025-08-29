__ZN12ObjConverter10createMeshERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPNS_5GroupES8_PN9serialize5StageE
void __fastcall ObjConverter::createMesh(ObjConverter *a1, __int64 a2, __int64 **a3, __int64 a4, _QWORD *a5)
{
  char *v5; // x25
  char *v11; // x19
  const std::string::value_type *p_p; // x1
  std::string::size_type v13; // x2
  std::string *v14; // x0
  std::string::size_type size; // x2
  void *v16; // x24
  int v17; // w21
  unsigned __int64 v18; // x8
  _QWORD *v19; // x21
  _QWORD *v20; // x21
  __int64 v21; // x9
  __int64 v22; // x21
  __int64 v23; // x8
  __int64 v24; // x9
  __int64 v25; // x1
  __int64 v26; // x0
  _QWORD *v27; // x9
  __int64 v28; // x8
  char *v29; // x0
  char *v30; // x10
  __int64 v31; // t1
  unsigned int *v32; // x8
  unsigned int *v33; // x9
  unsigned int *v34; // x10
  __int64 v35; // x23
  signed int v37; // w11
  unsigned int *v38; // x14
  unsigned int *v39; // x12
  unsigned int *v40; // x13
  signed int v41; // w15
  signed int v42; // t1
  __int64 v43; // x11
  int *v44; // x12
  int v45; // w13
  int v46; // t1
  bool v47; // cc
  unsigned int v48; // w8
  __int64 v49; // x24
  int *v50; // x8
  int *v51; // x9
  int *v52; // x10
  int v53; // w25
  int v54; // w11
  int *v55; // x14
  int *v56; // x12
  int *v57; // x13
  int v58; // w15
  int v59; // t1
  int v60; // w11
  int *v61; // x12
  int v62; // w13
  int v63; // t1
  bool v64; // cc
  __int64 v65; // x21
  int v66; // w26
  __int64 v67; // x27
  char *v68; // x24
  __int64 v69; // x22
  __int64 v70; // x24
  __int64 v71; // x0
  __int64 v72; // x1
  char *v73; // x9
  char *v74; // x8
  char *i; // x10
  __int64 v76; // t1
  unsigned int *v77; // x8
  __int64 *v78; // x9
  unsigned int *v79; // x10
  __int64 v80; // x23
  signed int v82; // w11
  unsigned int *v83; // x14
  unsigned int *v84; // x12
  unsigned int *v85; // x13
  signed int v86; // w15
  signed int v87; // t1
  __int64 v88; // x11
  int *v89; // x12
  int v90; // w13
  int v91; // t1
  bool v92; // cc
  unsigned int v93; // w8
  __int64 *v94; // x26
  __int64 *v95; // x27
  char *v96; // x8
  __int64 v97; // x21
  unsigned __int64 v98; // x23
  char *v99; // x22
  size_t v100; // x24
  void *v101; // x25
  const void *v102; // x1
  char **SerializeMaterial; // x0
  char *v104; // [xsp+0h] [xbp-B0h]
  void *v105; // [xsp+10h] [xbp-A0h] BYREF
  void *v106; // [xsp+18h] [xbp-98h]
  __int64 v107; // [xsp+20h] [xbp-90h]
  void *__p; // [xsp+28h] [xbp-88h] BYREF
  char *v109; // [xsp+30h] [xbp-80h]
  __int64 v110; // [xsp+38h] [xbp-78h] BYREF
  std::string v111; // [xsp+40h] [xbp-70h] BYREF
  char v112; // [xsp+5Fh] [xbp-51h] BYREF

  v5 = (char *)(a3 + 15);
  if ( a3[16] != a3[15] )
  {
    v11 = (char *)operator new(0x128uLL);
    sub_1000066A8(&v111, a2, 47LL);
    fileFormatUtils::makeValidIdentifier(&__p, a4);
    if ( v110 >= 0 )
      p_p = (const std::string::value_type *)&__p;
    else
      p_p = (const std::string::value_type *)__p;
    if ( v110 >= 0 )
      v13 = HIBYTE(v110);
    else
      v13 = (std::string::size_type)v109;
    v14 = std::string::append(&v111, p_p, v13);
    v16 = (void *)v14->__r_.__value_.__r.__words[0];
    size = v14->__r_.__value_.__l.__size_;
    LODWORD(v105) = v14->__r_.__value_.__r.__words[2];
    *(_DWORD *)((char *)&v105 + 3) = *(_DWORD *)((char *)&v14->__r_.__value_.__r.__words[2] + 3);
    v17 = SHIBYTE(v14->__r_.__value_.__r.__words[2]);
    v14->__r_.__value_.__l.__size_ = 0LL;
    v14->__r_.__value_.__r.__words[2] = 0LL;
    v14->__r_.__value_.__r.__words[0] = 0LL;
    *(_QWORD *)v11 = off_1000185F8;
    *((_DWORD *)v11 + 2) = 4;
    if ( v17 < 0 )
    {
      sub_100006E68(v11 + 16, v16);
    }
    else
    {
      *((_QWORD *)v11 + 2) = v16;
      *((_QWORD *)v11 + 3) = size;
      *((_DWORD *)v11 + 8) = (_DWORD)v105;
      *(_DWORD *)(v11 + 35) = *(_DWORD *)((char *)&v105 + 3);
      v11[39] = v17;
    }
    *((_QWORD *)v11 + 5) = 0LL;
    *((_QWORD *)v11 + 6) = 0LL;
    *((_QWORD *)v11 + 7) = 0LL;
    *(_QWORD *)v11 = &off_1000186C8;
    *((_OWORD *)v11 + 4) = 0u;
    *((_QWORD *)v11 + 35) = 0LL;
    *((_QWORD *)v11 + 36) = 0LL;
    *((_QWORD *)v11 + 34) = 0LL;
    *((_OWORD *)v11 + 5) = 0u;
    *((_OWORD *)v11 + 6) = 0u;
    *((_OWORD *)v11 + 7) = 0u;
    *((_OWORD *)v11 + 8) = 0u;
    *((_OWORD *)v11 + 9) = 0u;
    *((_OWORD *)v11 + 10) = 0u;
    *((_OWORD *)v11 + 11) = 0u;
    *((_OWORD *)v11 + 12) = 0u;
    *((_OWORD *)v11 + 13) = 0u;
    *((_OWORD *)v11 + 14) = 0u;
    *((_OWORD *)v11 + 15) = 0u;
    *(_OWORD *)(v11 + 252) = 0u;
    if ( v17 < 0 )
      operator delete(v16);
    if ( SHIBYTE(v110) < 0 )
      operator delete(__p);
    if ( SHIBYTE(v111.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v111.__r_.__value_.__l.__data_);
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
      *v27 = v11;
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
      *v19 = v11;
      v20 = v19 + 1;
    }
    a5[6] = v20;
    if ( v11 + 64 != v5 )
      sub_100008230((_DWORD)v11 + 64, a3[15]);
    v32 = (unsigned int *)a3[4];
    v33 = (unsigned int *)a3[5];
    v34 = v32 + 1;
    v35 = *v32;
    if ( v32 != v33 && v34 != v33 )
    {
      v37 = *v32;
      v38 = v32 + 1;
      v39 = (unsigned int *)a3[4];
      v40 = v32 + 1;
      do
      {
        v42 = *v40++;
        v41 = v42;
        if ( v42 < v37 )
        {
          v37 = v41;
          v39 = v38;
        }
        v38 = v40;
      }
      while ( v40 != v33 );
      v43 = *v39;
      v44 = (int *)(v32 + 1);
      do
      {
        v46 = *v44++;
        v45 = v46;
        v47 = (int)v35 < v46;
        if ( (int)v35 <= v46 )
          LODWORD(v35) = v45;
        if ( v47 )
          v32 = v34;
        v34 = (unsigned int *)v44;
      }
      while ( v44 != (int *)v33 );
      v35 = v43;
    }
    v48 = *v32;
    memset(&v111, 0, sizeof(v111));
    v49 = v48 + 1;
    sub_10000FBE0(&v111, (char *)a1 + 8, v35, v49);
    sub_10000801C(v11 + 160);
    if ( (_DWORD)v35 )
    {
      __p = 0LL;
      v109 = 0LL;
      v110 = 0LL;
      sub_10000FCA4(&__p, a3 + 4, (unsigned int)-(int)v35);
      sub_100008230((_DWORD)v11 + 64, __p);
      if ( __p )
      {
        v109 = (char *)__p;
        operator delete(__p);
      }
    }
    else if ( v11 + 88 != (char *)(a3 + 4) )
    {
      sub_100008230((_DWORD)v11 + 88, a3[4]);
    }
    if ( *((_QWORD *)a1 + 5) - *((_QWORD *)a1 + 4) == *((_QWORD *)a1 + 2) - *((_QWORD *)a1 + 1) )
    {
      __p = 0LL;
      v109 = 0LL;
      v110 = 0LL;
      sub_10000FBE0(&__p, (char *)a1 + 32, v35, v49);
      *((_DWORD *)v11 + 65) = 2;
      sub_10000801C(v11 + 208);
      if ( __p )
      {
        v109 = (char *)__p;
        operator delete(__p);
      }
    }
    v50 = (int *)a3[7];
    v51 = (int *)a3[8];
    v52 = v50 + 1;
    v53 = *v50;
    if ( v50 != v51 && v52 != v51 )
    {
      v54 = *v50;
      v55 = v50 + 1;
      v56 = (int *)a3[7];
      v57 = v50 + 1;
      do
      {
        v59 = *v57++;
        v58 = v59;
        if ( v59 < v54 )
        {
          v54 = v58;
          v56 = v55;
        }
        v55 = v57;
      }
      while ( v57 != v51 );
      v60 = *v56;
      v61 = v50 + 1;
      do
      {
        v63 = *v61++;
        v62 = v63;
        v64 = v53 < v63;
        if ( v53 <= v63 )
          v53 = v62;
        if ( v64 )
          v50 = v52;
        v52 = v61;
      }
      while ( v61 != v51 );
      v53 = v60;
    }
    if ( (v53 & 0x80000000) == 0 )
    {
      v104 = (char *)(a3 + 7);
      v65 = *v50;
      __p = 0LL;
      v109 = 0LL;
      v110 = 0LL;
      sub_100011F48(&__p, 0LL);
      if ( (__int64)(*((_QWORD *)a1 + 8) - *((_QWORD *)a1 + 7)) >> 3 >= (unsigned __int64)(v65 + 1) )
        v66 = v65 + 1;
      else
        v66 = (__int64)(*((_QWORD *)a1 + 8) - *((_QWORD *)a1 + 7)) >> 3;
      sub_100011F78(&__p, v66 - v53);
      if ( v66 <= v53 )
      {
        v68 = v109;
      }
      else
      {
        v67 = (unsigned int)v53;
        v68 = v109;
        do
        {
          v69 = *((_QWORD *)a1 + 7);
          if ( (unsigned __int64)v68 >= v110 )
          {
            v70 = (v68 - (_BYTE *)__p) >> 3;
            if ( (unsigned __int64)(v70 + 1) >> 61 )
              sub_100007480(&__p);
            v71 = sub_100008574(&v110);
            v73 = (char *)(v71 + 8 * v70);
            *(_QWORD *)v73 = *(_QWORD *)(v69 + 8 * v67);
            v68 = v73 + 8;
            v74 = (char *)__p;
            for ( i = v109; i != v74; i -= 8 )
            {
              v76 = *((_QWORD *)i - 1);
              *((_QWORD *)v73 - 1) = v76;
              v73 -= 8;
            }
            __p = v73;
            v109 = v68;
            v110 = v71 + 8 * v72;
            if ( v74 )
              operator delete(v74);
          }
          else
          {
            *(_QWORD *)v68 = *(_QWORD *)(v69 + 8 * v67);
            v68 += 8;
          }
          v109 = v68;
          ++v67;
        }
        while ( v66 != (_DWORD)v67 );
      }
      sub_100009D44(v11 + 232, __p, v68, (v68 - (_BYTE *)__p) >> 3);
      if ( *((_BYTE *)a3 + 80) )
      {
        *((_DWORD *)v11 + 66) = 3;
        if ( v53 )
        {
          v105 = 0LL;
          v106 = 0LL;
          v107 = 0LL;
          sub_10000FCA4(&v105, v104, (unsigned int)-v53);
          sub_100008230((_DWORD)v11 + 112, v105);
          if ( v105 )
          {
            v106 = v105;
            operator delete(v105);
          }
        }
        else if ( v11 + 112 != v104 )
        {
          sub_100008230((_DWORD)v11 + 112, a3[7]);
        }
      }
      else
      {
        *((_DWORD *)v11 + 66) = 2;
      }
      if ( __p )
      {
        v109 = (char *)__p;
        operator delete(__p);
      }
    }
    v77 = (unsigned int *)a3[11];
    v78 = a3[12];
    v79 = v77 + 1;
    v80 = *v77;
    if ( v77 != (unsigned int *)v78 && v79 != (unsigned int *)v78 )
    {
      v82 = *v77;
      v83 = v77 + 1;
      v84 = (unsigned int *)a3[11];
      v85 = v77 + 1;
      do
      {
        v87 = *v85++;
        v86 = v87;
        if ( v87 < v82 )
        {
          v82 = v86;
          v84 = v83;
        }
        v83 = v85;
      }
      while ( v85 != (unsigned int *)v78 );
      v88 = *v84;
      v89 = (int *)(v77 + 1);
      do
      {
        v91 = *v89++;
        v90 = v91;
        v92 = (int)v80 < v91;
        if ( (int)v80 <= v91 )
          LODWORD(v80) = v90;
        if ( v92 )
          v77 = v79;
        v79 = (unsigned int *)v89;
      }
      while ( v89 != (int *)v78 );
      v80 = v88;
    }
    if ( (v80 & 0x80000000) == 0 )
    {
      v93 = *v77;
      __p = 0LL;
      v109 = 0LL;
      v110 = 0LL;
      sub_10000FBE0(&__p, (char *)a1 + 80, v80, v93 + 1);
      sub_10000801C(v11 + 184);
      if ( *((_BYTE *)a3 + 112) )
      {
        *((_DWORD *)v11 + 64) = 3;
        if ( (_DWORD)v80 )
        {
          v105 = 0LL;
          v106 = 0LL;
          v107 = 0LL;
          sub_10000FCA4(&v105, a3 + 11, (unsigned int)-(int)v80);
          sub_100008230((_DWORD)v11 + 136, v105);
          if ( v105 )
          {
            v106 = v105;
            operator delete(v105);
          }
        }
        else if ( v11 + 136 != (char *)(a3 + 11) )
        {
          sub_100008230((_DWORD)v11 + 136, a3[11]);
        }
      }
      else
      {
        *((_DWORD *)v11 + 64) = 2;
      }
      if ( __p )
      {
        v109 = (char *)__p;
        operator delete(__p);
      }
    }
    v94 = *a3;
    v95 = a3[1];
    if ( (char *)v95 - (char *)*a3 == 8 )
    {
      v96 = *ObjConverter::getSerializeMaterial(a1, *(_DWORD *)(*v94 + 24));
      if ( v96 )
        std::string::operator=((std::string *)(v11 + 272), (const std::string *)(v96 + 16));
    }
    else
    {
      for ( ; v94 != v95; ++v94 )
      {
        v97 = *v94;
        if ( *(_QWORD *)(*v94 + 8) != *(_QWORD *)*v94 )
        {
          v98 = *(unsigned int *)(v97 + 24);
          if ( (v98 & 0x80000000) != 0 || v98 >= (__int64)(*((_QWORD *)a1 + 28) - *((_QWORD *)a1 + 27)) >> 3 )
            sub_100009C90((int)&__p, "defaultMaterial");
          else
            fileFormatUtils::makeValidIdentifier(&__p, *((_QWORD *)a1 + 17) + 24LL * (unsigned int)v98);
          v99 = (char *)operator new(0x88uLL);
          if ( v110 >= 0 )
            v100 = HIBYTE(v110);
          else
            v100 = (size_t)v109;
          sub_100007F94(&v105, v100 + 6, &v112);
          if ( v107 >= 0 )
            v101 = &v105;
          else
            v101 = v105;
          if ( v100 )
          {
            if ( v110 >= 0 )
              v102 = &__p;
            else
              v102 = __p;
            memmove(v101, v102, v100);
          }
          strcpy((char *)v101 + v100, "Subset");
          sub_100009890(v99, &v105);
          if ( SHIBYTE(v107) < 0 )
            operator delete(v105);
          if ( v99 + 64 != (char *)v97 )
            sub_100008230((_DWORD)v99 + 64, *(void **)v97);
          SerializeMaterial = ObjConverter::getSerializeMaterial(a1, v98);
          std::string::operator=((std::string *)(v99 + 112), (const std::string *)(*SerializeMaterial + 16));
          serialize::Prim::addChild((serialize::Prim *)v11, (serialize::Prim *)v99);
          if ( SHIBYTE(v110) < 0 )
            operator delete(__p);
        }
      }
    }
    if ( v111.__r_.__value_.__r.__words[0] )
    {
      v111.__r_.__value_.__l.__size_ = v111.__r_.__value_.__r.__words[0];
      operator delete(v111.__r_.__value_.__l.__data_);
    }
  }
}