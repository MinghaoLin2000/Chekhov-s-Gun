__ZN6google8protobuf9ListValueC2EPNS0_5ArenaE
__int64 __fastcall google::protobuf::ListValue::ListValue(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001DBAE0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  if ( atomic_load_explicit(scc_info_ListValue_google_2fprotobuf_2fstruct_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_ListValue_google_2fprotobuf_2fstruct_2eproto);
  return a1;
}