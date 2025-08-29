__ZN15fileFormatUtils8Material21makeSerializeMaterialERNS_5AssetE
serialize::Mat *__fastcall fileFormatUtils::Material::makeSerializeMaterial(
        fileFormatUtils::Material *this,
        fileFormatUtils::Asset *a2)
{
  std::string *v4; // x0
  __int128 v5; // q0
  int v6; // w11
  const std::string::value_type *v7; // x1
  std::string::size_type v8; // x2
  std::string *v9; // x0
  void *v10; // x21
  std::string::size_type size; // x23
  int v12; // w24
  char *v13; // x0
  serialize::Mat *v14; // x22
  std::string v16; // [xsp+8h] [xbp-68h] BYREF
  std::string v17; // [xsp+20h] [xbp-50h] BYREF
  _DWORD v18[2]; // [xsp+38h] [xbp-38h]

  fileFormatUtils::Asset::getMaterialsPath((__int64 *)&v16, a2);
  v4 = std::string::append(&v16, "/");
  v5 = *(_OWORD *)&v4->__r_.__value_.__l.__data_;
  v17.__r_.__value_.__r.__words[2] = v4->__r_.__value_.__r.__words[2];
  *(_OWORD *)&v17.__r_.__value_.__l.__data_ = v5;
  v4->__r_.__value_.__l.__size_ = 0LL;
  v4->__r_.__value_.__r.__words[2] = 0LL;
  v4->__r_.__value_.__r.__words[0] = 0LL;
  v6 = *((char *)this + 47);
  if ( v6 >= 0 )
    v7 = (char *)this + 24;
  else
    v7 = (const std::string::value_type *)*((_QWORD *)this + 3);
  if ( v6 >= 0 )
    v8 = *((unsigned __int8 *)this + 47);
  else
    v8 = *((_QWORD *)this + 4);
  v9 = std::string::append(&v17, v7, v8);
  v10 = (void *)v9->__r_.__value_.__r.__words[0];
  size = v9->__r_.__value_.__l.__size_;
  v18[0] = v9->__r_.__value_.__r.__words[2];
  *(_DWORD *)((char *)v18 + 3) = *(_DWORD *)((char *)&v9->__r_.__value_.__r.__words[2] + 3);
  v12 = SHIBYTE(v9->__r_.__value_.__r.__words[2]);
  v9->__r_.__value_.__l.__size_ = 0LL;
  v9->__r_.__value_.__r.__words[2] = 0LL;
  v9->__r_.__value_.__r.__words[0] = 0LL;
  if ( SHIBYTE(v17.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v17.__r_.__value_.__l.__data_);
  if ( SHIBYTE(v16.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v16.__r_.__value_.__l.__data_);
  v13 = (char *)operator new(0x40uLL);
  v14 = (serialize::Mat *)v13;
  *(_QWORD *)v13 = off_1000185F8;
  *((_DWORD *)v13 + 2) = 6;
  if ( v12 < 0 )
  {
    sub_100006E68(v13 + 16, v10);
  }
  else
  {
    *((_QWORD *)v13 + 2) = v10;
    *((_QWORD *)v13 + 3) = size;
    *((_DWORD *)v13 + 8) = v18[0];
    *(_DWORD *)(v13 + 35) = *(_DWORD *)((char *)v18 + 3);
    v13[39] = v12;
  }
  *((_QWORD *)v14 + 5) = 0LL;
  *((_QWORD *)v14 + 6) = 0LL;
  *((_QWORD *)v14 + 7) = 0LL;
  *(_QWORD *)v14 = &off_100018758;
  fileFormatUtils::Material::updateSerializeMaterial(this, v14, *(serialize::Stage **)a2);
  serialize::Prim::addChild(*(serialize::Prim **)a2, v14);
  if ( v12 < 0 )
    operator delete(v10);
  return v14;
}