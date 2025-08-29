__ZN6google8protobuf9FieldMaskC2EPNS0_5ArenaE
__int64 __fastcall google::protobuf::FieldMask::FieldMask(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001DB160;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  if ( atomic_load_explicit(scc_info_FieldMask_google_2fprotobuf_2ffield_5fmask_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_FieldMask_google_2fprotobuf_2ffield_5fmask_2eproto);
  return a1;
}