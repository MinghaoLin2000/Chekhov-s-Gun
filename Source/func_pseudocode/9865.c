__ZN3TSP17ViewStateMetadataC2EPN6google8protobuf5ArenaE
_QWORD *__fastcall TSP::ViewStateMetadata::ViewStateMetadata(_QWORD *a1, __int64 a2)
{
  *a1 = off_1001D49F8;
  a1[1] = a2;
  a1[4] = a2;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[6] = a2;
  a1[10] = a2;
  a1[8] = 0LL;
  a1[9] = 0LL;
  a1[7] = 0LL;
  if ( atomic_load_explicit(scc_info_ViewStateMetadata_TSPArchiveMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_ViewStateMetadata_TSPArchiveMessages_2eproto);
  a1[12] = 0LL;
  a1[13] = 0LL;
  return a1;
}