__ZN3TSP10LargeArrayC2EPN6google8protobuf5ArenaE
__int64 __fastcall TSP::LargeArray::LargeArray(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001D7400;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( atomic_load_explicit(scc_info_LargeArray_TSPMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_LargeArray_TSPMessages_2eproto);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_OWORD *)(a1 + 88) = 0u;
  *(_OWORD *)(a1 + 72) = 0u;
  return a1;
}