__ZNK6google8protobuf6Method18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
google::protobuf::UnknownFieldSet *__fastcall google::protobuf::Method::_InternalSerialize(
        google::protobuf::Method *this,
        google::protobuf::UnknownFieldSet *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  unsigned __int64 v7; // x0
  unsigned __int64 v8; // x0
  char v9; // w8
  unsigned __int64 v10; // x0
  char v11; // w8
  int v12; // w22
  int i; // w23
  google::protobuf::Option *v14; // x0
  unsigned int v15; // w9
  google::protobuf::UnknownFieldSet *v16; // x1
  unsigned int v17; // w8
  unsigned int v18; // w9
  unsigned int v19; // w10
  unsigned int v20; // w8
  unsigned __int64 v21; // x9
  unsigned __int64 v22; // x8
  unsigned __int64 v23; // x10
  __int64 v24; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v7 = *((_QWORD *)this + 5) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(char *)(v7 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v7 + 8) )
      goto LABEL_7;
    v7 = *(_QWORD *)v7;
    goto LABEL_6;
  }
  if ( *(_BYTE *)(v7 + 23) )
  {
LABEL_6:
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(v7);
    a2 = (google::protobuf::UnknownFieldSet *)sub_100038F08(
                                                (int)a3,
                                                1,
                                                (unsigned int)*((_QWORD *)this + 5) & 0xFFFFFFFE,
                                                (unsigned __int8 *)a2);
  }
LABEL_7:
  v8 = *((_QWORD *)this + 6) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(char *)(v8 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v8 + 8) )
      goto LABEL_13;
    v8 = *(_QWORD *)v8;
    goto LABEL_12;
  }
  if ( *(_BYTE *)(v8 + 23) )
  {
LABEL_12:
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(v8);
    a2 = (google::protobuf::UnknownFieldSet *)sub_100038F08(
                                                (int)a3,
                                                2,
                                                (unsigned int)*((_QWORD *)this + 6) & 0xFFFFFFFE,
                                                (unsigned __int8 *)a2);
  }
LABEL_13:
  if ( *((_BYTE *)this + 64) )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    {
      a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                                  a3,
                                                  (unsigned __int8 *)a2);
      v9 = *((_BYTE *)this + 64);
    }
    else
    {
      v9 = 1;
    }
    *(_BYTE *)a2 = 24;
    *((_BYTE *)a2 + 1) = v9;
    a2 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 2);
  }
  v10 = *((_QWORD *)this + 7) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(char *)(v10 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v10 + 8) )
      goto LABEL_23;
    v10 = *(_QWORD *)v10;
    goto LABEL_22;
  }
  if ( *(_BYTE *)(v10 + 23) )
  {
LABEL_22:
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(v10);
    a2 = (google::protobuf::UnknownFieldSet *)sub_100038F08(
                                                (int)a3,
                                                4,
                                                (unsigned int)*((_QWORD *)this + 7) & 0xFFFFFFFE,
                                                (unsigned __int8 *)a2);
  }
LABEL_23:
  if ( *((_BYTE *)this + 65) )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    {
      a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                                  a3,
                                                  (unsigned __int8 *)a2);
      v11 = *((_BYTE *)this + 65);
    }
    else
    {
      v11 = 1;
    }
    *(_BYTE *)a2 = 40;
    *((_BYTE *)a2 + 1) = v11;
    a2 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 2);
  }
  v12 = *((_DWORD *)this + 6);
  if ( v12 )
  {
    for ( i = 0; i != v12; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
        a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                                    a3,
                                                    (unsigned __int8 *)a2);
      v14 = *(google::protobuf::Option **)(*((_QWORD *)this + 4) + 8LL * i + 8);
      *(_BYTE *)a2 = 50;
      v15 = *((_DWORD *)v14 + 8);
      if ( v15 > 0x7F )
      {
        *((_BYTE *)a2 + 1) = v15 | 0x80;
        v17 = v15 >> 7;
        if ( v15 >> 14 )
        {
          v16 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
          do
          {
            *((_BYTE *)v16 - 1) = v17 | 0x80;
            v18 = v17 >> 7;
            v16 = (google::protobuf::UnknownFieldSet *)((char *)v16 + 1);
            v19 = v17 >> 14;
            v17 >>= 7;
          }
          while ( v19 );
          *((_BYTE *)v16 - 1) = v18;
        }
        else
        {
          *((_BYTE *)a2 + 2) = v17;
          v16 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
        }
      }
      else
      {
        *((_BYTE *)a2 + 1) = v15;
        v16 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 2);
      }
      a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::Option::_InternalSerialize(v14, v16, a3);
    }
  }
  v20 = *((_DWORD *)this + 17);
  if ( v20 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    {
      a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                                  a3,
                                                  (unsigned __int8 *)a2);
      v20 = *((_DWORD *)this + 17);
    }
    *(_BYTE *)a2 = 56;
    if ( v20 > 0x7F )
    {
      *((_BYTE *)a2 + 1) = v20 | 0x80;
      v21 = (unsigned __int64)(int)v20 >> 7;
      if ( v20 >> 14 )
      {
        a2 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
        do
        {
          *((_BYTE *)a2 - 1) = v21 | 0x80;
          v22 = v21 >> 7;
          a2 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 1);
          v23 = v21 >> 14;
          v21 >>= 7;
        }
        while ( v23 );
        *((_BYTE *)a2 - 1) = v22;
      }
      else
      {
        *((_BYTE *)a2 + 2) = v21;
        a2 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
      }
    }
    else
    {
      *((_BYTE *)a2 + 1) = v20;
      a2 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 2);
    }
  }
  v24 = *((_QWORD *)this + 1);
  if ( (v24 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (google::protobuf::UnknownFieldSet *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                                                (google::protobuf::internal::WireFormat *)((v24 & 0xFFFFFFFFFFFFFFFELL)
                                                                                         + 8),
                                                a2,
                                                (unsigned __int8 *)a3,
                                                a4);
}