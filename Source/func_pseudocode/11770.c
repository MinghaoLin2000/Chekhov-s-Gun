__ZNK6google8protobuf10FloatValue18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::FloatValue::_InternalSerialize(
        google::protobuf::FloatValue *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  float v6; // s0
  __int64 v7; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v6 = *((float *)this + 4);
  if ( v6 != 0.0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    {
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
      v6 = *((float *)this + 4);
    }
    *a2 = 13;
    *(float *)(a2 + 1) = v6;
    a2 += 5;
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