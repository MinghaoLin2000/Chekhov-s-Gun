__ZN3TSP14EncryptionInfoC2EPN6google8protobuf5ArenaE
_QWORD *__fastcall TSP::EncryptionInfo::EncryptionInfo(_QWORD *a1, __int64 a2)
{
  *a1 = off_1001D4898;
  a1[1] = a2;
  a1[3] = a2;
  a1[2] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  if ( atomic_load_explicit(scc_info_EncryptionInfo_TSPArchiveMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_EncryptionInfo_TSPArchiveMessages_2eproto);
  a1[6] = 0LL;
  a1[7] = 0LL;
  return a1;
}