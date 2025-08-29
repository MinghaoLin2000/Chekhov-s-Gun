__ZN3TSP11MessageInfoC2EPN6google8protobuf5ArenaE
__int64 __fastcall TSP::MessageInfo::MessageInfo(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001D3D98;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = a2;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = a2;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = a2;
  *(_QWORD *)(a1 + 144) = a2;
  *(_QWORD *)(a1 + 176) = a2;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  if ( atomic_load_explicit(scc_info_MessageInfo_TSPArchiveMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_MessageInfo_TSPArchiveMessages_2eproto);
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_DWORD *)(a1 + 208) = 0;
  return a1;
}