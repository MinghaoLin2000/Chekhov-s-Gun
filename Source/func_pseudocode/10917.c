__ZN6google8protobuf17DescriptorBuilder18ValidateSymbolNameERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_RKNS0_7MessageE
void __fastcall google::protobuf::DescriptorBuilder::ValidateSymbolName(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v8; // x25
  unsigned __int8 *v9; // x26
  int v10; // w8
  std::string *v12; // x0
  __int128 v13; // q0
  std::string v14; // [xsp+8h] [xbp-78h] BYREF
  void *__p[2]; // [xsp+20h] [xbp-60h] BYREF
  std::string::size_type v16; // [xsp+30h] [xbp-50h]
  __int64 vars8; // [xsp+88h] [xbp+8h]

  if ( (char)a2[23] < 0 )
  {
    v8 = *((_QWORD *)a2 + 1);
    if ( v8 )
    {
      v9 = *(unsigned __int8 **)a2;
      goto LABEL_6;
    }
  }
  else
  {
    v8 = a2[23];
    if ( a2[23] )
    {
      v9 = a2;
      do
      {
LABEL_6:
        v10 = *v9;
        if ( (v10 & 0xFFFFFFDF) - 91 <= 0xFFFFFFE5 && v10 != 95 && (unsigned int)(v10 - 58) <= 0xFFFFFFF5 )
        {
          std::operator+<char>("\"", a2);
          v12 = std::string::append(&v14, "\" is not a valid identifier.");
          v13 = *(_OWORD *)&v12->__r_.__value_.__l.__data_;
          v16 = v12->__r_.__value_.__r.__words[2];
          *(_OWORD *)__p = v13;
          v12->__r_.__value_.__l.__size_ = 0LL;
          v12->__r_.__value_.__r.__words[2] = 0LL;
          v12->__r_.__value_.__r.__words[0] = 0LL;
          google::protobuf::DescriptorBuilder::AddError(a1, a3, a4, 0LL, (__int64)__p);
          if ( SHIBYTE(v16) < 0 )
            operator delete(__p[0]);
          if ( SHIBYTE(v14.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(v14.__r_.__value_.__l.__data_);
        }
        ++v9;
        --v8;
      }
      while ( v8 );
      return;
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  google::protobuf::DescriptorBuilder::AddError(a1, a3, a4, 0LL, "Missing name.");
}