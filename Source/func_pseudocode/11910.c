__ZNK6google8protobuf7Message18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
// attributes: thunk
__int64 __fastcall google::protobuf::Message::_InternalSerialize(
        google::protobuf::Message *this,
        const google::protobuf::Message *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  return google::protobuf::internal::WireFormat::_InternalSerialize(this, a2, (unsigned __int8 *)a3, a4);
}