__ZN6google8protobuf9EnumValueC2EPNS0_5ArenaE
__int64 __fastcall google::protobuf::EnumValue::EnumValue(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001DB498;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 52) = 0;
  if ( atomic_load_explicit(scc_info_EnumValue_google_2fprotobuf_2ftype_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_EnumValue_google_2fprotobuf_2ftype_2eproto);
  *(_QWORD *)(a1 + 40) = &google::protobuf::internal::fixed_address_empty_string;
  *(_DWORD *)(a1 + 48) = 0;
  return a1;
}