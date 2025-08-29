__ZN6google8protobuf17DescriptorBuilder19AddTwiceListedErrorERKNS0_19FileDescriptorProtoEi
void __fastcall google::protobuf::DescriptorBuilder::AddTwiceListedError(
        google::protobuf::DescriptorBuilder *this,
        const google::protobuf::FileDescriptorProto *a2,
        int a3)
{
  __int64 v5; // x21
  std::string *v6; // x0
  __int128 v7; // q0
  std::string v8; // [xsp+8h] [xbp-58h] BYREF
  void *__p[2]; // [xsp+20h] [xbp-40h] BYREF
  std::string::size_type v10; // [xsp+30h] [xbp-30h]

  v5 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 8LL * a3 + 8);
  std::operator+<char>("Import \"", v5);
  v6 = std::string::append(&v8, "\" was listed twice.");
  v7 = *(_OWORD *)&v6->__r_.__value_.__l.__data_;
  v10 = v6->__r_.__value_.__r.__words[2];
  *(_OWORD *)__p = v7;
  v6->__r_.__value_.__l.__size_ = 0LL;
  v6->__r_.__value_.__r.__words[2] = 0LL;
  v6->__r_.__value_.__r.__words[0] = 0LL;
  google::protobuf::DescriptorBuilder::AddError((__int64)this, v5, (__int64)a2, 9LL, (__int64)__p);
  if ( SHIBYTE(v10) < 0 )
    operator delete(__p[0]);
  if ( SHIBYTE(v8.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v8.__r_.__value_.__l.__data_);
}