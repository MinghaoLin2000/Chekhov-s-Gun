__ZNK6google8protobuf5Empty18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
const google::protobuf::UnknownFieldSet *__fastcall google::protobuf::Empty::_InternalSerialize(
        google::protobuf::Empty *this,
        const google::protobuf::UnknownFieldSet *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  __int64 v4; // x8

  v4 = *((_QWORD *)this + 1);
  if ( (v4 & 1) != 0 )
    return (const google::protobuf::UnknownFieldSet *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                                                        (google::protobuf::internal::WireFormat *)((v4 & 0xFFFFFFFFFFFFFFFELL)
                                                                                                 + 8),
                                                        a2,
                                                        (unsigned __int8 *)a3,
                                                        a4);
  else
    return a2;
}