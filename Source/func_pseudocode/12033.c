__ZN6google8protobuf7CEscapeERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
void __usercall google::protobuf::CEscape(__int64 a1@<X0>, std::string *a2@<X8>)
{
  std::string::value_type *v3[2]; // [xsp+0h] [xbp-20h] BYREF

  a2->__r_.__value_.__r.__words[0] = 0LL;
  a2->__r_.__value_.__l.__size_ = 0LL;
  a2->__r_.__value_.__r.__words[2] = 0LL;
  sub_10007A644(v3, a1);
  google::protobuf::CEscapeAndAppend(v3[0], (signed __int64)v3[1], a2);
}