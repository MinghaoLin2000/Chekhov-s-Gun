__ZN15fileFormatUtils8getFloatERNSt3__119basic_istringstreamIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
float __fastcall fileFormatUtils::getFloat(__int64 a1)
{
  std::string *p_p; // x0
  double v2; // d8
  std::string __p; // [xsp+8h] [xbp-38h] BYREF

  memset(&__p, 0, sizeof(__p));
  sub_1000052A0(a1, &__p);
  fileFormatUtils::fixExponent(&__p);
  if ( (__p.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
    p_p = &__p;
  else
    p_p = (std::string *)__p.__r_.__value_.__r.__words[0];
  v2 = strtod((const char *)p_p, 0LL);
  if ( SHIBYTE(__p.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(__p.__r_.__value_.__l.__data_);
  return v2;
}