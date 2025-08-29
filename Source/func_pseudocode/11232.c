__ZN6google8protobuf12OneofOptionsC2EPNS0_5ArenaE
__int64 __fastcall google::protobuf::OneofOptions::OneofOptions(__int64 a1, google::protobuf::Arena *a2)
{
  *(_QWORD *)a1 = off_1001D8C60;
  *(_QWORD *)(a1 + 8) = a2;
  google::protobuf::internal::ExtensionSet::ExtensionSet((google::protobuf::internal::ExtensionSet *)(a1 + 16), a2);
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  if ( atomic_load_explicit(scc_info_OneofOptions_google_2fprotobuf_2fdescriptor_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_OneofOptions_google_2fprotobuf_2fdescriptor_2eproto);
  return a1;
}