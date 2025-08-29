__ZNK15fileFormatUtils5Asset11getGeomPathEv
void __usercall fileFormatUtils::Asset::getGeomPath(__int64 *__return_ptr a1@<X8>, fileFormatUtils::Asset *this@<X0>)
{
  char *v4; // x21
  std::string *v5; // x0
  std::string::size_type v6; // x23
  char v7; // w22
  __int64 v8; // x8
  std::string __p; // [xsp+0h] [xbp-60h] BYREF
  _QWORD v10[2]; // [xsp+18h] [xbp-48h]

  v4 = (char *)this + 56;
  if ( *((char *)this + 79) < 0 )
  {
    if ( *((_QWORD *)this + 8) )
      goto LABEL_11;
  }
  else if ( *((_BYTE *)this + 79) )
  {
LABEL_9:
    *(_OWORD *)a1 = *(_OWORD *)v4;
    a1[2] = *((_QWORD *)v4 + 2);
    return;
  }
  fileFormatUtils::Asset::getPath(this, &__p);
  v5 = std::string::append(&__p, "/Geom");
  v6 = v5->__r_.__value_.__r.__words[0];
  v10[0] = v5->__r_.__value_.__l.__size_;
  *(_QWORD *)((char *)v10 + 7) = *(std::string::size_type *)((char *)&v5->__r_.__value_.__r.__words[1] + 7);
  v7 = HIBYTE(v5->__r_.__value_.__r.__words[2]);
  v5->__r_.__value_.__l.__size_ = 0LL;
  v5->__r_.__value_.__r.__words[2] = 0LL;
  v5->__r_.__value_.__r.__words[0] = 0LL;
  if ( *((char *)this + 79) < 0 )
    operator delete(*(void **)v4);
  v8 = v10[0];
  *((_QWORD *)this + 7) = v6;
  *((_QWORD *)this + 8) = v8;
  *(_QWORD *)((char *)this + 71) = *(_QWORD *)((char *)v10 + 7);
  *((_BYTE *)this + 79) = v7;
  if ( SHIBYTE(__p.__r_.__value_.__r.__words[2]) < 0 )
  {
    operator delete(__p.__r_.__value_.__l.__data_);
    if ( (*((_BYTE *)this + 79) & 0x80) == 0 )
      goto LABEL_9;
  }
  else if ( (v7 & 0x80) == 0 )
  {
    goto LABEL_9;
  }
LABEL_11:
  sub_100006E68(a1, *((void **)this + 7));
}