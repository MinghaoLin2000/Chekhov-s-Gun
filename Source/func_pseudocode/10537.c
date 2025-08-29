__ZNK3TSP17LargeArraySegment18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::LargeArraySegment::_InternalSerialize(
        TSP::LargeArraySegment *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x3
  int v6; // w21
  __int64 v7; // x8
  unsigned __int8 v9; // w8
  unsigned int v10; // w9
  unsigned int v11; // w8
  unsigned int v12; // w9
  unsigned int v13; // w10
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = a2;
  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 2) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v9 = *((_BYTE *)this + 32);
    *v4 = 8;
    v4[1] = v9;
    v4 += 2;
    if ( (v6 & 4) == 0 )
    {
LABEL_3:
      if ( (v6 & 1) == 0 )
        goto LABEL_5;
      goto LABEL_4;
    }
  }
  else if ( (v6 & 4) == 0 )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v10 = *((_DWORD *)this + 9);
  *v4 = 16;
  if ( v10 <= 0x7F )
  {
    v4[1] = v10;
    v4 += 2;
    if ( (v6 & 1) == 0 )
      goto LABEL_5;
LABEL_4:
    v4 = (unsigned __int8 *)sub_100038F08((int)a3, 3, (unsigned int)*((_QWORD *)this + 3) & 0xFFFFFFFE, v4);
    goto LABEL_5;
  }
  v4[1] = v10 | 0x80;
  v11 = v10 >> 7;
  if ( v10 >> 14 )
  {
    v4 += 3;
    do
    {
      *(v4 - 1) = v11 | 0x80;
      v12 = v11 >> 7;
      ++v4;
      v13 = v11 >> 14;
      v11 >>= 7;
    }
    while ( v13 );
    *(v4 - 1) = v12;
    if ( (v6 & 1) != 0 )
      goto LABEL_4;
  }
  else
  {
    v4[2] = v11;
    v4 += 3;
    if ( (v6 & 1) != 0 )
      goto LABEL_4;
  }
LABEL_5:
  v7 = *((_QWORD *)this + 1);
  if ( (v7 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v7 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)v4,
                              (unsigned __int8 *)a3,
                              (google::protobuf::io::EpsCopyOutputStream *)v4);
}