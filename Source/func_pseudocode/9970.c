__ZNK3TSP43SupportMetadata_DataCollaborationProperties18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::SupportMetadata_DataCollaborationProperties::_InternalSerialize(
        TSP::SupportMetadata_DataCollaborationProperties *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x3
  int v6; // w21
  unsigned __int8 v7; // w8
  unsigned __int8 v8; // w8
  unsigned __int64 v9; // x9
  unsigned __int64 v10; // x8
  unsigned __int64 v11; // x9
  unsigned __int64 v12; // x10
  unsigned __int64 v13; // x9
  unsigned __int64 v14; // x8
  unsigned __int64 v15; // x9
  unsigned __int64 v16; // x10
  unsigned __int8 v17; // w8
  unsigned __int64 v18; // x9
  unsigned __int64 v19; // x8
  unsigned __int64 v20; // x9
  unsigned __int64 v21; // x10
  __int64 v22; // x8
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
      goto LABEL_13;
    }
  }
  else if ( (v6 & 2) == 0 )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v7 = *((_BYTE *)this + 32);
  *v4 = 16;
  v4[1] = v7;
  v4 += 2;
  if ( (v6 & 4) == 0 )
  {
LABEL_4:
    if ( (v6 & 0x10) == 0 )
      goto LABEL_5;
    goto LABEL_16;
  }
LABEL_13:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v8 = *((_BYTE *)this + 33);
  *v4 = 24;
  v4[1] = v8;
  v4 += 2;
  if ( (v6 & 0x10) == 0 )
  {
LABEL_5:
    if ( (v6 & 0x20) == 0 )
      goto LABEL_6;
LABEL_27:
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v13 = *((int *)this + 10);
    *v4 = 40;
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
        if ( (v6 & 8) != 0 )
          goto LABEL_38;
      }
      else
      {
        v4[2] = v14;
        v4 += 3;
        if ( (v6 & 8) != 0 )
          goto LABEL_38;
      }
    }
    else
    {
      v4[1] = v13;
      v4 += 2;
      if ( (v6 & 8) != 0 )
        goto LABEL_38;
    }
LABEL_7:
    if ( (v6 & 0x40) == 0 )
      goto LABEL_50;
    goto LABEL_41;
  }
LABEL_16:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v9 = *((int *)this + 9);
  *v4 = 32;
  if ( (unsigned int)v9 > 0x7F )
  {
    v4[1] = v9 | 0x80;
    v10 = v9 >> 7;
    if ( (unsigned int)v9 >> 14 )
    {
      v4 += 3;
      do
      {
        *(v4 - 1) = v10 | 0x80;
        v11 = v10 >> 7;
        ++v4;
        v12 = v10 >> 14;
        v10 >>= 7;
      }
      while ( v12 );
      *(v4 - 1) = v11;
      if ( (v6 & 0x20) != 0 )
        goto LABEL_27;
    }
    else
    {
      v4[2] = v10;
      v4 += 3;
      if ( (v6 & 0x20) != 0 )
        goto LABEL_27;
    }
  }
  else
  {
    v4[1] = v9;
    v4 += 2;
    if ( (v6 & 0x20) != 0 )
      goto LABEL_27;
  }
LABEL_6:
  if ( (v6 & 8) == 0 )
    goto LABEL_7;
LABEL_38:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v17 = *((_BYTE *)this + 34);
  *v4 = 48;
  v4[1] = v17;
  v4 += 2;
  if ( (v6 & 0x40) != 0 )
  {
LABEL_41:
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v18 = *((int *)this + 11);
    *v4 = 56;
    if ( (unsigned int)v18 > 0x7F )
    {
      v4[1] = v18 | 0x80;
      v19 = v18 >> 7;
      if ( (unsigned int)v18 >> 14 )
      {
        v4 += 3;
        do
        {
          *(v4 - 1) = v19 | 0x80;
          v20 = v19 >> 7;
          ++v4;
          v21 = v19 >> 14;
          v19 >>= 7;
        }
        while ( v21 );
        *(v4 - 1) = v20;
      }
      else
      {
        v4[2] = v19;
        v4 += 3;
      }
    }
    else
    {
      v4[1] = v18;
      v4 += 2;
    }
  }
LABEL_50:
  v22 = *((_QWORD *)this + 1);
  if ( (v22 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v22 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)v4,
                              (unsigned __int8 *)a3,
                              (google::protobuf::io::EpsCopyOutputStream *)v4);
}