__ZN3TSP8DataInfoC2EPN6google8protobuf5ArenaE
__int64 __fastcall TSP::DataInfo::DataInfo(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001D45D8;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( atomic_load_explicit(scc_info_DataInfo_TSPArchiveMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_DataInfo_TSPArchiveMessages_2eproto);
  *(_QWORD *)(a1 + 24) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 32) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 40) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 48) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 56) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 64) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 72) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 80) = &google::protobuf::internal::fixed_address_empty_string;
  *(_OWORD *)(a1 + 88) = 0u;
  *(_OWORD *)(a1 + 104) = 0u;
  *(_OWORD *)(a1 + 120) = 0u;
  *(_OWORD *)(a1 + 136) = 0u;
  *(_DWORD *)(a1 + 152) = 1;
  return a1;
}