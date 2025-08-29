__ZN12StlConverter8addSolidERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
void __fastcall StlConverter::addSolid(_QWORD *a1, __int64 a2)
{
  char **v3; // x20
  __int64 v4; // x25
  __int64 v5; // x26
  __int64 v6; // x27
  size_t v7; // x22
  const void *v8; // x23
  size_t v9; // x21
  __int64 v10; // x10
  int v11; // w9
  unsigned __int8 *v12; // x1
  unsigned __int8 *v13; // x8
  __int64 v14; // x9
  std::string *v15; // x22
  _BYTE *v16; // x1
  std::string *v17; // x1
  std::string::size_type size; // x2
  std::string *v19; // x0
  std::string::size_type v20; // x21
  char v21; // w22
  _QWORD *v22; // x0
  _QWORD *v23; // x21
  unsigned __int64 v24; // x8
  _QWORD *v25; // x22
  _QWORD *v26; // x22
  __int64 v27; // x22
  __int64 v28; // x8
  __int64 v29; // x9
  __int64 v30; // x1
  __int64 v31; // x0
  _QWORD *v32; // x9
  __int64 v33; // x8
  char *v34; // x0
  char *v35; // x10
  __int64 v36; // t1
  std::string v37; // [xsp+0h] [xbp-B0h] BYREF
  std::string v38; // [xsp+18h] [xbp-98h] BYREF
  _BYTE __p[24]; // [xsp+30h] [xbp-80h] BYREF
  _QWORD v40[2]; // [xsp+48h] [xbp-68h]

  fileFormatUtils::makeValidIdentifier(__p, a2);
  v4 = a1[1];
  v5 = a1[2];
  v3 = (char **)(a1 + 1);
  if ( v4 == v5 )
    goto LABEL_39;
  v6 = __p[23];
  v8 = *(const void **)__p;
  v7 = *(_QWORD *)&__p[8];
  if ( __p[23] >= 0 )
    v9 = __p[23];
  else
    v9 = *(_QWORD *)&__p[8];
  while ( 1 )
  {
    v10 = *(unsigned __int8 *)(*(_QWORD *)v4 + 23LL);
    v11 = (char)v10;
    if ( (v10 & 0x80u) != 0LL )
      v10 = *(_QWORD *)(*(_QWORD *)v4 + 8LL);
    if ( v9 != v10 )
      goto LABEL_18;
    v12 = v11 >= 0 ? *(unsigned __int8 **)v4 : **(unsigned __int8 ***)v4;
    if ( (v6 & 0x80) != 0 )
      break;
    if ( !(_DWORD)v6 )
      goto LABEL_20;
    v13 = __p;
    v14 = v6;
    while ( *v13 == *v12 )
    {
      ++v13;
      ++v12;
      if ( !--v14 )
        goto LABEL_20;
    }
LABEL_18:
    v4 += 8LL;
    if ( v4 == v5 )
      goto LABEL_39;
  }
  if ( memcmp(v8, v12, v7) )
    goto LABEL_18;
LABEL_20:
  v15 = &v38;
  sub_100007F94(&v38, v9 + 7, &v37);
  if ( (v38.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) != 0LL )
    v15 = (std::string *)v38.__r_.__value_.__r.__words[0];
  if ( v9 )
  {
    if ( __p[23] >= 0 )
      v16 = __p;
    else
      v16 = *(_BYTE **)__p;
    memmove(v15, v16, v9);
  }
  strcpy((char *)v15 + v9, "_solid_");
  std::to_string(&v37, (__int64)(a1[2] - a1[1]) >> 3);
  if ( (v37.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
    v17 = &v37;
  else
    v17 = (std::string *)v37.__r_.__value_.__r.__words[0];
  if ( (v37.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
    size = HIBYTE(v37.__r_.__value_.__r.__words[2]);
  else
    size = v37.__r_.__value_.__l.__size_;
  v19 = std::string::append(&v38, (const std::string::value_type *)v17, size);
  v20 = v19->__r_.__value_.__r.__words[0];
  v40[0] = v19->__r_.__value_.__l.__size_;
  *(_QWORD *)((char *)v40 + 7) = *(std::string::size_type *)((char *)&v19->__r_.__value_.__r.__words[1] + 7);
  v21 = HIBYTE(v19->__r_.__value_.__r.__words[2]);
  v19->__r_.__value_.__l.__size_ = 0LL;
  v19->__r_.__value_.__r.__words[2] = 0LL;
  v19->__r_.__value_.__r.__words[0] = 0LL;
  if ( (__p[23] & 0x80000000) != 0 )
    operator delete(*(void **)__p);
  *(_QWORD *)__p = v20;
  *(_QWORD *)&__p[8] = v40[0];
  *(_QWORD *)&__p[15] = *(_QWORD *)((char *)v40 + 7);
  __p[23] = v21;
  if ( SHIBYTE(v37.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v37.__r_.__value_.__l.__data_);
  if ( SHIBYTE(v38.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v38.__r_.__value_.__l.__data_);
LABEL_39:
  v22 = operator new(0x60uLL);
  v23 = v22;
  if ( (__p[23] & 0x80000000) != 0 )
  {
    sub_100006E68(v22, *(void **)__p);
  }
  else
  {
    *(_OWORD *)v22 = *(_OWORD *)__p;
    v22[2] = *(_QWORD *)&__p[16];
  }
  v23[11] = 0LL;
  *(_OWORD *)(v23 + 9) = 0u;
  *(_OWORD *)(v23 + 7) = 0u;
  *(_OWORD *)(v23 + 5) = 0u;
  *(_OWORD *)(v23 + 3) = 0u;
  v24 = a1[3];
  a1[4] = v23;
  v25 = (_QWORD *)a1[2];
  if ( (unsigned __int64)v25 >= v24 )
  {
    v27 = ((char *)v25 - *v3) >> 3;
    if ( (unsigned __int64)(v27 + 1) >> 61 )
      sub_100007480(a1 + 1);
    v28 = v24 - (_QWORD)*v3;
    v29 = v28 >> 2;
    if ( v28 >> 2 <= (unsigned __int64)(v27 + 1) )
      v29 = v27 + 1;
    if ( (unsigned __int64)v28 >= 0x7FFFFFFFFFFFFFF8LL )
      v30 = 0x1FFFFFFFFFFFFFFFLL;
    else
      v30 = v29;
    if ( v30 )
    {
      v31 = sub_100008574(a1 + 3);
      v23 = (_QWORD *)a1[4];
    }
    else
    {
      v31 = 0LL;
    }
    v32 = (_QWORD *)(v31 + 8 * v27);
    v33 = v31 + 8 * v30;
    *v32 = v23;
    v26 = v32 + 1;
    v35 = (char *)a1[1];
    v34 = (char *)a1[2];
    if ( v34 != v35 )
    {
      do
      {
        v36 = *((_QWORD *)v34 - 1);
        v34 -= 8;
        *--v32 = v36;
      }
      while ( v34 != v35 );
      v34 = *v3;
    }
    a1[1] = v32;
    a1[2] = v26;
    a1[3] = v33;
    if ( v34 )
      operator delete(v34);
  }
  else
  {
    *v25 = v23;
    v26 = v25 + 1;
  }
  a1[2] = v26;
  if ( (__p[23] & 0x80000000) != 0 )
    operator delete(*(void **)__p);
}