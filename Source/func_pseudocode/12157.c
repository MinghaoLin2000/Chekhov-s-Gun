__ZNK6google8protobuf10TextFormat21FastFieldValuePrinter11PrintStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS1_17BaseTextGeneratorE
__int64 __fastcall google::protobuf::TextFormat::FastFieldValuePrinter::PrintString(__int64 a1, __int64 a2, __int64 a3)
{
  std::string *p_p; // x1
  std::string::size_type size; // x2
  std::string __p; // [xsp+8h] [xbp-38h] BYREF

  (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a3 + 40LL))(a3, "\"", 1LL);
  google::protobuf::CEscape(a2, &__p);
  if ( (__p.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
    p_p = &__p;
  else
    p_p = (std::string *)__p.__r_.__value_.__r.__words[0];
  if ( (__p.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
    size = HIBYTE(__p.__r_.__value_.__r.__words[2]);
  else
    size = __p.__r_.__value_.__l.__size_;
  (*(void (__fastcall **)(__int64, std::string *, std::string::size_type))(*(_QWORD *)a3 + 40LL))(a3, p_p, size);
  if ( SHIBYTE(__p.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(__p.__r_.__value_.__l.__data_);
  return (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a3 + 40LL))(a3, "\"", 1LL);
}