__ZNK6google8protobuf7Message24FindInitializationErrorsEPNSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEE
void __fastcall google::protobuf::Message::FindInitializationErrors(__int64 a1, __int64 a2)
{
  void *__p[2]; // [xsp+8h] [xbp-28h] BYREF
  char v5; // [xsp+1Fh] [xbp-11h]

  sub_10007A754((int)__p, "");
  google::protobuf::internal::ReflectionOps::FindInitializationErrors(a1, __p, a2);
  if ( v5 < 0 )
    operator delete(__p[0]);
}