__ZNK6google8protobuf21MethodDescriptorProto18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::MethodDescriptorProto::_InternalSerialize(
        google::protobuf::MethodDescriptorProto *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x3
  int v6; // w21
  google::protobuf::MethodOptions *v7; // x0
  unsigned int v8; // w9
  unsigned __int8 *v9; // x1
  unsigned int v10; // w8
  unsigned int v11; // w9
  unsigned int v12; // w10
  unsigned __int8 v13; // w8
  unsigned __int8 v14; // w8
  __int64 v15; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = a2;
  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 1) != 0 )
  {
    v4 = (unsigned __int8 *)sub_100038F08((int)a3, 1, (unsigned int)*((_QWORD *)this + 3) & 0xFFFFFFFE, a2);
    if ( (v6 & 2) == 0 )
    {
LABEL_3:
      if ( (v6 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  else if ( (v6 & 2) == 0 )
  {
    goto LABEL_3;
  }
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 2, (unsigned int)*((_QWORD *)this + 4) & 0xFFFFFFFE, v4);
  if ( (v6 & 4) == 0 )
  {
LABEL_4:
    if ( (v6 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_11;
  }
LABEL_10:
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 3, (unsigned int)*((_QWORD *)this + 5) & 0xFFFFFFFE, v4);
  if ( (v6 & 8) == 0 )
  {
LABEL_5:
    if ( (v6 & 0x10) == 0 )
      goto LABEL_6;
    goto LABEL_21;
  }
LABEL_11:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v7 = (google::protobuf::MethodOptions *)*((_QWORD *)this + 6);
  *v4 = 34;
  v8 = *((_DWORD *)v7 + 11);
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
  v4 = (unsigned __int8 *)google::protobuf::MethodOptions::_InternalSerialize(v7, v9, a3);
  if ( (v6 & 0x10) == 0 )
  {
LABEL_6:
    if ( (v6 & 0x20) == 0 )
      goto LABEL_27;
    goto LABEL_24;
  }
LABEL_21:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v13 = *((_BYTE *)this + 56);
  *v4 = 40;
  v4[1] = v13;
  v4 += 2;
  if ( (v6 & 0x20) != 0 )
  {
LABEL_24:
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v14 = *((_BYTE *)this + 57);
    *v4 = 48;
    v4[1] = v14;
    v4 += 2;
  }
LABEL_27:
  v15 = *((_QWORD *)this + 1);
  if ( (v15 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v15 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)v4,
                              (unsigned __int8 *)a3,
                              (google::protobuf::io::EpsCopyOutputStream *)v4);
}