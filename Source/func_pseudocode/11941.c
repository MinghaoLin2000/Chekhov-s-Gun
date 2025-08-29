__ZNK6google8protobuf11MessageLite17SerializeToStringEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
bool __fastcall google::protobuf::MessageLite::SerializeToString(__int64 a1, std::string *a2)
{
  if ( SHIBYTE(a2->__r_.__value_.__r.__words[2]) < 0 )
  {
    *a2->__r_.__value_.__l.__data_ = 0;
    a2->__r_.__value_.__l.__size_ = 0LL;
  }
  else
  {
    a2->__r_.__value_.__s.__data_[0] = 0;
    *((_BYTE *)&a2->__r_.__value_.__s + 23) = 0;
  }
  return google::protobuf::MessageLite::AppendPartialToString(a1, a2);
}