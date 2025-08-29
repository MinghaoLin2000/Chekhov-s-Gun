__ZN6google8protobuf12StringPrintfEPKcz
__int64 *__usercall google::protobuf::StringPrintf@<X0>(
        std::string *__return_ptr a1@<X8>,
        google::protobuf *this@<X0>,
        const char *a3@<X1>,
        ...)
{
  va_list va; // [xsp+30h] [xbp+10h] BYREF

  va_start(va, a3);
  a1->__r_.__value_.__r.__words[0] = 0LL;
  a1->__r_.__value_.__l.__size_ = 0LL;
  a1->__r_.__value_.__r.__words[2] = 0LL;
  return (__int64 *)google::protobuf::StringAppendV(a1, (char *)this, va);
}