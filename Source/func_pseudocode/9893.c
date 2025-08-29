__ZN3TSP34ObjectSerializationDirectory_EntryC2EPN6google8protobuf5ArenaE
_QWORD *__fastcall TSP::ObjectSerializationDirectory_Entry::ObjectSerializationDirectory_Entry(_QWORD *a1, __int64 a2)
{
  *a1 = off_1001D4B58;
  a1[1] = a2;
  a1[2] = 0LL;
  if ( atomic_load_explicit(
         scc_info_ObjectSerializationDirectory_Entry_TSPArchiveMessages_2eproto,
         memory_order_acquire) )
  {
    google::protobuf::internal::InitSCCImpl(scc_info_ObjectSerializationDirectory_Entry_TSPArchiveMessages_2eproto);
  }
  a1[4] = 0LL;
  a1[5] = 0LL;
  a1[3] = &google::protobuf::internal::fixed_address_empty_string;
  return a1;
}