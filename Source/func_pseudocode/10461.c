__ZN3TSP19SparseUUIDPathArrayC2EPN6google8protobuf5ArenaE
__int64 __fastcall TSP::SparseUUIDPathArray::SparseUUIDPathArray(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001D6BC0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( atomic_load_explicit(scc_info_SparseUUIDPathArray_TSPMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_SparseUUIDPathArray_TSPMessages_2eproto);
  *(_DWORD *)(a1 + 48) = 0;
  return a1;
}