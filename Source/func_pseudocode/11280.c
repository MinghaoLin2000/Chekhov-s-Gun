__ZN6google8protobuf14ServiceOptions16default_instanceEv
void *__fastcall google::protobuf::ServiceOptions::default_instance(google::protobuf::ServiceOptions *this)
{
  if ( atomic_load_explicit(scc_info_ServiceOptions_google_2fprotobuf_2fdescriptor_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_ServiceOptions_google_2fprotobuf_2fdescriptor_2eproto);
  return &google::protobuf::_ServiceOptions_default_instance_;
}