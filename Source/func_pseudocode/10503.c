__ZN3TSP15ObjectContainerC2EPN6google8protobuf5ArenaE
__int64 __fastcall TSP::ObjectContainer::ObjectContainer(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001D6DD0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( atomic_load_explicit(scc_info_ObjectContainer_TSPMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_ObjectContainer_TSPMessages_2eproto);
  *(_DWORD *)(a1 + 48) = 0;
  return a1;
}