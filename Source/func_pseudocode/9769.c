__ZN3TSP18PasteboardMetadataC2EPN6google8protobuf5ArenaE
_QWORD *__fastcall TSP::PasteboardMetadata::PasteboardMetadata(_QWORD *a1, __int64 a2)
{
  *a1 = off_1001D4528;
  a1[1] = a2;
  a1[4] = a2;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[6] = a2;
  a1[10] = a2;
  a1[8] = 0LL;
  a1[9] = 0LL;
  a1[7] = 0LL;
  if ( atomic_load_explicit(scc_info_PasteboardMetadata_TSPArchiveMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_PasteboardMetadata_TSPArchiveMessages_2eproto);
  a1[13] = 0LL;
  a1[14] = 0LL;
  a1[12] = &google::protobuf::internal::fixed_address_empty_string;
  return a1;
}