__ZNK6google8protobuf5Field18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::Field::_InternalSerialize(
        google::protobuf::Field *this,
        google::protobuf::UnknownFieldSet *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  unsigned __int8 *v5; // x21
  unsigned int v7; // w8
  unsigned __int64 v8; // x9
  unsigned __int64 v9; // x8
  unsigned __int64 v10; // x10
  unsigned int v11; // w8
  unsigned __int64 v12; // x9
  unsigned __int64 v13; // x8
  unsigned __int64 v14; // x10
  unsigned int v15; // w8
  unsigned __int64 v16; // x9
  unsigned __int64 v17; // x8
  unsigned __int64 v18; // x10
  unsigned __int64 v19; // x0
  unsigned __int64 v20; // x0
  unsigned int v21; // w8
  unsigned __int64 v22; // x9
  unsigned __int64 v23; // x8
  unsigned __int64 v24; // x10
  char v25; // w8
  int v26; // w22
  int i; // w23
  google::protobuf::Option *v28; // x0
  unsigned int v29; // w9
  google::protobuf::UnknownFieldSet *v30; // x1
  unsigned int v31; // w8
  unsigned int v32; // w9
  unsigned int v33; // w10
  unsigned __int64 v34; // x0
  unsigned __int64 v35; // x0
  __int64 v36; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = (unsigned __int8 *)a2;
  v7 = *((_DWORD *)this + 18);
  if ( v7 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    {
      v5 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, (unsigned __int8 *)a2);
      v7 = *((_DWORD *)this + 18);
    }
    *v5 = 8;
    if ( v7 > 0x7F )
    {
      v5[1] = v7 | 0x80;
      v8 = (unsigned __int64)(int)v7 >> 7;
      if ( v7 >> 14 )
      {
        v5 += 3;
        do
        {
          *(v5 - 1) = v8 | 0x80;
          v9 = v8 >> 7;
          ++v5;
          v10 = v8 >> 14;
          v8 >>= 7;
        }
        while ( v10 );
        *(v5 - 1) = v9;
      }
      else
      {
        v5[2] = v8;
        v5 += 3;
      }
    }
    else
    {
      v5[1] = v7;
      v5 += 2;
    }
  }
  v11 = *((_DWORD *)this + 19);
  if ( v11 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v5 )
    {
      v5 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v5);
      v11 = *((_DWORD *)this + 19);
    }
    *v5 = 16;
    if ( v11 > 0x7F )
    {
      v5[1] = v11 | 0x80;
      v12 = (unsigned __int64)(int)v11 >> 7;
      if ( v11 >> 14 )
      {
        v5 += 3;
        do
        {
          *(v5 - 1) = v12 | 0x80;
          v13 = v12 >> 7;
          ++v5;
          v14 = v12 >> 14;
          v12 >>= 7;
        }
        while ( v14 );
        *(v5 - 1) = v13;
      }
      else
      {
        v5[2] = v12;
        v5 += 3;
      }
    }
    else
    {
      v5[1] = v11;
      v5 += 2;
    }
  }
  v15 = *((_DWORD *)this + 20);
  if ( v15 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v5 )
    {
      v5 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v5);
      v15 = *((_DWORD *)this + 20);
    }
    *v5 = 24;
    if ( v15 > 0x7F )
    {
      v5[1] = v15 | 0x80;
      v16 = (unsigned __int64)(int)v15 >> 7;
      if ( v15 >> 14 )
      {
        v5 += 3;
        do
        {
          *(v5 - 1) = v16 | 0x80;
          v17 = v16 >> 7;
          ++v5;
          v18 = v16 >> 14;
          v16 >>= 7;
        }
        while ( v18 );
        *(v5 - 1) = v17;
      }
      else
      {
        v5[2] = v16;
        v5 += 3;
      }
    }
    else
    {
      v5[1] = v15;
      v5 += 2;
    }
  }
  v19 = *((_QWORD *)this + 5) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(char *)(v19 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v19 + 8) )
      goto LABEL_37;
    v19 = *(_QWORD *)v19;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v19 + 23) )
  {
LABEL_36:
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(v19);
    v5 = (unsigned __int8 *)sub_100038F08((int)a3, 4, (unsigned int)*((_QWORD *)this + 5) & 0xFFFFFFFE, v5);
  }
LABEL_37:
  v20 = *((_QWORD *)this + 6) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(char *)(v20 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v20 + 8) )
      goto LABEL_43;
    v20 = *(_QWORD *)v20;
    goto LABEL_42;
  }
  if ( *(_BYTE *)(v20 + 23) )
  {
LABEL_42:
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(v20);
    v5 = (unsigned __int8 *)sub_100038F08((int)a3, 6, (unsigned int)*((_QWORD *)this + 6) & 0xFFFFFFFE, v5);
  }
LABEL_43:
  v21 = *((_DWORD *)this + 21);
  if ( v21 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v5 )
    {
      v5 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v5);
      v21 = *((_DWORD *)this + 21);
    }
    *v5 = 56;
    if ( v21 > 0x7F )
    {
      v5[1] = v21 | 0x80;
      v22 = (unsigned __int64)(int)v21 >> 7;
      if ( v21 >> 14 )
      {
        v5 += 3;
        do
        {
          *(v5 - 1) = v22 | 0x80;
          v23 = v22 >> 7;
          ++v5;
          v24 = v22 >> 14;
          v22 >>= 7;
        }
        while ( v24 );
        *(v5 - 1) = v23;
      }
      else
      {
        v5[2] = v22;
        v5 += 3;
      }
    }
    else
    {
      v5[1] = v21;
      v5 += 2;
    }
  }
  if ( *((_BYTE *)this + 88) )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v5 )
    {
      v5 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v5);
      v25 = *((_BYTE *)this + 88);
    }
    else
    {
      v25 = 1;
    }
    *v5 = 64;
    v5[1] = v25;
    v5 += 2;
  }
  v26 = *((_DWORD *)this + 6);
  if ( v26 )
  {
    for ( i = 0; i != v26; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v5 )
        v5 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v5);
      v28 = *(google::protobuf::Option **)(*((_QWORD *)this + 4) + 8LL * i + 8);
      *v5 = 74;
      v29 = *((_DWORD *)v28 + 8);
      if ( v29 > 0x7F )
      {
        v5[1] = v29 | 0x80;
        v31 = v29 >> 7;
        if ( v29 >> 14 )
        {
          v30 = (google::protobuf::UnknownFieldSet *)(v5 + 3);
          do
          {
            *((_BYTE *)v30 - 1) = v31 | 0x80;
            v32 = v31 >> 7;
            v30 = (google::protobuf::UnknownFieldSet *)((char *)v30 + 1);
            v33 = v31 >> 14;
            v31 >>= 7;
          }
          while ( v33 );
          *((_BYTE *)v30 - 1) = v32;
        }
        else
        {
          v5[2] = v31;
          v30 = (google::protobuf::UnknownFieldSet *)(v5 + 3);
        }
      }
      else
      {
        v5[1] = v29;
        v30 = (google::protobuf::UnknownFieldSet *)(v5 + 2);
      }
      v5 = (unsigned __int8 *)google::protobuf::Option::_InternalSerialize(v28, v30, a3);
    }
  }
  v34 = *((_QWORD *)this + 7) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(char *)(v34 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v34 + 8) )
      goto LABEL_75;
    v34 = *(_QWORD *)v34;
    goto LABEL_74;
  }
  if ( *(_BYTE *)(v34 + 23) )
  {
LABEL_74:
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(v34);
    v5 = (unsigned __int8 *)sub_100038F08((int)a3, 10, (unsigned int)*((_QWORD *)this + 7) & 0xFFFFFFFE, v5);
  }
LABEL_75:
  v35 = *((_QWORD *)this + 8) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(char *)(v35 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v35 + 8) )
      goto LABEL_81;
    v35 = *(_QWORD *)v35;
    goto LABEL_80;
  }
  if ( *(_BYTE *)(v35 + 23) )
  {
LABEL_80:
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(v35);
    v5 = (unsigned __int8 *)sub_100038F08((int)a3, 11, (unsigned int)*((_QWORD *)this + 8) & 0xFFFFFFFE, v5);
  }
LABEL_81:
  v36 = *((_QWORD *)this + 1);
  if ( (v36 & 1) == 0 )
    return v5;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v36 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)v5,
                              (unsigned __int8 *)a3,
                              a4);
}