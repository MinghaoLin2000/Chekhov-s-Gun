__ZN6google8protobuf17DescriptorBuilder19LogUnusedDependencyERKNS0_19FileDescriptorProtoEPKNS0_14FileDescriptorE
void __fastcall google::protobuf::DescriptorBuilder::LogUnusedDependency(
        google::protobuf::DescriptorBuilder *this,
        const google::protobuf::FileDescriptorProto *a2,
        const google::protobuf::FileDescriptor *a3)
{
  __int64 v5; // x0
  _BOOL4 v6; // w23
  google::protobuf::DescriptorBuilder *v7; // x25
  std::string *v8; // x0
  __int128 v9; // q0
  __int64 v10; // x1
  google::protobuf::DescriptorBuilder *v11; // x9
  google::protobuf::DescriptorBuilder *v12; // x8
  bool v13; // zf
  std::string v14; // [xsp+8h] [xbp-78h] BYREF
  void *__p[2]; // [xsp+20h] [xbp-60h] BYREF
  std::string::size_type v16; // [xsp+30h] [xbp-50h]

  if ( *((_QWORD *)this + 17) )
  {
    v5 = sub_100098054(*(_QWORD *)this + 48LL, *((_QWORD *)a2 + 22) & 0xFFFFFFFFFFFFFFFELL);
    v6 = *(_QWORD *)this + 56LL != v5 && *(_BYTE *)(v5 + 56) != 0;
    v7 = (google::protobuf::DescriptorBuilder *)*((_QWORD *)this + 15);
    if ( v7 != (google::protobuf::DescriptorBuilder *)((char *)this + 128) )
    {
      do
      {
        std::operator+<char>("Import ", **((_QWORD **)v7 + 4));
        v8 = std::string::append(&v14, " is unused.");
        v9 = *(_OWORD *)&v8->__r_.__value_.__l.__data_;
        v16 = v8->__r_.__value_.__r.__words[2];
        *(_OWORD *)__p = v9;
        v8->__r_.__value_.__l.__size_ = 0LL;
        v8->__r_.__value_.__r.__words[2] = 0LL;
        v8->__r_.__value_.__r.__words[0] = 0LL;
        if ( SHIBYTE(v14.__r_.__value_.__r.__words[2]) < 0 )
          operator delete(v14.__r_.__value_.__l.__data_);
        v10 = **((_QWORD **)v7 + 4);
        if ( v6 )
          google::protobuf::DescriptorBuilder::AddError((__int64)this, v10, (__int64)a2, 9LL, (__int64)__p);
        else
          google::protobuf::DescriptorBuilder::AddWarning((__int64)this, v10, (__int64)a2, 9LL, (__int64)__p);
        if ( SHIBYTE(v16) < 0 )
          operator delete(__p[0]);
        v11 = (google::protobuf::DescriptorBuilder *)*((_QWORD *)v7 + 1);
        if ( v11 )
        {
          do
          {
            v12 = v11;
            v11 = *(google::protobuf::DescriptorBuilder **)v11;
          }
          while ( v11 );
        }
        else
        {
          do
          {
            v12 = (google::protobuf::DescriptorBuilder *)*((_QWORD *)v7 + 2);
            v13 = *(_QWORD *)v12 == (_QWORD)v7;
            v7 = v12;
          }
          while ( !v13 );
        }
        v7 = v12;
      }
      while ( v12 != (google::protobuf::DescriptorBuilder *)((char *)this + 128) );
    }
  }
}