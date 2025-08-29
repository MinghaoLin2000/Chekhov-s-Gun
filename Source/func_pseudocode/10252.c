__ZN3TSP12Path_ElementC2EPN6google8protobuf5ArenaE
__int64 __fastcall TSP::Path_Element::Path_Element(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001D6170;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( atomic_load_explicit(scc_info_Path_Element_TSPMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_Path_Element_TSPMessages_2eproto);
  *(_DWORD *)(a1 + 48) = 1;
  return a1;
}