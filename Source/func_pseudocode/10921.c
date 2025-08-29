__ZN6google8protobuf17DescriptorBuilder14AddImportErrorERKNS0_19FileDescriptorProtoEi
void __fastcall google::protobuf::DescriptorBuilder::AddImportError(
        google::protobuf::DescriptorBuilder *this,
        const google::protobuf::FileDescriptorProto *a2,
        int a3)
{
  __int64 v5; // x21
  std::string *v6; // x0
  void *v7; // x8
  char v8; // w9
  std::string v9; // [xsp+8h] [xbp-68h] BYREF
  void *__p; // [xsp+20h] [xbp-50h] BYREF
  __int128 v11; // [xsp+28h] [xbp-48h]
  _QWORD v12[2]; // [xsp+38h] [xbp-38h]

  v11 = 0uLL;
  __p = 0LL;
  v5 = a3;
  if ( *(_QWORD *)(*(_QWORD *)this + 8LL) )
  {
    std::operator+<char>("Import \"", *(_QWORD *)(*((_QWORD *)a2 + 5) + 8LL * a3 + 8));
    v6 = std::string::append(&v9, "\" was not found or had errors.");
  }
  else
  {
    std::operator+<char>("Import \"", *(_QWORD *)(*((_QWORD *)a2 + 5) + 8LL * a3 + 8));
    v6 = std::string::append(&v9, "\" has not been loaded.");
  }
  v7 = (void *)v6->__r_.__value_.__r.__words[0];
  v12[0] = v6->__r_.__value_.__l.__size_;
  *(_QWORD *)((char *)v12 + 7) = *(std::string::size_type *)((char *)&v6->__r_.__value_.__r.__words[1] + 7);
  v8 = HIBYTE(v6->__r_.__value_.__r.__words[2]);
  v6->__r_.__value_.__l.__size_ = 0LL;
  v6->__r_.__value_.__r.__words[2] = 0LL;
  v6->__r_.__value_.__r.__words[0] = 0LL;
  *(_QWORD *)((char *)&v11 + 7) = *(_QWORD *)((char *)v12 + 7);
  __p = v7;
  *(_QWORD *)&v11 = v12[0];
  HIBYTE(v11) = v8;
  if ( SHIBYTE(v9.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v9.__r_.__value_.__l.__data_);
  google::protobuf::DescriptorBuilder::AddError(
    (__int64)this,
    *(_QWORD *)(*((_QWORD *)a2 + 5) + 8 * v5 + 8),
    (__int64)a2,
    9LL,
    (__int64)&__p);
  if ( SHIBYTE(v11) < 0 )
    operator delete(__p);
}