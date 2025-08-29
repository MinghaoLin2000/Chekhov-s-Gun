__ZN3TSP16DocumentRevisionC2EPN6google8protobuf5ArenaE
__int64 __fastcall TSP::DocumentRevision::DocumentRevision(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001D4478;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( atomic_load_explicit(scc_info_DocumentRevision_TSPArchiveMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_DocumentRevision_TSPArchiveMessages_2eproto);
  *(_QWORD *)(a1 + 24) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  return a1;
}