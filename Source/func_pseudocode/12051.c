__ZN6google8protobuf6StrCatERKNS0_7strings8AlphaNumES4_S4_
void __usercall google::protobuf::StrCat(__int64 a1@<X0>, __int64 a2@<X1>, __int64 a3@<X2>, std::string *a4@<X8>)
{
  std::string *v7; // x21
  size_t v8; // x2
  size_t v9; // x2
  size_t v10; // x2
  const void *v11; // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v7 = a4;
  a4->__r_.__value_.__r.__words[0] = 0LL;
  a4->__r_.__value_.__l.__size_ = 0LL;
  a4->__r_.__value_.__r.__words[2] = 0LL;
  std::string::resize(a4, *(_QWORD *)(a2 + 8) + *(_QWORD *)(a1 + 8) + *(_QWORD *)(a3 + 8), 0);
  if ( (v7->__r_.__value_.__r.__words[2] & 0x8000000000000000LL) != 0LL )
    v7 = (std::string *)v7->__r_.__value_.__r.__words[0];
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 )
  {
    memcpy(v7, *(const void **)a1, v8);
    v7 = (std::string *)((char *)v7 + *(_QWORD *)(a1 + 8));
  }
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 )
  {
    memcpy(v7, *(const void **)a2, v9);
    v7 = (std::string *)((char *)v7 + *(_QWORD *)(a2 + 8));
  }
  v10 = *(_QWORD *)(a3 + 8);
  if ( v10 )
  {
    v11 = *(const void **)a3;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    memcpy(v7, v11, v10);
  }
}