__ZN6google8protobuf16EnumValueOptions16default_instanceEv
void *__fastcall google::protobuf::EnumValueOptions::default_instance(google::protobuf::EnumValueOptions *this)
{
  if ( atomic_load_explicit(scc_info_EnumValueOptions_google_2fprotobuf_2fdescriptor_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_EnumValueOptions_google_2fprotobuf_2fdescriptor_2eproto);
  return &google::protobuf::_EnumValueOptions_default_instance_;
}