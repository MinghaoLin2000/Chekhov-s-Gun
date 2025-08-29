__ZN6google8protobuf19UninterpretedOptionC2EPNS0_5ArenaE
_QWORD *__fastcall google::protobuf::UninterpretedOption::UninterpretedOption(_QWORD *a1, __int64 a2)
{
  *a1 = off_1001D9080;
  a1[1] = a2;
  a1[3] = a2;
  a1[2] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  if ( atomic_load_explicit(scc_info_UninterpretedOption_google_2fprotobuf_2fdescriptor_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_UninterpretedOption_google_2fprotobuf_2fdescriptor_2eproto);
  a1[6] = &google::protobuf::internal::fixed_address_empty_string;
  a1[7] = &google::protobuf::internal::fixed_address_empty_string;
  a1[8] = &google::protobuf::internal::fixed_address_empty_string;
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
  return a1;
}