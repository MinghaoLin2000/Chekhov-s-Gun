__ZN3TSP15SupportMetadataC2EPN6google8protobuf5ArenaE
__int64 __fastcall TSP::SupportMetadata::SupportMetadata(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001D4F78;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( atomic_load_explicit(scc_info_SupportMetadata_TSPArchiveMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_SupportMetadata_TSPArchiveMessages_2eproto);
  *(_BYTE *)(a1 + 48) = 0;
  return a1;
}