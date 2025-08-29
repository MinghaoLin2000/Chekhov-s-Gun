__ZNK15fileFormatUtils5Asset7getPathEv
void __usercall fileFormatUtils::Asset::getPath(fileFormatUtils::Asset *this@<X0>, std::string *a2@<X8>)
{
  const std::string::value_type *v4; // x8
  char *v5; // x20
  const std::string::value_type *v6; // t1
  int v7; // w10
  const std::string::value_type *v8; // x1
  std::string::size_type v9; // x2
  std::string *v10; // x0
  std::string v11; // [xsp+8h] [xbp-28h] BYREF

  sub_100009C90((int)&v11, "/");
  v6 = (const std::string::value_type *)*((_QWORD *)this + 1);
  v5 = (char *)this + 8;
  v4 = v6;
  v7 = v5[23];
  if ( v7 >= 0 )
    v8 = v5;
  else
    v8 = v4;
  if ( v7 >= 0 )
    v9 = (unsigned __int8)v5[23];
  else
    v9 = *((_QWORD *)v5 + 1);
  v10 = std::string::append(&v11, v8, v9);
  *a2 = *v10;
  v10->__r_.__value_.__l.__size_ = 0LL;
  v10->__r_.__value_.__r.__words[2] = 0LL;
  v10->__r_.__value_.__r.__words[0] = 0LL;
  if ( SHIBYTE(v11.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v11.__r_.__value_.__l.__data_);
}