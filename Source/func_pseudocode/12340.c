__ZN6google8protobuf2io16CodedInputStream18ReadStringFallbackEPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEi
bool __fastcall google::protobuf::io::CodedInputStream::ReadStringFallback(
        google::protobuf::io::CodedInputStream *this,
        std::string *a2,
        std::string::size_type __requested_capacity)
{
  int v3; // w21
  int v6; // w8
  int v7; // w8
  bool v8; // cc
  int v10; // w23
  const std::string::value_type *v11; // x1
  __int64 v12; // x24
  bool v13; // vf

  v3 = __requested_capacity;
  if ( SHIBYTE(a2->__r_.__value_.__r.__words[2]) < 0 )
  {
    if ( a2->__r_.__value_.__l.__size_ )
    {
      *a2->__r_.__value_.__l.__data_ = 0;
      a2->__r_.__value_.__l.__size_ = 0LL;
    }
  }
  else if ( *((_BYTE *)&a2->__r_.__value_.__s + 23) )
  {
    a2->__r_.__value_.__s.__data_[0] = 0;
    *((_BYTE *)&a2->__r_.__value_.__s + 23) = 0;
  }
  v6 = *((_DWORD *)this + 12);
  if ( v6 >= *((_DWORD *)this + 10) )
    v6 = *((_DWORD *)this + 10);
  if ( v6 != 0x7FFFFFFF )
  {
    v7 = v6 - *((_DWORD *)this + 6) + *((_DWORD *)this + 11) + *((_DWORD *)this + 2) - *(_DWORD *)this;
    v8 = v7 < (int)__requested_capacity || (int)__requested_capacity < 1;
    if ( !v8 && v7 >= 1 )
      std::string::reserve(a2, (unsigned int)__requested_capacity);
  }
  while ( 1 )
  {
    v10 = v3;
    v11 = *(const std::string::value_type **)this;
    v12 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    v13 = __OFSUB__(v3, (_DWORD)v12);
    v3 -= v12;
    if ( (v3 < 0) ^ v13 | (v3 == 0) )
      break;
    if ( (_DWORD)v12 )
    {
      std::string::append(a2, v11, (int)v12);
      v11 = *(const std::string::value_type **)this;
    }
    *(_QWORD *)this = &v11[(int)v12];
    if ( (google::protobuf::io::CodedInputStream::Refresh(this) & 1) == 0 )
      return v10 <= (int)v12;
  }
  std::string::append(a2, v11, v10);
  *(_QWORD *)this += v10;
  return v10 <= (int)v12;
}