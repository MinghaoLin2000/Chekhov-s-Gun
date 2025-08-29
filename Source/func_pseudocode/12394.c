__ZNK6google8protobuf13SourceContext18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
const google::protobuf::UnknownFieldSet *__fastcall google::protobuf::SourceContext::_InternalSerialize(
        google::protobuf::SourceContext *this,
        google::protobuf::UnknownFieldSet *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  unsigned __int64 v7; // x0
  const char *v8; // x1
  __int64 v9; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v7 = *((_QWORD *)this + 2) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(char *)(v7 + 23) < 0 )
  {
    v8 = *(const char **)(v7 + 8);
    if ( !v8 )
      goto LABEL_7;
    v7 = *(_QWORD *)v7;
    goto LABEL_6;
  }
  v8 = (const char *)*(unsigned __int8 *)(v7 + 23);
  if ( *(_BYTE *)(v7 + 23) )
  {
LABEL_6:
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      (google::protobuf::internal *)v7,
      v8,
      1,
      (google::protobuf::internal *)"google.protobuf.SourceContext.file_name");
    a2 = (google::protobuf::UnknownFieldSet *)sub_100038F08(
                                                (int)a3,
                                                1,
                                                (unsigned int)*((_QWORD *)this + 2) & 0xFFFFFFFE,
                                                (unsigned __int8 *)a2);
  }
LABEL_7:
  v9 = *((_QWORD *)this + 1);
  if ( (v9 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
           (google::protobuf::internal::WireFormat *)((v9 & 0xFFFFFFFFFFFFFFFELL) + 8),
           a2,
           a3,
           a4);
}