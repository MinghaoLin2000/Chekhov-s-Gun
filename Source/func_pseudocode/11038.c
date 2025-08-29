__ZNK6google8protobuf29DescriptorProto_ReservedRange18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::DescriptorProto_ReservedRange::_InternalSerialize(
        google::protobuf::DescriptorProto_ReservedRange *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  int v6; // w21
  unsigned __int64 v7; // x9
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x9
  unsigned __int64 v10; // x8
  unsigned __int64 v11; // x9
  unsigned __int64 v12; // x10
  unsigned __int64 v13; // x9
  unsigned __int64 v14; // x10
  __int64 v15; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 1) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v7 = *((int *)this + 6);
    *a2 = 8;
    if ( (unsigned int)v7 <= 0x7F )
    {
      a2[1] = v7;
      a2 += 2;
      if ( (v6 & 2) == 0 )
        goto LABEL_23;
      goto LABEL_10;
    }
    a2[1] = v7 | 0x80;
    v8 = v7 >> 7;
    if ( (unsigned int)v7 >> 14 )
    {
      a2 += 3;
      do
      {
        *(a2 - 1) = v8 | 0x80;
        v11 = v8 >> 7;
        ++a2;
        v12 = v8 >> 14;
        v8 >>= 7;
      }
      while ( v12 );
      *(a2 - 1) = v11;
      if ( (v6 & 2) == 0 )
        goto LABEL_23;
      goto LABEL_10;
    }
    a2[2] = v8;
    a2 += 3;
  }
  if ( (v6 & 2) == 0 )
    goto LABEL_23;
LABEL_10:
  if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
  v9 = *((int *)this + 7);
  *a2 = 16;
  if ( (unsigned int)v9 > 0x7F )
  {
    a2[1] = v9 | 0x80;
    v10 = v9 >> 7;
    if ( (unsigned int)v9 >> 14 )
    {
      a2 += 3;
      do
      {
        *(a2 - 1) = v10 | 0x80;
        v13 = v10 >> 7;
        ++a2;
        v14 = v10 >> 14;
        v10 >>= 7;
      }
      while ( v14 );
      *(a2 - 1) = v13;
    }
    else
    {
      a2[2] = v10;
      a2 += 3;
    }
  }
  else
  {
    a2[1] = v9;
    a2 += 2;
  }
LABEL_23:
  v15 = *((_QWORD *)this + 1);
  if ( (v15 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v15 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)a2,
                              (unsigned __int8 *)a3,
                              a4);
}