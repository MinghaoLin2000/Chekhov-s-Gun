__ZN3TSP22ComponentDataReferenceC2EPN6google8protobuf5ArenaE
_QWORD *__fastcall TSP::ComponentDataReference::ComponentDataReference(_QWORD *a1, __int64 a2)
{
  *a1 = off_1001D41B8;
  a1[1] = a2;
  a1[3] = a2;
  a1[2] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  if ( atomic_load_explicit(scc_info_ComponentDataReference_TSPArchiveMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_ComponentDataReference_TSPArchiveMessages_2eproto);
  a1[6] = 0LL;
  return a1;
}