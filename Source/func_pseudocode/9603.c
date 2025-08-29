__ZN3TSP11ArchiveInfoC2EPN6google8protobuf5ArenaE
__int64 __fastcall TSP::ArchiveInfo::ArchiveInfo(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001D3CE8;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( atomic_load_explicit(scc_info_ArchiveInfo_TSPArchiveMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_ArchiveInfo_TSPArchiveMessages_2eproto);
  *(_BYTE *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  return a1;
}