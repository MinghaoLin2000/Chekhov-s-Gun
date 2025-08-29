__ZNK6google8protobuf9FieldMask18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
google::protobuf::UnknownFieldSet *__fastcall google::protobuf::FieldMask::_InternalSerialize(
        google::protobuf::FieldMask *this,
        google::protobuf::UnknownFieldSet *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  __int64 v7; // x8
  __int64 v8; // x24
  __int64 v9; // x25
  __int64 *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x8
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v7 = *((unsigned int *)this + 6);
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    v9 = 8 * v7;
    do
    {
      v10 = *(__int64 **)(*((_QWORD *)this + 4) + v8 + 8);
      if ( *((char *)v10 + 23) < 0 )
        v11 = *v10;
      else
        v11 = *(_QWORD *)(*((_QWORD *)this + 4) + v8 + 8);
      google::protobuf::internal::WireFormatLite::VerifyUtf8String(v11);
      a2 = (google::protobuf::UnknownFieldSet *)sub_1000A2FD0((int)a3, 1, (int)v10, (unsigned __int8 *)a2);
      v8 += 8LL;
    }
    while ( v9 != v8 );
  }
  v12 = *((_QWORD *)this + 1);
  if ( (v12 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (google::protobuf::UnknownFieldSet *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                                                (google::protobuf::internal::WireFormat *)((v12 & 0xFFFFFFFFFFFFFFFELL)
                                                                                         + 8),
                                                a2,
                                                (unsigned __int8 *)a3,
                                                a4);
}