__ZN6google8protobuf20FieldDescriptorProtoC2EPNS0_5ArenaE
__int64 __fastcall google::protobuf::FieldDescriptorProto::FieldDescriptorProto(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001D8580;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( atomic_load_explicit(scc_info_FieldDescriptorProto_google_2fprotobuf_2fdescriptor_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_FieldDescriptorProto_google_2fprotobuf_2fdescriptor_2eproto);
  *(_QWORD *)(a1 + 24) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 32) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 40) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 48) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 56) = &google::protobuf::internal::fixed_address_empty_string;
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 84) = 0x100000001LL;
  return a1;
}