__ZN6google8protobuf21ExtensionRangeOptions16default_instanceEv
void *__fastcall google::protobuf::ExtensionRangeOptions::default_instance(
        google::protobuf::ExtensionRangeOptions *this)
{
  if ( atomic_load_explicit(scc_info_ExtensionRangeOptions_google_2fprotobuf_2fdescriptor_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_ExtensionRangeOptions_google_2fprotobuf_2fdescriptor_2eproto);
  return &google::protobuf::_ExtensionRangeOptions_default_instance_;
}