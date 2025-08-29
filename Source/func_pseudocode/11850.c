__ZNK6google8protobuf10BytesValue18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
const google::protobuf::UnknownFieldSet *__fastcall google::protobuf::BytesValue::_InternalSerialize(
        google::protobuf::BytesValue *this,
        const google::protobuf::UnknownFieldSet *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  const google::protobuf::UnknownFieldSet *v4; // x3
  unsigned __int64 v6; // x2
  __int64 v7; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = a2;
  v6 = *((_QWORD *)this + 2) & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(char *)(v6 + 23) & 0x80000000) == 0 )
  {
    if ( !*(_BYTE *)(v6 + 23) )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( *(_QWORD *)(v6 + 8) )
LABEL_3:
    v4 = (const google::protobuf::UnknownFieldSet *)sub_100038F08((int)a3, 1, v6, (unsigned __int8 *)a2);
LABEL_4:
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
                                                      v4);
}