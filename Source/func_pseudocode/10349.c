__ZN3TSP14UUIDMapArchiveC2EPN6google8protobuf5ArenaE
__int64 __fastcall TSP::UUIDMapArchive::UUIDMapArchive(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)a1 = off_1001D6640;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  if ( atomic_load_explicit(scc_info_UUIDMapArchive_TSPMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_UUIDMapArchive_TSPMessages_2eproto);
  return a1;
}