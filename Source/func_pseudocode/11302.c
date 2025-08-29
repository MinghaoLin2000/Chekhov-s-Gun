__ZN6google8protobuf28UninterpretedOption_NamePartC2EPNS0_5ArenaE
__int64 __fastcall google::protobuf::UninterpretedOption_NamePart::UninterpretedOption_NamePart(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1001D8FD0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( atomic_load_explicit(
         scc_info_UninterpretedOption_NamePart_google_2fprotobuf_2fdescriptor_2eproto,
         memory_order_acquire) )
  {
    google::protobuf::internal::InitSCCImpl(scc_info_UninterpretedOption_NamePart_google_2fprotobuf_2fdescriptor_2eproto);
  }
  *(_QWORD *)(a1 + 24) = &google::protobuf::internal::fixed_address_empty_string;
  *(_BYTE *)(a1 + 32) = 0;
  return a1;
}