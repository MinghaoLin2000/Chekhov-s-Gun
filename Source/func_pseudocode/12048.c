__ZN6google8protobuf12safe_strto32ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPi
__int64 __fastcall google::protobuf::safe_strto32(__int64 a1)
{
  __int64 v1; // x19
  std::string __p; // [xsp+0h] [xbp-30h] BYREF

  if ( *(char *)(a1 + 23) < 0 )
    sub_10007A474(&__p, *(void **)a1);
  else
    __p = *(std::string *)a1;
  v1 = sub_1000F1B10(&__p);
  if ( SHIBYTE(__p.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(__p.__r_.__value_.__l.__data_);
  return v1;
}