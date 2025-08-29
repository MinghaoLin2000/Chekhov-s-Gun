__ZN6google8protobuf13MethodOptionsC2EPNS0_5ArenaE
_QWORD *__fastcall google::protobuf::MethodOptions::MethodOptions(_QWORD *a1, google::protobuf::Arena *a2)
{
  *a1 = off_1001D8F20;
  a1[1] = a2;
  google::protobuf::internal::ExtensionSet::ExtensionSet((google::protobuf::internal::ExtensionSet *)(a1 + 2), a2);
  a1[6] = a2;
  a1[5] = 0LL;
  a1[7] = 0LL;
  a1[8] = 0LL;
  if ( atomic_load_explicit(scc_info_MethodOptions_google_2fprotobuf_2fdescriptor_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_MethodOptions_google_2fprotobuf_2fdescriptor_2eproto);
  a1[9] = 0LL;
  return a1;
}