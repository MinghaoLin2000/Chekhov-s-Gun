__ZNK12PlyConverter16createPointCloudERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPN9serialize3MatEPNS9_5StageE
__int64 __fastcall PlyConverter::createPointCloud(_QWORD *a1, __int64 a2, __int64 a3, serialize::Prim *a4)
{
  char *v8; // x19
  void **v9; // x1
  std::string::size_type v10; // x2
  std::string *v11; // x0
  std::string::size_type size; // x2
  void *v13; // x23
  int v14; // w25
  __int64 v15; // x1
  __int64 v16; // x2
  char *v17; // x22
  void *__p[2]; // [xsp+8h] [xbp-78h] BYREF
  unsigned __int8 v20; // [xsp+1Fh] [xbp-61h]
  std::string v21; // [xsp+20h] [xbp-60h] BYREF
  _DWORD v22[2]; // [xsp+38h] [xbp-48h]

  v8 = (char *)operator new(0x88uLL);
  sub_1000066A8(&v21, a2, 47LL);
  fileFormatUtils::makeValidIdentifier(__p, a1 + 3);
  if ( (v20 & 0x80u) == 0 )
    v9 = __p;
  else
    v9 = (void **)__p[0];
  if ( (v20 & 0x80u) == 0 )
    v10 = v20;
  else
    v10 = (std::string::size_type)__p[1];
  v11 = std::string::append(&v21, (const std::string::value_type *)v9, v10);
  v13 = (void *)v11->__r_.__value_.__r.__words[0];
  size = v11->__r_.__value_.__l.__size_;
  v22[0] = v11->__r_.__value_.__r.__words[2];
  *(_DWORD *)((char *)v22 + 3) = *(_DWORD *)((char *)&v11->__r_.__value_.__r.__words[2] + 3);
  v14 = SHIBYTE(v11->__r_.__value_.__r.__words[2]);
  v11->__r_.__value_.__l.__size_ = 0LL;
  v11->__r_.__value_.__r.__words[2] = 0LL;
  v11->__r_.__value_.__r.__words[0] = 0LL;
  *(_QWORD *)v8 = off_1000185F8;
  *((_DWORD *)v8 + 2) = 3;
  if ( v14 < 0 )
  {
    sub_100006E68(v8 + 16, v13);
  }
  else
  {
    *((_QWORD *)v8 + 2) = v13;
    *((_QWORD *)v8 + 3) = size;
    *((_DWORD *)v8 + 8) = v22[0];
    *(_DWORD *)(v8 + 35) = *(_DWORD *)((char *)v22 + 3);
    v8[39] = v14;
  }
  *((_QWORD *)v8 + 5) = 0LL;
  *((_QWORD *)v8 + 6) = 0LL;
  *((_QWORD *)v8 + 7) = 0LL;
  *(_QWORD *)v8 = off_100018680;
  *((_OWORD *)v8 + 4) = 0u;
  *((_OWORD *)v8 + 5) = 0u;
  *((_OWORD *)v8 + 6) = 0u;
  *((_OWORD *)v8 + 7) = 0u;
  *((_QWORD *)v8 + 16) = 0LL;
  if ( v14 < 0 )
    operator delete(v13);
  if ( (char)v20 < 0 )
    operator delete(__p[0]);
  if ( SHIBYTE(v21.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v21.__r_.__value_.__l.__data_);
  if ( v8 + 64 != (char *)(a1 + 6) )
    sub_10000801C(v8 + 64);
  v15 = a1[12];
  v16 = a1[13];
  v17 = (char *)(a1 + 12);
  if ( v16 != v15 && v8 + 88 != v17 )
    sub_10000801C(v8 + 88);
  std::string::operator=((std::string *)(v8 + 112), (const std::string *)(a3 + 16));
  return serialize::Prim::addChild(a4, (serialize::Prim *)v8);
}