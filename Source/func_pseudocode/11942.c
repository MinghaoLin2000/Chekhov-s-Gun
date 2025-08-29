__ZNK6google8protobuf11MessageLite17SerializeAsStringEv
bool __usercall google::protobuf::MessageLite::SerializeAsString@<W0>(
        std::string *__return_ptr a1@<X8>,
        google::protobuf::MessageLite *this@<X0>)
{
  _BOOL8 result; // x0

  a1->__r_.__value_.__r.__words[0] = 0LL;
  a1->__r_.__value_.__l.__size_ = 0LL;
  a1->__r_.__value_.__r.__words[2] = 0LL;
  result = google::protobuf::MessageLite::AppendPartialToString((__int64)this, a1);
  if ( !result )
  {
    if ( SHIBYTE(a1->__r_.__value_.__r.__words[2]) < 0 )
    {
      *a1->__r_.__value_.__l.__data_ = 0;
      a1->__r_.__value_.__l.__size_ = 0LL;
    }
    else
    {
      a1->__r_.__value_.__s.__data_[0] = 0;
      *((_BYTE *)&a1->__r_.__value_.__s + 23) = 0;
    }
  }
  return result;
}