__ZN6google8protobuf22ServiceDescriptorProtoC2EPNS0_5ArenaE
_QWORD *__fastcall google::protobuf::ServiceDescriptorProto::ServiceDescriptorProto(_QWORD *a1, __int64 a2)
{
  *a1 = off_1001D88F0;
  a1[1] = a2;
  a1[3] = a2;
  a1[2] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  if ( atomic_load_explicit(
         scc_info_ServiceDescriptorProto_google_2fprotobuf_2fdescriptor_2eproto,
         memory_order_acquire) )
  {
    google::protobuf::internal::InitSCCImpl(scc_info_ServiceDescriptorProto_google_2fprotobuf_2fdescriptor_2eproto);
  }
  a1[6] = &google::protobuf::internal::fixed_address_empty_string;
  a1[7] = 0LL;
  return a1;
}