__ZNK6google8protobuf24EnumValueDescriptorProto18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::EnumValueDescriptorProto::_InternalSerialize(
        google::protobuf::EnumValueDescriptorProto *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x3
  int v6; // w21
  unsigned __int64 v7; // x9
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x9
  unsigned __int64 v10; // x10
  google::protobuf::EnumValueOptions *v11; // x0
  unsigned int v12; // w9
  unsigned __int8 *v13; // x1
  unsigned int v14; // w8
  unsigned int v15; // w9
  unsigned int v16; // w10
  __int64 v17; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = a2;
  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 1) != 0 )
  {
    v4 = (unsigned __int8 *)sub_100038F08((int)a3, 1, (unsigned int)*((_QWORD *)this + 3) & 0xFFFFFFFE, a2);
    if ( (v6 & 4) == 0 )
    {
LABEL_3:
      if ( (v6 & 2) == 0 )
        goto LABEL_27;
      goto LABEL_17;
    }
  }
  else if ( (v6 & 4) == 0 )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v7 = *((int *)this + 10);
  *v4 = 16;
  if ( (unsigned int)v7 > 0x7F )
  {
    v4[1] = v7 | 0x80;
    v8 = v7 >> 7;
    if ( (unsigned int)v7 >> 14 )
    {
      v4 += 3;
      do
      {
        *(v4 - 1) = v8 | 0x80;
        v9 = v8 >> 7;
        ++v4;
        v10 = v8 >> 14;
        v8 >>= 7;
      }
      while ( v10 );
      *(v4 - 1) = v9;
      if ( (v6 & 2) == 0 )
        goto LABEL_27;
    }
    else
    {
      v4[2] = v8;
      v4 += 3;
      if ( (v6 & 2) == 0 )
        goto LABEL_27;
    }
  }
  else
  {
    v4[1] = v7;
    v4 += 2;
    if ( (v6 & 2) == 0 )
      goto LABEL_27;
  }
LABEL_17:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v11 = (google::protobuf::EnumValueOptions *)*((_QWORD *)this + 4);
  *v4 = 26;
  v12 = *((_DWORD *)v11 + 11);
  if ( v12 > 0x7F )
  {
    v4[1] = v12 | 0x80;
    v14 = v12 >> 7;
    if ( v12 >> 14 )
    {
      v13 = v4 + 3;
      do
      {
        *(v13 - 1) = v14 | 0x80;
        v15 = v14 >> 7;
        ++v13;
        v16 = v14 >> 14;
        v14 >>= 7;
      }
      while ( v16 );
      *(v13 - 1) = v15;
    }
    else
    {
      v4[2] = v14;
      v13 = v4 + 3;
    }
  }
  else
  {
    v4[1] = v12;
    v13 = v4 + 2;
  }
  v4 = (unsigned __int8 *)google::protobuf::EnumValueOptions::_InternalSerialize(v11, v13, a3);
LABEL_27:
  v17 = *((_QWORD *)this + 1);
  if ( (v17 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v17 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)v4,
                              (unsigned __int8 *)a3,
                              (google::protobuf::io::EpsCopyOutputStream *)v4);
}