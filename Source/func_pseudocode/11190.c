__ZN6google8protobuf11FileOptionsC2EPNS0_5ArenaE
__int64 __fastcall google::protobuf::FileOptions::FileOptions(__int64 a1, google::protobuf::Arena *a2)
{
  *(_QWORD *)a1 = off_1001D8A50;
  *(_QWORD *)(a1 + 8) = a2;
  google::protobuf::internal::ExtensionSet::ExtensionSet((google::protobuf::internal::ExtensionSet *)(a1 + 16), a2);
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( atomic_load_explicit(scc_info_FileOptions_google_2fprotobuf_2fdescriptor_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_FileOptions_google_2fprotobuf_2fdescriptor_2eproto);
  *(_QWORD *)(a1 + 72) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 80) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 88) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 96) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 104) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 112) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 120) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 128) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 136) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 144) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 1;
  *(_BYTE *)(a1 + 164) = 1;
  return a1;
}