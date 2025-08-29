__ZN6google8protobuf8internal18EpsCopyInputStream20AppendStringFallbackEPKciPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE
google::protobuf::internal::EpsCopyInputStream *__fastcall google::protobuf::internal::EpsCopyInputStream::AppendStringFallback(
        __int64 a1,
        std::string::value_type *__s,
        int a3,
        std::string *this)
{
  int v5; // w19
  const std::string::value_type *v6; // x22
  __int64 v8; // x8
  std::string::size_type size; // x8
  int v10; // w9
  int v11; // w23
  google::protobuf::internal::EpsCopyInputStream *result; // x0

  v5 = a3;
  v6 = __s;
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 - (__int64)__s + *(int *)(a1 + 28) >= a3 )
  {
    if ( SHIBYTE(this->__r_.__value_.__r.__words[2]) < 0 )
      size = this->__r_.__value_.__l.__size_;
    else
      size = HIBYTE(this->__r_.__value_.__r.__words[2]);
    if ( a3 >= 50000000 )
      v10 = 50000000;
    else
      v10 = a3;
    std::string::reserve(this, size + v10);
    v8 = *(_QWORD *)(a1 + 8);
  }
  v11 = v8 - (_DWORD)v6 + 16;
  while ( *(_QWORD *)(a1 + 16) )
  {
    std::string::append(this, v6, v11);
    if ( *(int *)(a1 + 28) < 17 )
      break;
    result = google::protobuf::internal::EpsCopyInputStream::Next((google::protobuf::internal::EpsCopyInputStream *)a1);
    if ( !result )
      return result;
    v6 = (char *)result + 16;
    v5 -= v11;
    v11 = *(_DWORD *)(a1 + 8) - (_DWORD)result;
    if ( v5 <= v11 )
    {
      std::string::append(this, v6, v5);
      return (google::protobuf::internal::EpsCopyInputStream *)&v6[v5];
    }
  }
  return 0LL;
}