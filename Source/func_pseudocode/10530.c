__ZN3TSP17LargeArraySegmentC2EPN6google8protobuf5ArenaE
_QWORD *__fastcall TSP::LargeArraySegment::LargeArraySegment(_QWORD *a1, __int64 a2)
{
  *a1 = off_1001D6F30;
  a1[1] = a2;
  a1[2] = 0LL;
  if ( atomic_load_explicit(scc_info_LargeArraySegment_TSPMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_LargeArraySegment_TSPMessages_2eproto);
  a1[3] = &google::protobuf::internal::fixed_address_empty_string;
  a1[4] = 0LL;
  return a1;
}