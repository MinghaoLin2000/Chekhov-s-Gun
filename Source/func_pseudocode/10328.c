__ZNK3TSP13CFUUIDArchive18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::CFUUIDArchive::_InternalSerialize(
        TSP::CFUUIDArchive *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x3
  int v6; // w21
  unsigned int v7; // w9
  unsigned int v8; // w8
  unsigned int v9; // w9
  unsigned int v10; // w10
  unsigned int v11; // w9
  unsigned int v12; // w8
  unsigned int v13; // w9
  unsigned int v14; // w10
  unsigned int v15; // w9
  unsigned int v16; // w8
  unsigned int v17; // w9
  unsigned int v18; // w10
  unsigned int v19; // w9
  unsigned int v20; // w8
  unsigned int v21; // w9
  unsigned int v22; // w10
  __int64 v23; // x8
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
LABEL_19:
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v11 = *((_DWORD *)this + 9);
      *v4 = 24;
      if ( v11 > 0x7F )
      {
        v4[1] = v11 | 0x80;
        v12 = v11 >> 7;
        if ( v11 >> 14 )
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
          if ( (v6 & 8) != 0 )
            goto LABEL_30;
        }
        else
        {
          v4[2] = v12;
          v4 += 3;
          if ( (v6 & 8) != 0 )
            goto LABEL_30;
        }
      }
      else
      {
        v4[1] = v11;
        v4 += 2;
        if ( (v6 & 8) != 0 )
          goto LABEL_30;
      }
LABEL_5:
      if ( (v6 & 0x10) == 0 )
        goto LABEL_50;
      goto LABEL_41;
    }
  }
  else if ( (v6 & 2) == 0 )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v7 = *((_DWORD *)this + 8);
  *v4 = 16;
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
      if ( (v6 & 4) != 0 )
        goto LABEL_19;
    }
    else
    {
      v4[2] = v8;
      v4 += 3;
      if ( (v6 & 4) != 0 )
        goto LABEL_19;
    }
  }
  else
  {
    v4[1] = v7;
    v4 += 2;
    if ( (v6 & 4) != 0 )
      goto LABEL_19;
  }
LABEL_4:
  if ( (v6 & 8) == 0 )
    goto LABEL_5;
LABEL_30:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v15 = *((_DWORD *)this + 10);
  *v4 = 32;
  if ( v15 > 0x7F )
  {
    v4[1] = v15 | 0x80;
    v16 = v15 >> 7;
    if ( v15 >> 14 )
    {
      v4 += 3;
      do
      {
        *(v4 - 1) = v16 | 0x80;
        v17 = v16 >> 7;
        ++v4;
        v18 = v16 >> 14;
        v16 >>= 7;
      }
      while ( v18 );
      *(v4 - 1) = v17;
      if ( (v6 & 0x10) == 0 )
        goto LABEL_50;
    }
    else
    {
      v4[2] = v16;
      v4 += 3;
      if ( (v6 & 0x10) == 0 )
        goto LABEL_50;
    }
  }
  else
  {
    v4[1] = v15;
    v4 += 2;
    if ( (v6 & 0x10) == 0 )
      goto LABEL_50;
  }
LABEL_41:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v19 = *((_DWORD *)this + 11);
  *v4 = 40;
  if ( v19 > 0x7F )
  {
    v4[1] = v19 | 0x80;
    v20 = v19 >> 7;
    if ( v19 >> 14 )
    {
      v4 += 3;
      do
      {
        *(v4 - 1) = v20 | 0x80;
        v21 = v20 >> 7;
        ++v4;
        v22 = v20 >> 14;
        v20 >>= 7;
      }
      while ( v22 );
      *(v4 - 1) = v21;
    }
    else
    {
      v4[2] = v20;
      v4 += 3;
    }
  }
  else
  {
    v4[1] = v19;
    v4 += 2;
  }
LABEL_50:
  v23 = *((_QWORD *)this + 1);
  if ( (v23 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v23 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)v4,
                              (unsigned __int8 *)a3,
                              (google::protobuf::io::EpsCopyOutputStream *)v4);
}