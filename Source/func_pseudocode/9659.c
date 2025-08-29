__ZN3TSP13ComponentInfoC2EPN6google8protobuf5ArenaE
__int64 __fastcall TSP::ComponentInfo::ComponentInfo(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001D3FA8;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = a2;
  *(_QWORD *)(a1 + 72) = a2;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = a2;
  *(_QWORD *)(a1 + 120) = a2;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = a2;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 248) = a2;
  *(_QWORD *)(a1 + 176) = a2;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = a2;
  *(_QWORD *)(a1 + 216) = a2;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  if ( atomic_load_explicit(scc_info_ComponentInfo_TSPArchiveMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_ComponentInfo_TSPArchiveMessages_2eproto);
  *(_QWORD *)(a1 + 264) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 272) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_DWORD *)(a1 + 304) = 0;
  return a1;
}