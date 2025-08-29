__ZNK6google8protobuf11DoubleValue18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::DoubleValue::_InternalSerialize(
        google::protobuf::DoubleValue *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  double v6; // d0
  __int64 v7; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v6 = *((double *)this + 2);
  if ( v6 != 0.0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    {
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
      v6 = *((double *)this + 2);
    }
    *a2 = 9;
    *(double *)(a2 + 1) = v6;
    a2 += 9;
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