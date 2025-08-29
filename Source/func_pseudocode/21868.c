__ZN15fileFormatUtils11fixExponentERNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
void __fastcall fileFormatUtils::fixExponent(std::string *a1)
{
  char *size; // x8
  std::string::size_type v3; // x24
  char *v4; // x21
  signed __int64 v5; // x20
  char *v6; // x25
  int v7; // w22
  void *v8; // x0
  char *v9; // x8
  char *v10; // x0
  char *v11; // x23
  std::string::size_type v12; // x1
  const std::string::value_type *p_p; // x3
  std::string::size_type v14; // x4
  char *v15; // x8
  std::string::size_type v16; // x24
  char *v17; // x21
  signed __int64 v18; // x20
  char *v19; // x25
  int v20; // w22
  void *v21; // x0
  char *v22; // x8
  char *v23; // x0
  char *v24; // x23
  std::string::size_type v25; // x1
  const std::string::value_type *v26; // x3
  std::string::size_type v27; // x4
  char *v28; // x8
  std::string::size_type v29; // x24
  char *v30; // x21
  signed __int64 v31; // x20
  char *v32; // x25
  int v33; // w22
  void *v34; // x0
  char *v35; // x8
  char *v36; // x0
  char *v37; // x23
  std::string::size_type v38; // x1
  const std::string::value_type *v39; // x3
  std::string::size_type v40; // x4
  char *v41; // x8
  std::string::size_type v42; // x24
  char *v43; // x21
  signed __int64 v44; // x20
  char *v45; // x25
  int v46; // w22
  void *v47; // x0
  char *v48; // x8
  char *v49; // x0
  char *v50; // x23
  std::string::size_type v51; // x1
  const std::string::value_type *v52; // x3
  std::string::size_type v53; // x4
  void *__p; // [xsp+0h] [xbp-70h] BYREF
  std::string::size_type v55; // [xsp+8h] [xbp-68h]
  unsigned __int8 v56; // [xsp+17h] [xbp-59h]
  void *v57; // [xsp+18h] [xbp-58h] BYREF
  signed __int64 v58; // [xsp+20h] [xbp-50h]
  unsigned __int8 v59; // [xsp+2Fh] [xbp-41h]

  sub_100009C90((int)&v57, "+e");
  sub_100009C90((int)&__p, "e+");
  size = (char *)HIBYTE(a1->__r_.__value_.__r.__words[2]);
  if ( (char)size >= 0 )
    v3 = (std::string::size_type)a1;
  else
    v3 = a1->__r_.__value_.__r.__words[0];
  if ( (v59 & 0x80u) == 0 )
    v4 = (char *)&v57;
  else
    v4 = (char *)v57;
  if ( (v59 & 0x80u) == 0 )
    v5 = v59;
  else
    v5 = v58;
  if ( v5 )
  {
    if ( (char)size < 0 )
      size = (char *)a1->__r_.__value_.__l.__size_;
    if ( (__int64)size >= v5 )
    {
      v6 = &size[v3];
      v7 = *v4;
      v8 = (void *)v3;
      do
      {
        v9 = &size[-v5];
        if ( v9 == (char *)-1LL )
          break;
        v10 = (char *)memchr(v8, v7, (size_t)(v9 + 1));
        if ( !v10 )
          break;
        v11 = v10;
        if ( !memcmp(v10, v4, v5) )
        {
          if ( v11 != v6 )
          {
            v12 = (std::string::size_type)&v11[-v3];
            if ( &v11[-v3] != (char *)-1LL )
              goto LABEL_21;
          }
          break;
        }
        v8 = v11 + 1;
        size = (char *)(v6 - (v11 + 1));
      }
      while ( (__int64)size >= v5 );
    }
  }
  else
  {
    v12 = 0LL;
LABEL_21:
    if ( (v56 & 0x80u) == 0 )
      p_p = (const std::string::value_type *)&__p;
    else
      p_p = (const std::string::value_type *)__p;
    if ( (v56 & 0x80u) == 0 )
      v14 = v56;
    else
      v14 = v55;
    std::string::replace(a1, v12, v5, p_p, v14);
  }
  if ( (char)v56 < 0 )
    operator delete(__p);
  if ( (char)v59 < 0 )
    operator delete(v57);
  sub_100009C90((int)&v57, "+E");
  sub_100009C90((int)&__p, "e+");
  v15 = (char *)HIBYTE(a1->__r_.__value_.__r.__words[2]);
  if ( (char)v15 >= 0 )
    v16 = (std::string::size_type)a1;
  else
    v16 = a1->__r_.__value_.__r.__words[0];
  if ( (v59 & 0x80u) == 0 )
    v17 = (char *)&v57;
  else
    v17 = (char *)v57;
  if ( (v59 & 0x80u) == 0 )
    v18 = v59;
  else
    v18 = v58;
  if ( v18 )
  {
    if ( (char)v15 < 0 )
      v15 = (char *)a1->__r_.__value_.__l.__size_;
    if ( (__int64)v15 >= v18 )
    {
      v19 = &v15[v16];
      v20 = *v17;
      v21 = (void *)v16;
      do
      {
        v22 = &v15[-v18];
        if ( v22 == (char *)-1LL )
          break;
        v23 = (char *)memchr(v21, v20, (size_t)(v22 + 1));
        if ( !v23 )
          break;
        v24 = v23;
        if ( !memcmp(v23, v17, v18) )
        {
          if ( v24 != v19 )
          {
            v25 = (std::string::size_type)&v24[-v16];
            if ( &v24[-v16] != (char *)-1LL )
              goto LABEL_52;
          }
          break;
        }
        v21 = v24 + 1;
        v15 = (char *)(v19 - (v24 + 1));
      }
      while ( (__int64)v15 >= v18 );
    }
  }
  else
  {
    v25 = 0LL;
LABEL_52:
    if ( (v56 & 0x80u) == 0 )
      v26 = (const std::string::value_type *)&__p;
    else
      v26 = (const std::string::value_type *)__p;
    if ( (v56 & 0x80u) == 0 )
      v27 = v56;
    else
      v27 = v55;
    std::string::replace(a1, v25, v18, v26, v27);
  }
  if ( (char)v56 < 0 )
    operator delete(__p);
  if ( (char)v59 < 0 )
    operator delete(v57);
  sub_100009C90((int)&v57, "-e");
  sub_100009C90((int)&__p, "e-");
  v28 = (char *)HIBYTE(a1->__r_.__value_.__r.__words[2]);
  if ( (char)v28 >= 0 )
    v29 = (std::string::size_type)a1;
  else
    v29 = a1->__r_.__value_.__r.__words[0];
  if ( (v59 & 0x80u) == 0 )
    v30 = (char *)&v57;
  else
    v30 = (char *)v57;
  if ( (v59 & 0x80u) == 0 )
    v31 = v59;
  else
    v31 = v58;
  if ( v31 )
  {
    if ( (char)v28 < 0 )
      v28 = (char *)a1->__r_.__value_.__l.__size_;
    if ( (__int64)v28 >= v31 )
    {
      v32 = &v28[v29];
      v33 = *v30;
      v34 = (void *)v29;
      do
      {
        v35 = &v28[-v31];
        if ( v35 == (char *)-1LL )
          break;
        v36 = (char *)memchr(v34, v33, (size_t)(v35 + 1));
        if ( !v36 )
          break;
        v37 = v36;
        if ( !memcmp(v36, v30, v31) )
        {
          if ( v37 != v32 )
          {
            v38 = (std::string::size_type)&v37[-v29];
            if ( &v37[-v29] != (char *)-1LL )
              goto LABEL_83;
          }
          break;
        }
        v34 = v37 + 1;
        v28 = (char *)(v32 - (v37 + 1));
      }
      while ( (__int64)v28 >= v31 );
    }
  }
  else
  {
    v38 = 0LL;
LABEL_83:
    if ( (v56 & 0x80u) == 0 )
      v39 = (const std::string::value_type *)&__p;
    else
      v39 = (const std::string::value_type *)__p;
    if ( (v56 & 0x80u) == 0 )
      v40 = v56;
    else
      v40 = v55;
    std::string::replace(a1, v38, v31, v39, v40);
  }
  if ( (char)v56 < 0 )
    operator delete(__p);
  if ( (char)v59 < 0 )
    operator delete(v57);
  sub_100009C90((int)&v57, "-E");
  sub_100009C90((int)&__p, "e-");
  v41 = (char *)HIBYTE(a1->__r_.__value_.__r.__words[2]);
  if ( (char)v41 >= 0 )
    v42 = (std::string::size_type)a1;
  else
    v42 = a1->__r_.__value_.__r.__words[0];
  if ( (v59 & 0x80u) == 0 )
    v43 = (char *)&v57;
  else
    v43 = (char *)v57;
  if ( (v59 & 0x80u) == 0 )
    v44 = v59;
  else
    v44 = v58;
  if ( v44 )
  {
    if ( (char)v41 < 0 )
      v41 = (char *)a1->__r_.__value_.__l.__size_;
    if ( (__int64)v41 >= v44 )
    {
      v45 = &v41[v42];
      v46 = *v43;
      v47 = (void *)v42;
      do
      {
        v48 = &v41[-v44];
        if ( v48 == (char *)-1LL )
          break;
        v49 = (char *)memchr(v47, v46, (size_t)(v48 + 1));
        if ( !v49 )
          break;
        v50 = v49;
        if ( !memcmp(v49, v43, v44) )
        {
          if ( v50 != v45 )
          {
            v51 = (std::string::size_type)&v50[-v42];
            if ( &v50[-v42] != (char *)-1LL )
              goto LABEL_114;
          }
          break;
        }
        v47 = v50 + 1;
        v41 = (char *)(v45 - (v50 + 1));
      }
      while ( (__int64)v41 >= v44 );
    }
  }
  else
  {
    v51 = 0LL;
LABEL_114:
    if ( (v56 & 0x80u) == 0 )
      v52 = (const std::string::value_type *)&__p;
    else
      v52 = (const std::string::value_type *)__p;
    if ( (v56 & 0x80u) == 0 )
      v53 = v56;
    else
      v53 = v55;
    std::string::replace(a1, v51, v44, v52, v53);
  }
  if ( (char)v56 < 0 )
    operator delete(__p);
  if ( (char)v59 < 0 )
    operator delete(v57);
}