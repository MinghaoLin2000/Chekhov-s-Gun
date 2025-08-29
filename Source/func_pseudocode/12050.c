__ZN6google8protobuf6StrCatERKNS0_7strings8AlphaNumES4_
void __usercall google::protobuf::StrCat(__int64 a1@<X0>, __int64 a2@<X1>, std::string *a3@<X8>)
{
  std::string *v5; // x21
  size_t v6; // x2
  size_t v7; // x2
  const void *v8; // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = a3;
  a3->__r_.__value_.__r.__words[0] = 0LL;
  a3->__r_.__value_.__l.__size_ = 0LL;
  a3->__r_.__value_.__r.__words[2] = 0LL;
  std::string::resize(a3, *(_QWORD *)(a2 + 8) + *(_QWORD *)(a1 + 8), 0);
  if ( (v5->__r_.__value_.__r.__words[2] & 0x8000000000000000LL) != 0LL )
    v5 = (std::string *)v5->__r_.__value_.__r.__words[0];
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 )
  {
    memcpy(v5, *(const void **)a1, v6);
    v5 = (std::string *)((char *)v5 + *(_QWORD *)(a1 + 8));
  }
  v7 = *(_QWORD *)(a2 + 8);
  if ( v7 )
  {
    v8 = *(const void **)a2;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    memcpy(v5, v8, v7);
  }
}