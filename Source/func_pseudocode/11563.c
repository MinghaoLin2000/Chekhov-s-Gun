__ZN6google8protobuf6MethodC2EPNS0_5ArenaE
__int64 __fastcall google::protobuf::Method::Method(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001D9A20;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 72) = 0;
  if ( atomic_load_explicit(scc_info_Method_google_2fprotobuf_2fapi_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_Method_google_2fprotobuf_2fapi_2eproto);
  *(_QWORD *)(a1 + 40) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 48) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 56) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 64) = 0LL;
  return a1;
}