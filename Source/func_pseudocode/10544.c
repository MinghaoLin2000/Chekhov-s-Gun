__ZN3TSP23LargeNumberArraySegmentC2EPN6google8protobuf5ArenaE
_QWORD *__fastcall TSP::LargeNumberArraySegment::LargeNumberArraySegment(_QWORD *a1, __int64 a2)
{
  a1[4] = a2;
  *a1 = off_1001D6FE0;
  a1[1] = a2;
  a1[2] = 0LL;
  a1[3] = 0LL;
  if ( atomic_load_explicit(scc_info_LargeNumberArraySegment_TSPMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_LargeNumberArraySegment_TSPMessages_2eproto);
  a1[5] = 0LL;
  return a1;
}