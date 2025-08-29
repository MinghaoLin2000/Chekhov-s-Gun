__ZN3TSP16PasteboardObjectC2EPN6google8protobuf5ArenaE
__int64 __fastcall TSP::PasteboardObject::PasteboardObject(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001D6C70;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = a2;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = a2;
  *(_QWORD *)(a1 + 120) = a2;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  if ( atomic_load_explicit(scc_info_PasteboardObject_TSPMessages_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_PasteboardObject_TSPMessages_2eproto);
  *(_OWORD *)(a1 + 170) = 0u;
  *(_OWORD *)(a1 + 144) = 0u;
  *(_OWORD *)(a1 + 160) = 0u;
  return a1;
}