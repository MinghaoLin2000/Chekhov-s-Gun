__ZN6google8protobuf19EnumDescriptorProtoC2EPNS0_5ArenaE
_QWORD *__fastcall google::protobuf::EnumDescriptorProto::EnumDescriptorProto(_QWORD *a1, __int64 a2)
{
  *a1 = off_1001D8790;
  a1[1] = a2;
  a1[2] = 0LL;
  a1[3] = a2;
  a1[4] = 0LL;
  a1[5] = 0LL;
  a1[6] = a2;
  a1[9] = a2;
  a1[7] = 0LL;
  a1[8] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
  if ( atomic_load_explicit(scc_info_EnumDescriptorProto_google_2fprotobuf_2fdescriptor_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_EnumDescriptorProto_google_2fprotobuf_2fdescriptor_2eproto);
  a1[12] = &google::protobuf::internal::fixed_address_empty_string;
  a1[13] = 0LL;
  return a1;
}