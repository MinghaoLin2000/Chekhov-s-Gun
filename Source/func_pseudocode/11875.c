__ZNK6google8protobuf3Any18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::Any::_InternalSerialize(
        google::protobuf::Any *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  unsigned __int64 v7; // x0
  unsigned __int64 v8; // x2
  __int64 v9; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v7 = *((_QWORD *)this + 2) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(char *)(v7 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v7 + 8) )
      goto LABEL_7;
    v7 = *(_QWORD *)v7;
    goto LABEL_6;
  }
  if ( *(_BYTE *)(v7 + 23) )
  {
LABEL_6:
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(v7);
    a2 = (unsigned __int8 *)sub_100038F08((int)a3, 1, (unsigned int)*((_QWORD *)this + 2) & 0xFFFFFFFE, a2);
  }
LABEL_7:
  v8 = *((_QWORD *)this + 3) & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(char *)(v8 + 23) & 0x80000000) == 0 )
  {
    if ( !*(_BYTE *)(v8 + 23) )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( *(_QWORD *)(v8 + 8) )
LABEL_9:
    a2 = (unsigned __int8 *)sub_100038F08((int)a3, 2, v8, a2);
LABEL_10:
  v9 = *((_QWORD *)this + 1);
  if ( (v9 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v9 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)a2,
                              (unsigned __int8 *)a3,
                              a4);
}