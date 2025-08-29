__ZNK6google8protobuf22ServiceDescriptorProto18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::ServiceDescriptorProto::_InternalSerialize(
        google::protobuf::ServiceDescriptorProto *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x3
  int v6; // w21
  int v7; // w22
  int i; // w23
  google::protobuf::MethodDescriptorProto *v9; // x0
  unsigned int v10; // w9
  unsigned __int8 *v11; // x1
  unsigned int v12; // w8
  unsigned int v13; // w9
  unsigned int v14; // w10
  google::protobuf::ServiceOptions *v15; // x0
  unsigned int v16; // w9
  unsigned __int8 *v17; // x1
  unsigned int v18; // w8
  unsigned int v19; // w9
  unsigned int v20; // w10
  __int64 v21; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = a2;
  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 1) != 0 )
    v4 = (unsigned __int8 *)sub_100038F08((int)a3, 1, (unsigned int)*((_QWORD *)this + 6) & 0xFFFFFFFE, a2);
  v7 = *((_DWORD *)this + 8);
  if ( v7 )
  {
    for ( i = 0; i != v7; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v9 = *(google::protobuf::MethodDescriptorProto **)(*((_QWORD *)this + 5) + 8LL * i + 8);
      *v4 = 18;
      v10 = *((_DWORD *)v9 + 5);
      if ( v10 > 0x7F )
      {
        v4[1] = v10 | 0x80;
        v12 = v10 >> 7;
        if ( v10 >> 14 )
        {
          v11 = v4 + 3;
          do
          {
            *(v11 - 1) = v12 | 0x80;
            v13 = v12 >> 7;
            ++v11;
            v14 = v12 >> 14;
            v12 >>= 7;
          }
          while ( v14 );
          *(v11 - 1) = v13;
        }
        else
        {
          v4[2] = v12;
          v11 = v4 + 3;
        }
      }
      else
      {
        v4[1] = v10;
        v11 = v4 + 2;
      }
      v4 = (unsigned __int8 *)google::protobuf::MethodDescriptorProto::_InternalSerialize(v9, v11, a3);
    }
  }
  if ( (v6 & 2) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v15 = (google::protobuf::ServiceOptions *)*((_QWORD *)this + 7);
    *v4 = 26;
    v16 = *((_DWORD *)v15 + 11);
    if ( v16 > 0x7F )
    {
      v4[1] = v16 | 0x80;
      v18 = v16 >> 7;
      if ( v16 >> 14 )
      {
        v17 = v4 + 3;
        do
        {
          *(v17 - 1) = v18 | 0x80;
          v19 = v18 >> 7;
          ++v17;
          v20 = v18 >> 14;
          v18 >>= 7;
        }
        while ( v20 );
        *(v17 - 1) = v19;
      }
      else
      {
        v4[2] = v18;
        v17 = v4 + 3;
      }
    }
    else
    {
      v4[1] = v16;
      v17 = v4 + 2;
    }
    v4 = (unsigned __int8 *)google::protobuf::ServiceOptions::_InternalSerialize(v15, v17, a3);
  }
  v21 = *((_QWORD *)this + 1);
  if ( (v21 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v21 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)v4,
                              (unsigned __int8 *)a3,
                              (google::protobuf::io::EpsCopyOutputStream *)v4);
}