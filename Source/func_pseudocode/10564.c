__ZNK3TSP39LargeStringArraySegment_OptionalElement18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
const google::protobuf::UnknownFieldSet *__fastcall TSP::LargeStringArraySegment_OptionalElement::_InternalSerialize(
        TSP::LargeStringArraySegment_OptionalElement *this,
        const google::protobuf::UnknownFieldSet *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  const google::protobuf::UnknownFieldSet *v4; // x3
  __int64 v6; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = a2;
  if ( (*((_BYTE *)this + 16) & 1) != 0 )
    v4 = (const google::protobuf::UnknownFieldSet *)sub_100038F08(
                                                      (int)a3,
                                                      1,
                                                      (unsigned int)*((_QWORD *)this + 3) & 0xFFFFFFFE,
                                                      (unsigned __int8 *)a2);
  v6 = *((_QWORD *)this + 1);
  if ( (v6 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (const google::protobuf::UnknownFieldSet *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                                                      (google::protobuf::internal::WireFormat *)((v6 & 0xFFFFFFFFFFFFFFFELL)
                                                                                               + 8),
                                                      v4,
                                                      (unsigned __int8 *)a3,
                                                      v4);
}