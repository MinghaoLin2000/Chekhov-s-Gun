__ZN9serialize10Serializer4syncEPKcRNS_4Vec3E
void __fastcall serialize::Serializer::sync(serialize::Serializer *a1, char *a2, float *a3)
{
  std::string *v6; // x0
  __int128 v7; // q0
  void **v8; // x1
  std::string *v9; // x0
  __int128 v10; // q0
  void **v11; // x1
  std::string *v12; // x0
  __int128 v13; // q0
  void **v14; // x1
  std::string v15; // [xsp+8h] [xbp-58h] BYREF
  void *__p[2]; // [xsp+20h] [xbp-40h] BYREF
  signed __int64 v17; // [xsp+30h] [xbp-30h]

  sub_100009C90((int)&v15, a2);
  v6 = std::string::append(&v15, ":x");
  v7 = *(_OWORD *)&v6->__r_.__value_.__l.__data_;
  v17 = v6->__r_.__value_.__r.__words[2];
  *(_OWORD *)__p = v7;
  v6->__r_.__value_.__l.__size_ = 0LL;
  v6->__r_.__value_.__r.__words[2] = 0LL;
  v6->__r_.__value_.__r.__words[0] = 0LL;
  if ( v17 >= 0 )
    v8 = __p;
  else
    v8 = (void **)__p[0];
  serialize::Serializer::sync(a1, (const char *)v8, a3);
  if ( SHIBYTE(v17) < 0 )
    operator delete(__p[0]);
  if ( SHIBYTE(v15.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v15.__r_.__value_.__l.__data_);
  sub_100009C90((int)&v15, a2);
  v9 = std::string::append(&v15, ":y");
  v10 = *(_OWORD *)&v9->__r_.__value_.__l.__data_;
  v17 = v9->__r_.__value_.__r.__words[2];
  *(_OWORD *)__p = v10;
  v9->__r_.__value_.__l.__size_ = 0LL;
  v9->__r_.__value_.__r.__words[2] = 0LL;
  v9->__r_.__value_.__r.__words[0] = 0LL;
  if ( v17 >= 0 )
    v11 = __p;
  else
    v11 = (void **)__p[0];
  serialize::Serializer::sync(a1, (const char *)v11, a3 + 1);
  if ( SHIBYTE(v17) < 0 )
    operator delete(__p[0]);
  if ( SHIBYTE(v15.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v15.__r_.__value_.__l.__data_);
  sub_100009C90((int)&v15, a2);
  v12 = std::string::append(&v15, ":z");
  v13 = *(_OWORD *)&v12->__r_.__value_.__l.__data_;
  v17 = v12->__r_.__value_.__r.__words[2];
  *(_OWORD *)__p = v13;
  v12->__r_.__value_.__l.__size_ = 0LL;
  v12->__r_.__value_.__r.__words[2] = 0LL;
  v12->__r_.__value_.__r.__words[0] = 0LL;
  if ( v17 >= 0 )
    v14 = __p;
  else
    v14 = (void **)__p[0];
  serialize::Serializer::sync(a1, (const char *)v14, a3 + 2);
  if ( SHIBYTE(v17) < 0 )
    operator delete(__p[0]);
  if ( SHIBYTE(v15.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v15.__r_.__value_.__l.__data_);
}