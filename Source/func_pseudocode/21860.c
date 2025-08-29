__ZN12ObjConverter16loadMaterialFileERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
void __fastcall ObjConverter::loadMaterialFile(__int64 a1, __int64 a2)
{
  const std::string *v3; // x1
  std::string::size_type v4; // x3
  std::string::size_type v5; // x8
  std::string::size_type v6; // x8
  int v7; // w9
  std::string::size_type size; // x20
  std::string *v9; // x21
  std::string *v10; // x1
  const std::string::value_type *v11; // x1
  std::string::size_type v12; // x2
  std::string *v13; // x0
  std::string::size_type v14; // x21
  char v15; // w23
  const char *v16; // x1
  _BYTE *v17; // x1
  std::string v18; // [xsp+8h] [xbp-2C8h] BYREF
  _BYTE __p[24]; // [xsp+20h] [xbp-2B0h] BYREF
  char v20; // [xsp+47h] [xbp-289h] BYREF
  std::string v21; // [xsp+48h] [xbp-288h] BYREF
  __int64 v22; // [xsp+D0h] [xbp-200h]
  __int64 v23; // [xsp+1F0h] [xbp-E0h] BYREF
  _QWORD v24[2]; // [xsp+288h] [xbp-48h]

  if ( *(char *)(a2 + 23) < 0 )
  {
    sub_100006E68(__p, *(void **)a2);
  }
  else
  {
    *(_OWORD *)__p = *(_OWORD *)a2;
    *(_QWORD *)&__p[16] = *(_QWORD *)(a2 + 16);
  }
  v3 = (const std::string *)(a1 + 328);
  if ( *(char *)(a1 + 351) < 0 )
  {
    v4 = *(_QWORD *)(a1 + 336);
    if ( !v4 )
      goto LABEL_35;
    v5 = v3->__r_.__value_.__r.__words[0];
  }
  else
  {
    v4 = *(unsigned __int8 *)(a1 + 351);
    if ( !*(_BYTE *)(a1 + 351) )
      goto LABEL_35;
    v5 = a1 + 328;
  }
  v6 = v5 - 1;
  while ( v4 )
  {
    v7 = *(unsigned __int8 *)(v6 + v4--);
    if ( v7 == 47 )
    {
      if ( v4 != -1LL )
      {
        std::string::basic_string(&v21, v3, 0LL, v4, (std::allocator<char> *)&v18);
        if ( (v21.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
          size = HIBYTE(v21.__r_.__value_.__r.__words[2]);
        else
          size = v21.__r_.__value_.__l.__size_;
        v9 = &v18;
        sub_100007F94(&v18, size + 1, &v20);
        if ( (v18.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) != 0LL )
          v9 = (std::string *)v18.__r_.__value_.__r.__words[0];
        if ( size )
        {
          if ( (v21.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
            v10 = &v21;
          else
            v10 = (std::string *)v21.__r_.__value_.__r.__words[0];
          memmove(v9, v10, size);
        }
        *(_WORD *)((char *)&v9->__r_.__value_.__l.__data_ + size) = 47;
        if ( __p[23] >= 0 )
          v11 = __p;
        else
          v11 = *(const std::string::value_type **)__p;
        if ( __p[23] >= 0 )
          v12 = __p[23];
        else
          v12 = *(_QWORD *)&__p[8];
        v13 = std::string::append(&v18, v11, v12);
        v14 = v13->__r_.__value_.__r.__words[0];
        v24[0] = v13->__r_.__value_.__l.__size_;
        *(_QWORD *)((char *)v24 + 7) = *(std::string::size_type *)((char *)&v13->__r_.__value_.__r.__words[1] + 7);
        v15 = HIBYTE(v13->__r_.__value_.__r.__words[2]);
        v13->__r_.__value_.__l.__size_ = 0LL;
        v13->__r_.__value_.__r.__words[2] = 0LL;
        v13->__r_.__value_.__r.__words[0] = 0LL;
        if ( (__p[23] & 0x80000000) != 0 )
          operator delete(*(void **)__p);
        *(_QWORD *)__p = v14;
        *(_QWORD *)&__p[8] = v24[0];
        *(_QWORD *)&__p[15] = *(_QWORD *)((char *)v24 + 7);
        __p[23] = v15;
        if ( SHIBYTE(v18.__r_.__value_.__r.__words[2]) < 0 )
          operator delete(v18.__r_.__value_.__l.__data_);
        if ( SHIBYTE(v21.__r_.__value_.__r.__words[2]) < 0 )
          operator delete(v21.__r_.__value_.__l.__data_);
      }
      break;
    }
  }
LABEL_35:
  if ( __p[23] >= 0 )
    v16 = __p;
  else
    v16 = *(const char **)__p;
  XpcSandbox::consume(*(xpc_connection_t **)(a1 + 352), v16);
  if ( __p[23] >= 0 )
    v17 = __p;
  else
    v17 = *(_BYTE **)__p;
  sub_10000DA38(&v21, v17, 8LL);
  if ( v22 )
    ObjConverter::parseMtl(a1, &v21);
  v21.__r_.__value_.__r.__words[0] = `VTT for'std::ifstream[0];
  *(std::string::size_type *)((char *)v21.__r_.__value_.__r.__words + *(_QWORD *)(`VTT for'std::ifstream[0] - 24LL)) = `VTT for'std::ifstream[3];
  std::filebuf::~filebuf(&v21.__r_.__value_.__r.__words[2]);
  std::istream::~istream(&v21, &`VTT for'std::ifstream[1]);
  std::ios::~ios(&v23);
  if ( (__p[23] & 0x80000000) != 0 )
    operator delete(*(void **)__p);
}