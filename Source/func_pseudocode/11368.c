__ZNK6google8protobuf28GeneratedCodeInfo_Annotation18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::GeneratedCodeInfo_Annotation::_InternalSerialize(
        google::protobuf::GeneratedCodeInfo_Annotation *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x4
  google::protobuf::io::EpsCopyOutputStream *v6; // x3
  int v7; // w21
  unsigned __int64 v8; // x9
  unsigned __int64 v9; // x8
  unsigned __int64 v10; // x9
  unsigned __int64 v11; // x10
  unsigned __int64 v12; // x9
  unsigned __int64 v13; // x8
  unsigned __int64 v14; // x9
  unsigned __int64 v15; // x10
  __int64 v16; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = a2;
  v6 = (google::protobuf::io::EpsCopyOutputStream *)*((unsigned int *)this + 10);
  if ( (int)v6 >= 1 )
    v4 = (unsigned __int8 *)sub_1000B9960(a3, 1, (int)this + 24, (int)v6, a2);
  v7 = *((_DWORD *)this + 4);
  if ( (v7 & 1) != 0 )
  {
    v4 = (unsigned __int8 *)sub_100038F08((int)a3, 2, (unsigned int)*((_QWORD *)this + 6) & 0xFFFFFFFE, v4);
    if ( (v7 & 2) == 0 )
    {
LABEL_5:
      if ( (v7 & 4) == 0 )
        goto LABEL_28;
      goto LABEL_19;
    }
  }
  else if ( (v7 & 2) == 0 )
  {
    goto LABEL_5;
  }
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v8 = *((int *)this + 14);
  *v4 = 24;
  if ( (unsigned int)v8 > 0x7F )
  {
    v4[1] = v8 | 0x80;
    v9 = v8 >> 7;
    if ( (unsigned int)v8 >> 14 )
    {
      v4 += 3;
      do
      {
        *(v4 - 1) = v9 | 0x80;
        v10 = v9 >> 7;
        ++v4;
        v11 = v9 >> 14;
        v9 >>= 7;
      }
      while ( v11 );
      *(v4 - 1) = v10;
      if ( (v7 & 4) == 0 )
        goto LABEL_28;
    }
    else
    {
      v4[2] = v9;
      v4 += 3;
      if ( (v7 & 4) == 0 )
        goto LABEL_28;
    }
  }
  else
  {
    v4[1] = v8;
    v4 += 2;
    if ( (v7 & 4) == 0 )
      goto LABEL_28;
  }
LABEL_19:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v12 = *((int *)this + 15);
  *v4 = 32;
  if ( (unsigned int)v12 > 0x7F )
  {
    v4[1] = v12 | 0x80;
    v13 = v12 >> 7;
    if ( (unsigned int)v12 >> 14 )
    {
      v4 += 3;
      do
      {
        *(v4 - 1) = v13 | 0x80;
        v14 = v13 >> 7;
        ++v4;
        v15 = v13 >> 14;
        v13 >>= 7;
      }
      while ( v15 );
      *(v4 - 1) = v14;
    }
    else
    {
      v4[2] = v13;
      v4 += 3;
    }
  }
  else
  {
    v4[1] = v12;
    v4 += 2;
  }
LABEL_28:
  v16 = *((_QWORD *)this + 1);
  if ( (v16 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v16 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)v4,
                              (unsigned __int8 *)a3,
                              v6);
}