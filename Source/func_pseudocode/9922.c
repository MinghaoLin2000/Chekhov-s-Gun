__ZN3TSP21DataPropertiesEntryV1C2EPN6google8protobuf5ArenaE
__int64 __fastcall TSP::DataPropertiesEntryV1::DataPropertiesEntryV1(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)a1 = off_1001D4CB8;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( atomic_load_explicit(scc_info_DataPropertiesEntryV1_TSPArchiveMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_DataPropertiesEntryV1_TSPArchiveMessages_2eproto);
  *(_QWORD *)(a1 + 48) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 56) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_BYTE *)(a1 + 72) = 0;
  return a1;
}