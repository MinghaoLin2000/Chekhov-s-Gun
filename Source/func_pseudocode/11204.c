__ZN6google8protobuf14MessageOptionsC2EPNS0_5ArenaE
__int64 __fastcall google::protobuf::MessageOptions::MessageOptions(__int64 a1, google::protobuf::Arena *a2)
{
  *(_QWORD *)a1 = off_1001D8B00;
  *(_QWORD *)(a1 + 8) = a2;
  google::protobuf::internal::ExtensionSet::ExtensionSet((google::protobuf::internal::ExtensionSet *)(a1 + 16), a2);
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( atomic_load_explicit(scc_info_MessageOptions_google_2fprotobuf_2fdescriptor_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_MessageOptions_google_2fprotobuf_2fdescriptor_2eproto);
  *(_DWORD *)(a1 + 72) = 0;
  return a1;
}