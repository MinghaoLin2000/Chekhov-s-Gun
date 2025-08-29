__ZNK3TSP9FieldInfo18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::FieldInfo::_InternalSerialize(
        TSP::FieldInfo *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x4
  int v6; // w21
  TSP::FieldPath *v7; // x0
  unsigned int v8; // w9
  google::protobuf::UnknownFieldSet *v9; // x1
  unsigned int v10; // w8
  unsigned int v11; // w9
  unsigned int v12; // w10
  unsigned __int64 v13; // x9
  unsigned __int64 v14; // x8
  unsigned __int64 v15; // x9
  unsigned __int64 v16; // x10
  unsigned __int64 v17; // x9
  unsigned __int64 v18; // x8
  unsigned __int64 v19; // x9
  unsigned __int64 v20; // x10
  int v21; // w3
  int v22; // w3
  unsigned __int64 v23; // x9
  unsigned __int64 v24; // x8
  unsigned __int64 v25; // x9
  unsigned __int64 v26; // x10
  google::protobuf::io::EpsCopyOutputStream *v27; // x3
  __int64 v28; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = a2;
  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 2) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v7 = (TSP::FieldPath *)*((_QWORD *)this + 13);
    *v4 = 10;
    v8 = *((_DWORD *)v7 + 9);
    if ( v8 > 0x7F )
    {
      v4[1] = v8 | 0x80;
      v10 = v8 >> 7;
      if ( v8 >> 14 )
      {
        v9 = (google::protobuf::UnknownFieldSet *)(v4 + 3);
        do
        {
          *((_BYTE *)v9 - 1) = v10 | 0x80;
          v11 = v10 >> 7;
          v9 = (google::protobuf::UnknownFieldSet *)((char *)v9 + 1);
          v12 = v10 >> 14;
          v10 >>= 7;
        }
        while ( v12 );
        *((_BYTE *)v9 - 1) = v11;
      }
      else
      {
        v4[2] = v10;
        v9 = (google::protobuf::UnknownFieldSet *)(v4 + 3);
      }
    }
    else
    {
      v4[1] = v8;
      v9 = (google::protobuf::UnknownFieldSet *)(v4 + 2);
    }
    v4 = (unsigned __int8 *)TSP::FieldPath::_InternalSerialize(v7, v9, a3);
    if ( (v6 & 4) == 0 )
    {
LABEL_3:
      if ( (v6 & 8) == 0 )
        goto LABEL_35;
      goto LABEL_26;
    }
  }
  else if ( (v6 & 4) == 0 )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v13 = *((int *)this + 28);
  *v4 = 16;
  if ( (unsigned int)v13 > 0x7F )
  {
    v4[1] = v13 | 0x80;
    v14 = v13 >> 7;
    if ( (unsigned int)v13 >> 14 )
    {
      v4 += 3;
      do
      {
        *(v4 - 1) = v14 | 0x80;
        v15 = v14 >> 7;
        ++v4;
        v16 = v14 >> 14;
        v14 >>= 7;
      }
      while ( v16 );
      *(v4 - 1) = v15;
      if ( (v6 & 8) == 0 )
        goto LABEL_35;
    }
    else
    {
      v4[2] = v14;
      v4 += 3;
      if ( (v6 & 8) == 0 )
        goto LABEL_35;
    }
  }
  else
  {
    v4[1] = v13;
    v4 += 2;
    if ( (v6 & 8) == 0 )
      goto LABEL_35;
  }
LABEL_26:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v17 = *((int *)this + 29);
  *v4 = 24;
  if ( (unsigned int)v17 > 0x7F )
  {
    v4[1] = v17 | 0x80;
    v18 = v17 >> 7;
    if ( (unsigned int)v17 >> 14 )
    {
      v4 += 3;
      do
      {
        *(v4 - 1) = v18 | 0x80;
        v19 = v18 >> 7;
        ++v4;
        v20 = v18 >> 14;
        v18 >>= 7;
      }
      while ( v20 );
      *(v4 - 1) = v19;
    }
    else
    {
      v4[2] = v18;
      v4 += 3;
    }
  }
  else
  {
    v4[1] = v17;
    v4 += 2;
  }
LABEL_35:
  v21 = *((_DWORD *)this + 10);
  if ( v21 >= 1 )
    v4 = (unsigned __int8 *)sub_1000546FC(a3, 4, (int)this + 24, v21, v4);
  v22 = *((_DWORD *)this + 16);
  if ( v22 >= 1 )
    v4 = (unsigned __int8 *)sub_1000546FC(a3, 5, (int)this + 48, v22, v4);
  if ( (v6 & 0x10) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v23 = *((int *)this + 30);
    *v4 = 48;
    if ( (unsigned int)v23 > 0x7F )
    {
      v4[1] = v23 | 0x80;
      v24 = v23 >> 7;
      if ( (unsigned int)v23 >> 14 )
      {
        v4 += 3;
        do
        {
          *(v4 - 1) = v24 | 0x80;
          v25 = v24 >> 7;
          ++v4;
          v26 = v24 >> 14;
          v24 >>= 7;
        }
        while ( v26 );
        *(v4 - 1) = v25;
      }
      else
      {
        v4[2] = v24;
        v4 += 3;
      }
    }
    else
    {
      v4[1] = v23;
      v4 += 2;
    }
  }
  v27 = (google::protobuf::io::EpsCopyOutputStream *)*((unsigned int *)this + 22);
  if ( (int)v27 >= 1 )
    v4 = (unsigned __int8 *)sub_100054554(a3, 7, (int)this + 72, (int)v27, v4);
  if ( (v6 & 1) != 0 )
    v4 = (unsigned __int8 *)sub_100038F08((int)a3, 8, (unsigned int)*((_QWORD *)this + 12) & 0xFFFFFFFE, v4);
  v28 = *((_QWORD *)this + 1);
  if ( (v28 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v28 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)v4,
                              (unsigned __int8 *)a3,
                              v27);
}