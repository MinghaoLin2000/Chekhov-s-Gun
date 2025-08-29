__ZN6google8protobuf21ExtensionRangeOptionsC2EPNS0_5ArenaE
__int64 __fastcall google::protobuf::ExtensionRangeOptions::ExtensionRangeOptions(
        __int64 a1,
        google::protobuf::Arena *a2)
{
  *(_QWORD *)a1 = off_1001D84D0;
  *(_QWORD *)(a1 + 8) = a2;
  google::protobuf::internal::ExtensionSet::ExtensionSet((google::protobuf::internal::ExtensionSet *)(a1 + 16), a2);
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  if ( atomic_load_explicit(scc_info_ExtensionRangeOptions_google_2fprotobuf_2fdescriptor_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_ExtensionRangeOptions_google_2fprotobuf_2fdescriptor_2eproto);
  return a1;
}