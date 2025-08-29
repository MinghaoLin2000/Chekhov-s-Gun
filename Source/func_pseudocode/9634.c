__ZN3TSP9FieldInfoC2EPN6google8protobuf5ArenaE
__int64 __fastcall TSP::FieldInfo::FieldInfo(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001D3E48;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = a2;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = a2;
  if ( atomic_load_explicit(scc_info_FieldInfo_TSPArchiveMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_FieldInfo_TSPArchiveMessages_2eproto);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 96) = &google::protobuf::internal::fixed_address_empty_string;
  *(_DWORD *)(a1 + 120) = 0;
  return a1;
}