__ZN6google8protobuf14MessageOptions16default_instanceEv
void *__fastcall google::protobuf::MessageOptions::default_instance(google::protobuf::MessageOptions *this)
{
  if ( atomic_load_explicit(scc_info_MessageOptions_google_2fprotobuf_2fdescriptor_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_MessageOptions_google_2fprotobuf_2fdescriptor_2eproto);
  return &google::protobuf::_MessageOptions_default_instance_;
}