__ZN3TSP19DatabaseDataArchiveC2EPN6google8protobuf5ArenaE
__int64 __fastcall TSP::DatabaseDataArchive::DatabaseDataArchive(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001D37E0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( atomic_load_explicit(scc_info_DatabaseDataArchive_TSPDatabaseMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_DatabaseDataArchive_TSPDatabaseMessages_2eproto);
  *(_QWORD *)(a1 + 24) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 32) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 60) = 1;
  return a1;
}