__ZN6google8protobuf21MethodDescriptorProtoC2EPNS0_5ArenaE
__int64 __fastcall google::protobuf::MethodDescriptorProto::MethodDescriptorProto(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001D89A0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( atomic_load_explicit(scc_info_MethodDescriptorProto_google_2fprotobuf_2fdescriptor_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_MethodDescriptorProto_google_2fprotobuf_2fdescriptor_2eproto);
  *(_QWORD *)(a1 + 24) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 32) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 40) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_WORD *)(a1 + 56) = 0;
  return a1;
}