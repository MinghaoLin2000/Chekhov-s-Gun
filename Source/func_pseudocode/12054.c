__ZN6google8protobuf7strings10SubstituteEPKcRKNS1_8internal13SubstituteArgES7_S7_S7_S7_S7_S7_S7_S7_S7_
__int64 *__usercall google::protobuf::strings::Substitute@<X0>(
        std::string *__return_ptr a1@<X8>,
        int a2@<W0>,
        int a3@<W1>,
        int a4@<W2>,
        int a5@<W3>,
        int a6@<W4>,
        int a7@<W5>,
        int a8@<W6>,
        __int64 a9@<X7>,
        __int128 a10,
        __int64 a11)
{
  __int128 v12; // [xsp+0h] [xbp-30h]

  a1->__r_.__value_.__r.__words[0] = 0LL;
  a1->__r_.__value_.__l.__size_ = 0LL;
  a1->__r_.__value_.__r.__words[2] = 0LL;
  *((_QWORD *)&v12 + 1) = a10;
  *(_QWORD *)&v12 = a9;
  return (__int64 *)google::protobuf::strings::SubstituteAndAppend(
                      a1,
                      a2,
                      a3,
                      a4,
                      a5,
                      a6,
                      a7,
                      a8,
                      v12,
                      *((__int64 *)&a10 + 1),
                      a11);
}