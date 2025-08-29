__ZN6google8protobuf13MethodOptions16default_instanceEv
void *__fastcall google::protobuf::MethodOptions::default_instance(google::protobuf::MethodOptions *this)
{
  if ( atomic_load_explicit(scc_info_MethodOptions_google_2fprotobuf_2fdescriptor_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_MethodOptions_google_2fprotobuf_2fdescriptor_2eproto);
  return &google::protobuf::_MethodOptions_default_instance_;
}