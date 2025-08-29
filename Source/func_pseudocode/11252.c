__ZN6google8protobuf11EnumOptions16default_instanceEv
void *__fastcall google::protobuf::EnumOptions::default_instance(google::protobuf::EnumOptions *this)
{
  if ( atomic_load_explicit(scc_info_EnumOptions_google_2fprotobuf_2fdescriptor_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_EnumOptions_google_2fprotobuf_2fdescriptor_2eproto);
  return &google::protobuf::_EnumOptions_default_instance_;
}