__ZNK12PlyConverter10createMeshERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPN9serialize3MatEPNS9_5StageE
__int64 __fastcall PlyConverter::createMesh(__int64 result, __int64 a2, __int64 a3, serialize::Prim *a4)
{
  char *v4; // x25
  __int64 v8; // x22
  char *v9; // x19
  void **v10; // x1
  std::string::size_type v11; // x2
  std::string *v12; // x0
  std::string::size_type size; // x2
  void *v14; // x23
  int v15; // w26
  __int64 v16; // x1
  __int64 v17; // x2
  char *v18; // x22
  void *__p[2]; // [xsp+8h] [xbp-78h] BYREF
  unsigned __int8 v20; // [xsp+1Fh] [xbp-61h]
  std::string v21; // [xsp+20h] [xbp-60h] BYREF
  _DWORD v22[2]; // [xsp+38h] [xbp-48h]

  v4 = (char *)(result + 144);
  if ( *(_QWORD *)(result + 152) != *(_QWORD *)(result + 144) )
  {
    v8 = result;
    v9 = (char *)operator new(0x128uLL);
    sub_1000066A8(&v21, a2, 47LL);
    fileFormatUtils::makeValidIdentifier(__p, v8 + 24);
    if ( (v20 & 0x80u) == 0 )
      v10 = __p;
    else
      v10 = (void **)__p[0];
    if ( (v20 & 0x80u) == 0 )
      v11 = v20;
    else
      v11 = (std::string::size_type)__p[1];
    v12 = std::string::append(&v21, (const std::string::value_type *)v10, v11);
    v14 = (void *)v12->__r_.__value_.__r.__words[0];
    size = v12->__r_.__value_.__l.__size_;
    v22[0] = v12->__r_.__value_.__r.__words[2];
    *(_DWORD *)((char *)v22 + 3) = *(_DWORD *)((char *)&v12->__r_.__value_.__r.__words[2] + 3);
    v15 = SHIBYTE(v12->__r_.__value_.__r.__words[2]);
    v12->__r_.__value_.__l.__size_ = 0LL;
    v12->__r_.__value_.__r.__words[2] = 0LL;
    v12->__r_.__value_.__r.__words[0] = 0LL;
    *(_QWORD *)v9 = off_1000185F8;
    *((_DWORD *)v9 + 2) = 4;
    if ( v15 < 0 )
    {
      sub_100006E68(v9 + 16, v14);
    }
    else
    {
      *((_QWORD *)v9 + 2) = v14;
      *((_QWORD *)v9 + 3) = size;
      *((_DWORD *)v9 + 8) = v22[0];
      *(_DWORD *)(v9 + 35) = *(_DWORD *)((char *)v22 + 3);
      v9[39] = v15;
    }
    *((_QWORD *)v9 + 5) = 0LL;
    *((_QWORD *)v9 + 6) = 0LL;
    *((_QWORD *)v9 + 7) = 0LL;
    *(_QWORD *)v9 = &off_1000186C8;
    *((_OWORD *)v9 + 4) = 0u;
    *((_QWORD *)v9 + 35) = 0LL;
    *((_QWORD *)v9 + 36) = 0LL;
    *((_QWORD *)v9 + 34) = 0LL;
    *((_OWORD *)v9 + 5) = 0u;
    *((_OWORD *)v9 + 6) = 0u;
    *((_OWORD *)v9 + 7) = 0u;
    *((_OWORD *)v9 + 8) = 0u;
    *((_OWORD *)v9 + 9) = 0u;
    *((_OWORD *)v9 + 10) = 0u;
    *((_OWORD *)v9 + 11) = 0u;
    *((_OWORD *)v9 + 12) = 0u;
    *((_OWORD *)v9 + 13) = 0u;
    *((_OWORD *)v9 + 14) = 0u;
    *((_OWORD *)v9 + 15) = 0u;
    *(_OWORD *)(v9 + 252) = 0u;
    if ( v15 < 0 )
      operator delete(v14);
    if ( (char)v20 < 0 )
      operator delete(__p[0]);
    if ( SHIBYTE(v21.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v21.__r_.__value_.__l.__data_);
    if ( v9 + 64 != v4 )
      sub_100008230((_DWORD)v9 + 64, *(void **)(v8 + 144));
    if ( v9 + 160 != (char *)(v8 + 48) )
      sub_10000801C(v9 + 160);
    if ( v9 + 88 != (char *)(v8 + 120) )
      sub_100008230((_DWORD)v9 + 88, *(void **)(v8 + 120));
    if ( *(_QWORD *)(v8 + 104) != *(_QWORD *)(v8 + 96) && v9 + 208 != (char *)(v8 + 96) )
      sub_10000801C(v9 + 208);
    v16 = *(_QWORD *)(v8 + 72);
    v17 = *(_QWORD *)(v8 + 80);
    v18 = (char *)(v8 + 72);
    if ( v17 != v16 )
    {
      if ( v9 + 184 != v18 )
        sub_10000801C(v9 + 184);
      *((_DWORD *)v9 + 64) = 2;
    }
    std::string::operator=((std::string *)(v9 + 272), (const std::string *)(a3 + 16));
    return serialize::Prim::addChild(a4, (serialize::Prim *)v9);
  }
  return result;
}