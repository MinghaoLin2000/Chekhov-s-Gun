__ZN6google8protobuf14SourceCodeInfo16default_instanceEv
void *__fastcall google::protobuf::SourceCodeInfo::default_instance(google::protobuf::SourceCodeInfo *this)
{
  if ( atomic_load_explicit(scc_info_SourceCodeInfo_google_2fprotobuf_2fdescriptor_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_SourceCodeInfo_google_2fprotobuf_2fdescriptor_2eproto);
  return &google::protobuf::_SourceCodeInfo_default_instance_;
}