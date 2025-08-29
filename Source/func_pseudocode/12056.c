__ZN6google8protobuf4TypeC2EPNS0_5ArenaE
__int64 __fastcall google::protobuf::Type::Type(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001DB288;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = a2;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 108) = 0;
  if ( atomic_load_explicit(scc_info_Type_google_2fprotobuf_2ftype_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_Type_google_2fprotobuf_2ftype_2eproto);
  *(_QWORD *)(a1 + 88) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 104) = 0;
  return a1;
}