__ZN3TSP43SupportMetadata_DataCollaborationPropertiesC2EPN6google8protobuf5ArenaE
_QWORD *__fastcall TSP::SupportMetadata_DataCollaborationProperties::SupportMetadata_DataCollaborationProperties(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = off_1001D4EC8;
  a1[1] = a2;
  a1[2] = 0LL;
  if ( atomic_load_explicit(
         scc_info_SupportMetadata_DataCollaborationProperties_TSPArchiveMessages_2eproto,
         memory_order_acquire) )
  {
    google::protobuf::internal::InitSCCImpl(scc_info_SupportMetadata_DataCollaborationProperties_TSPArchiveMessages_2eproto);
  }
  a1[4] = 0LL;
  a1[5] = 0LL;
  a1[3] = &google::protobuf::internal::fixed_address_empty_string;
  return a1;
}