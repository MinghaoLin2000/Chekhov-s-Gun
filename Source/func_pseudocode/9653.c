__ZNK3TSP9FieldPath18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
const google::protobuf::UnknownFieldSet *__fastcall TSP::FieldPath::_InternalSerialize(
        TSP::FieldPath *this,
        google::protobuf::UnknownFieldSet *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  const google::protobuf::UnknownFieldSet *v4; // x4
  google::protobuf::io::EpsCopyOutputStream *v6; // x3
  __int64 v7; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = a2;
  v6 = (google::protobuf::io::EpsCopyOutputStream *)*((unsigned int *)this + 8);
  if ( (int)v6 >= 1 )
    v4 = (const google::protobuf::UnknownFieldSet *)sub_100054554(a3, 1, (int)this + 16, (int)v6, (unsigned __int8 *)a2);
  v7 = *((_QWORD *)this + 1);
  if ( (v7 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (const google::protobuf::UnknownFieldSet *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                                                      (google::protobuf::internal::WireFormat *)((v7 & 0xFFFFFFFFFFFFFFFELL)
                                                                                               + 8),
                                                      v4,
                                                      (unsigned __int8 *)a3,
                                                      v6);
}