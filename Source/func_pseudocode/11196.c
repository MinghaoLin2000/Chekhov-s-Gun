__ZN6google8protobuf11FileOptions16default_instanceEv
void *__fastcall google::protobuf::FileOptions::default_instance(google::protobuf::FileOptions *this)
{
  if ( atomic_load_explicit(scc_info_FileOptions_google_2fprotobuf_2fdescriptor_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_FileOptions_google_2fprotobuf_2fdescriptor_2eproto);
  return &google::protobuf::_FileOptions_default_instance_;
}