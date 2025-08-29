__ZN6google8protobuf3AnyC2EPNS0_5ArenaE
__int64 __fastcall google::protobuf::Any::Any(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001DA6D0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = a1 + 16;
  *(_QWORD *)(a1 + 48) = a1 + 24;
  if ( atomic_load_explicit(scc_info_Any_google_2fprotobuf_2fany_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_Any_google_2fprotobuf_2fany_2eproto);
  *(_QWORD *)(a1 + 16) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 24) = &google::protobuf::internal::fixed_address_empty_string;
  return a1;
}