__ZN3TSP27ObjectSerializationMetadataC2EPN6google8protobuf5ArenaE
__int64 __fastcall TSP::ObjectSerializationMetadata::ObjectSerializationMetadata(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001D4AA8;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = a2;
  *(_QWORD *)(a1 + 104) = a2;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( atomic_load_explicit(scc_info_ObjectSerializationMetadata_TSPArchiveMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_ObjectSerializationMetadata_TSPArchiveMessages_2eproto);
  *(_OWORD *)(a1 + 136) = 0u;
  *(_OWORD *)(a1 + 120) = 0u;
  return a1;
}