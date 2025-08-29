__ZNK6google8protobuf20OneofDescriptorProto18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::OneofDescriptorProto::_InternalSerialize(
        google::protobuf::OneofDescriptorProto *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x3
  int v6; // w21
  google::protobuf::OneofOptions *v7; // x0
  unsigned int v8; // w9
  unsigned __int8 *v9; // x1
  unsigned int v10; // w8
  unsigned int v11; // w9
  unsigned int v12; // w10
  __int64 v13; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = a2;
  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 1) != 0 )
    v4 = (unsigned __int8 *)sub_100038F08((int)a3, 1, (unsigned int)*((_QWORD *)this + 3) & 0xFFFFFFFE, a2);
  if ( (v6 & 2) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v7 = (google::protobuf::OneofOptions *)*((_QWORD *)this + 4);
    *v4 = 18;
    v8 = *((_DWORD *)v7 + 16);
    if ( v8 > 0x7F )
    {
      v4[1] = v8 | 0x80;
      v10 = v8 >> 7;
      if ( v8 >> 14 )
      {
        v9 = v4 + 3;
        do
        {
          *(v9 - 1) = v10 | 0x80;
          v11 = v10 >> 7;
          ++v9;
          v12 = v10 >> 14;
          v10 >>= 7;
        }
        while ( v12 );
        *(v9 - 1) = v11;
      }
      else
      {
        v4[2] = v10;
        v9 = v4 + 3;
      }
    }
    else
    {
      v4[1] = v8;
      v9 = v4 + 2;
    }
    v4 = (unsigned __int8 *)google::protobuf::OneofOptions::_InternalSerialize(v7, v9, a3);
  }
  v13 = *((_QWORD *)this + 1);
  if ( (v13 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v13 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)v4,
                              (unsigned __int8 *)a3,
                              (google::protobuf::io::EpsCopyOutputStream *)v4);
}