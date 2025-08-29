__ZN6google8protobuf12OneofOptions16default_instanceEv
void *__fastcall google::protobuf::OneofOptions::default_instance(google::protobuf::OneofOptions *this)
{
  if ( atomic_load_explicit(scc_info_OneofOptions_google_2fprotobuf_2fdescriptor_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_OneofOptions_google_2fprotobuf_2fdescriptor_2eproto);
  return &google::protobuf::_OneofOptions_default_instance_;
}