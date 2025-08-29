__ZN6google8protobuf20OneofDescriptorProtoC2EPNS0_5ArenaE
_QWORD *__fastcall google::protobuf::OneofDescriptorProto::OneofDescriptorProto(_QWORD *a1, __int64 a2)
{
  *a1 = off_1001D8630;
  a1[1] = a2;
  a1[2] = 0LL;
  if ( atomic_load_explicit(scc_info_OneofDescriptorProto_google_2fprotobuf_2fdescriptor_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_OneofDescriptorProto_google_2fprotobuf_2fdescriptor_2eproto);
  a1[3] = &google::protobuf::internal::fixed_address_empty_string;
  a1[4] = 0LL;
  return a1;
}