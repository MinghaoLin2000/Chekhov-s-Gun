__ZN6google8protobuf28GeneratedCodeInfo_AnnotationC2EPNS0_5ArenaE
_QWORD *__fastcall google::protobuf::GeneratedCodeInfo_Annotation::GeneratedCodeInfo_Annotation(_QWORD *a1, __int64 a2)
{
  a1[4] = a2;
  *a1 = off_1001D9290;
  a1[1] = a2;
  a1[2] = 0LL;
  a1[3] = 0LL;
  if ( atomic_load_explicit(
         scc_info_GeneratedCodeInfo_Annotation_google_2fprotobuf_2fdescriptor_2eproto,
         memory_order_acquire) )
  {
    google::protobuf::internal::InitSCCImpl(scc_info_GeneratedCodeInfo_Annotation_google_2fprotobuf_2fdescriptor_2eproto);
  }
  a1[6] = &google::protobuf::internal::fixed_address_empty_string;
  a1[7] = 0LL;
  return a1;
}