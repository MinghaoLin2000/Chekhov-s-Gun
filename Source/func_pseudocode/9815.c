__ZN3TSP15DataMetadataMapC2EPN6google8protobuf5ArenaE
__int64 __fastcall TSP::DataMetadataMap::DataMetadataMap(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001D4738;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  if ( atomic_load_explicit(scc_info_DataMetadataMap_TSPArchiveMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_DataMetadataMap_TSPArchiveMessages_2eproto);
  return a1;
}