__ZN3TSP8UUIDPathC2EPN6google8protobuf5ArenaE
__int64 __fastcall TSP::UUIDPath::UUIDPath(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001D6A60;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  if ( atomic_load_explicit(scc_info_UUIDPath_TSPMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_UUIDPath_TSPMessages_2eproto);
  return a1;
}