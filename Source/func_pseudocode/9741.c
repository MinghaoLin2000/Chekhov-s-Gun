__ZN3TSP15PackageMetadataC2EPN6google8protobuf5ArenaE
__int64 __fastcall TSP::PackageMetadata::PackageMetadata(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001D43C8;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = a2;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = a2;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 144) = a2;
  *(_QWORD *)(a1 + 128) = a2;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  if ( atomic_load_explicit(scc_info_PackageMetadata_TSPArchiveMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_PackageMetadata_TSPArchiveMessages_2eproto);
  *(_DWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 184) = 0u;
  *(_OWORD *)(a1 + 168) = 0u;
  return a1;
}