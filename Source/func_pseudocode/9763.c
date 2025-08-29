__ZNK3TSP16DocumentRevision18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::DocumentRevision::_InternalSerialize(
        TSP::DocumentRevision *this,
        google::protobuf::UnknownFieldSet *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x3
  int v6; // w21
  unsigned __int64 v7; // x9
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x9
  unsigned __int64 v10; // x10
  unsigned __int64 v11; // x9
  unsigned __int64 v12; // x8
  unsigned __int64 v13; // x9
  unsigned __int64 v14; // x10
  __int64 v15; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = (unsigned __int8 *)a2;
  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 2) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, (unsigned __int8 *)a2);
    v7 = *((_QWORD *)this + 4);
    *v4 = 8;
    if ( v7 > 0x7F )
    {
      v4[1] = v7 | 0x80;
      v8 = v7 >> 7;
      if ( v7 >> 14 )
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
        if ( (v6 & 1) != 0 )
          goto LABEL_16;
      }
      else
      {
        v4[2] = v8;
        v4 += 3;
        if ( (v6 & 1) != 0 )
          goto LABEL_16;
      }
    }
    else
    {
      v4[1] = v7;
      v4 += 2;
      if ( (v6 & 1) != 0 )
        goto LABEL_16;
    }
LABEL_3:
    if ( (v6 & 4) == 0 )
      goto LABEL_26;
    goto LABEL_17;
  }
  if ( (v6 & 1) == 0 )
    goto LABEL_3;
LABEL_16:
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 2, (unsigned int)*((_QWORD *)this + 3) & 0xFFFFFFFE, v4);
  if ( (v6 & 4) == 0 )
    goto LABEL_26;
LABEL_17:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v11 = *((int *)this + 10);
  *v4 = 24;
  if ( (unsigned int)v11 > 0x7F )
  {
    v4[1] = v11 | 0x80;
    v12 = v11 >> 7;
    if ( (unsigned int)v11 >> 14 )
    {
      v4 += 3;
      do
      {
        *(v4 - 1) = v12 | 0x80;
        v13 = v12 >> 7;
        ++v4;
        v14 = v12 >> 14;
        v12 >>= 7;
      }
      while ( v14 );
      *(v4 - 1) = v13;
    }
    else
    {
      v4[2] = v12;
      v4 += 3;
    }
  }
  else
  {
    v4[1] = v11;
    v4 += 2;
  }
LABEL_26:
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