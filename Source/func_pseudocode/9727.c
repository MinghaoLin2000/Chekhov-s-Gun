__ZN3TSP11FeatureInfoC2EPN6google8protobuf5ArenaE
_QWORD *__fastcall TSP::FeatureInfo::FeatureInfo(_QWORD *a1, __int64 a2)
{
  *a1 = off_1001D4318;
  a1[1] = a2;
  a1[4] = a2;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[6] = 0LL;
  a1[7] = a2;
  if ( atomic_load_explicit(scc_info_FeatureInfo_TSPArchiveMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_FeatureInfo_TSPArchiveMessages_2eproto);
  a1[9] = &google::protobuf::internal::fixed_address_empty_string;
  return a1;
}