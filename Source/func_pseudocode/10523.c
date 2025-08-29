__ZNK3TSP14DataAttributes18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
const google::protobuf::UnknownFieldSet *__fastcall TSP::DataAttributes::_InternalSerialize(
        TSP::DataAttributes *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  const google::protobuf::UnknownFieldSet *result; // x0
  google::protobuf::io::EpsCopyOutputStream *v6; // x3
  __int64 v7; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  result = (const google::protobuf::UnknownFieldSet *)google::protobuf::internal::ExtensionSet::_InternalSerialize(
                                                        (TSP::DataAttributes *)((char *)this + 16),
                                                        100,
                                                        0x20000000,
                                                        a2,
                                                        a3);
  v7 = *((_QWORD *)this + 1);
  if ( (v7 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (const google::protobuf::UnknownFieldSet *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                                                        (google::protobuf::internal::WireFormat *)((v7 & 0xFFFFFFFFFFFFFFFELL)
                                                                                                 + 8),
                                                        result,
                                                        (unsigned __int8 *)a3,
                                                        v6);
  }
  return result;
}