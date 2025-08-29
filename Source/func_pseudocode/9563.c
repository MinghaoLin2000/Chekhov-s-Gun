__ZNK3TSP19DatabaseDataArchive18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::DatabaseDataArchive::_InternalSerialize(
        TSP::DatabaseDataArchive *this,
        google::protobuf::UnknownFieldSet *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x3
  int v6; // w21
  TSP::Reference *v7; // x0
  unsigned int v8; // w9
  unsigned __int8 *v9; // x1
  unsigned int v10; // w8
  unsigned int v11; // w9
  unsigned int v12; // w10
  unsigned __int64 v13; // x9
  unsigned __int64 v14; // x8
  unsigned __int64 v15; // x9
  unsigned __int64 v16; // x10
  unsigned int v17; // w9
  unsigned int v18; // w8
  unsigned int v19; // w9
  unsigned int v20; // w10
  unsigned __int8 v21; // w8
  __int64 v22; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = (unsigned __int8 *)a2;
  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 4) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, (unsigned __int8 *)a2);
    v7 = (TSP::Reference *)*((_QWORD *)this + 5);
    *v4 = 10;
    v8 = *((_DWORD *)v7 + 5);
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
    v4 = (unsigned __int8 *)TSP::Reference::_InternalSerialize(v7, v9, a3);
    if ( (v6 & 1) == 0 )
    {
LABEL_3:
      if ( (v6 & 2) == 0 )
        goto LABEL_4;
      goto LABEL_19;
    }
  }
  else if ( (v6 & 1) == 0 )
  {
    goto LABEL_3;
  }
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 2, (unsigned int)*((_QWORD *)this + 3) & 0xFFFFFFFE, v4);
  if ( (v6 & 2) == 0 )
  {
LABEL_4:
    if ( (v6 & 8) == 0 )
      goto LABEL_5;
LABEL_20:
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v13 = *((_QWORD *)this + 6);
    *v4 = 32;
    if ( v13 > 0x7F )
    {
      v4[1] = v13 | 0x80;
      v14 = v13 >> 7;
      if ( v13 >> 14 )
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
        if ( (v6 & 0x10) != 0 )
          goto LABEL_31;
      }
      else
      {
        v4[2] = v14;
        v4 += 3;
        if ( (v6 & 0x10) != 0 )
          goto LABEL_31;
      }
    }
    else
    {
      v4[1] = v13;
      v4 += 2;
      if ( (v6 & 0x10) != 0 )
        goto LABEL_31;
    }
LABEL_6:
    if ( (v6 & 0x20) == 0 )
      goto LABEL_45;
    goto LABEL_42;
  }
LABEL_19:
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 3, (unsigned int)*((_QWORD *)this + 4) & 0xFFFFFFFE, v4);
  if ( (v6 & 8) != 0 )
    goto LABEL_20;
LABEL_5:
  if ( (v6 & 0x10) == 0 )
    goto LABEL_6;
LABEL_31:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v17 = *((_DWORD *)this + 14);
  *v4 = 40;
  if ( v17 > 0x7F )
  {
    v4[1] = v17 | 0x80;
    v18 = v17 >> 7;
    if ( v17 >> 14 )
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
      if ( (v6 & 0x20) == 0 )
        goto LABEL_45;
    }
    else
    {
      v4[2] = v18;
      v4 += 3;
      if ( (v6 & 0x20) == 0 )
        goto LABEL_45;
    }
  }
  else
  {
    v4[1] = v17;
    v4 += 2;
    if ( (v6 & 0x20) == 0 )
      goto LABEL_45;
  }
LABEL_42:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v21 = *((_BYTE *)this + 60);
  *v4 = 48;
  v4[1] = v21;
  v4 += 2;
LABEL_45:
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