__ZNK6google8protobuf9BoolValue18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::BoolValue::_InternalSerialize(
        google::protobuf::BoolValue *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  unsigned __int8 v6; // w8
  __int64 v7; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( *((_BYTE *)this + 16) )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    {
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
      v6 = *((_BYTE *)this + 16);
    }
    else
    {
      v6 = 1;
    }
    *a2 = 8;
    a2[1] = v6;
    a2 += 2;
  }
  v7 = *((_QWORD *)this + 1);
  if ( (v7 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v7 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)a2,
                              (unsigned __int8 *)a3,
                              a4);
}