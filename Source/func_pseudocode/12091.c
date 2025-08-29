__ZNK6google8protobuf4Enum18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
google::protobuf::UnknownFieldSet *__fastcall google::protobuf::Enum::_InternalSerialize(
        google::protobuf::Enum *this,
        google::protobuf::UnknownFieldSet *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  unsigned __int64 v7; // x0
  int v8; // w22
  int i; // w23
  google::protobuf::EnumValue *v10; // x0
  unsigned int v11; // w9
  google::protobuf::UnknownFieldSet *v12; // x1
  unsigned int v13; // w8
  unsigned int v14; // w9
  unsigned int v15; // w10
  int v16; // w22
  int j; // w23
  google::protobuf::Option *v18; // x0
  unsigned int v19; // w9
  google::protobuf::UnknownFieldSet *v20; // x1
  unsigned int v21; // w8
  unsigned int v22; // w9
  unsigned int v23; // w10
  google::protobuf::SourceContext *v24; // x0
  unsigned int v25; // w9
  google::protobuf::UnknownFieldSet *v26; // x1
  unsigned int v27; // w8
  unsigned int v28; // w9
  unsigned int v29; // w10
  unsigned int v30; // w8
  unsigned __int64 v31; // x9
  unsigned __int64 v32; // x8
  unsigned __int64 v33; // x10
  __int64 v34; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v7 = *((_QWORD *)this + 8) & 0xFFFFFFFFFFFFFFFELL;
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
                                                (unsigned int)*((_QWORD *)this + 8) & 0xFFFFFFFE,
                                                (unsigned __int8 *)a2);
  }
LABEL_7:
  v8 = *((_DWORD *)this + 6);
  if ( v8 )
  {
    for ( i = 0; i != v8; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
        a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                                    a3,
                                                    (unsigned __int8 *)a2);
      v10 = *(google::protobuf::EnumValue **)(*((_QWORD *)this + 4) + 8LL * i + 8);
      *(_BYTE *)a2 = 18;
      v11 = *((_DWORD *)v10 + 13);
      if ( v11 > 0x7F )
      {
        *((_BYTE *)a2 + 1) = v11 | 0x80;
        v13 = v11 >> 7;
        if ( v11 >> 14 )
        {
          v12 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
          do
          {
            *((_BYTE *)v12 - 1) = v13 | 0x80;
            v14 = v13 >> 7;
            v12 = (google::protobuf::UnknownFieldSet *)((char *)v12 + 1);
            v15 = v13 >> 14;
            v13 >>= 7;
          }
          while ( v15 );
          *((_BYTE *)v12 - 1) = v14;
        }
        else
        {
          *((_BYTE *)a2 + 2) = v13;
          v12 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
        }
      }
      else
      {
        *((_BYTE *)a2 + 1) = v11;
        v12 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 2);
      }
      a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::EnumValue::_InternalSerialize(v10, v12, a3);
    }
  }
  v16 = *((_DWORD *)this + 12);
  if ( v16 )
  {
    for ( j = 0; j != v16; ++j )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
        a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                                    a3,
                                                    (unsigned __int8 *)a2);
      v18 = *(google::protobuf::Option **)(*((_QWORD *)this + 7) + 8LL * j + 8);
      *(_BYTE *)a2 = 26;
      v19 = *((_DWORD *)v18 + 8);
      if ( v19 > 0x7F )
      {
        *((_BYTE *)a2 + 1) = v19 | 0x80;
        v21 = v19 >> 7;
        if ( v19 >> 14 )
        {
          v20 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
          do
          {
            *((_BYTE *)v20 - 1) = v21 | 0x80;
            v22 = v21 >> 7;
            v20 = (google::protobuf::UnknownFieldSet *)((char *)v20 + 1);
            v23 = v21 >> 14;
            v21 >>= 7;
          }
          while ( v23 );
          *((_BYTE *)v20 - 1) = v22;
        }
        else
        {
          *((_BYTE *)a2 + 2) = v21;
          v20 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
        }
      }
      else
      {
        *((_BYTE *)a2 + 1) = v19;
        v20 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 2);
      }
      a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::Option::_InternalSerialize(v18, v20, a3);
    }
  }
  if ( this != (google::protobuf::Enum *)&google::protobuf::_Enum_default_instance_ )
  {
    v24 = (google::protobuf::SourceContext *)*((_QWORD *)this + 9);
    if ( v24 )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      {
        a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                                    a3,
                                                    (unsigned __int8 *)a2);
        v24 = (google::protobuf::SourceContext *)*((_QWORD *)this + 9);
      }
      *(_BYTE *)a2 = 34;
      v25 = *((_DWORD *)v24 + 6);
      if ( v25 > 0x7F )
      {
        *((_BYTE *)a2 + 1) = v25 | 0x80;
        v27 = v25 >> 7;
        if ( v25 >> 14 )
        {
          v26 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
          do
          {
            *((_BYTE *)v26 - 1) = v27 | 0x80;
            v28 = v27 >> 7;
            v26 = (google::protobuf::UnknownFieldSet *)((char *)v26 + 1);
            v29 = v27 >> 14;
            v27 >>= 7;
          }
          while ( v29 );
          *((_BYTE *)v26 - 1) = v28;
        }
        else
        {
          *((_BYTE *)a2 + 2) = v27;
          v26 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
        }
      }
      else
      {
        *((_BYTE *)a2 + 1) = v25;
        v26 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 2);
      }
      a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::SourceContext::_InternalSerialize(v24, v26, a3);
    }
  }
  v30 = *((_DWORD *)this + 20);
  if ( v30 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    {
      a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                                  a3,
                                                  (unsigned __int8 *)a2);
      v30 = *((_DWORD *)this + 20);
    }
    *(_BYTE *)a2 = 40;
    if ( v30 > 0x7F )
    {
      *((_BYTE *)a2 + 1) = v30 | 0x80;
      v31 = (unsigned __int64)(int)v30 >> 7;
      if ( v30 >> 14 )
      {
        a2 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
        do
        {
          *((_BYTE *)a2 - 1) = v31 | 0x80;
          v32 = v31 >> 7;
          a2 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 1);
          v33 = v31 >> 14;
          v31 >>= 7;
        }
        while ( v33 );
        *((_BYTE *)a2 - 1) = v32;
      }
      else
      {
        *((_BYTE *)a2 + 2) = v31;
        a2 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
      }
    }
    else
    {
      *((_BYTE *)a2 + 1) = v30;
      a2 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 2);
    }
  }
  v34 = *((_QWORD *)this + 1);
  if ( (v34 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (google::protobuf::UnknownFieldSet *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                                                (google::protobuf::internal::WireFormat *)((v34 & 0xFFFFFFFFFFFFFFFELL)
                                                                                         + 8),
                                                a2,
                                                (unsigned __int8 *)a3,
                                                a4);
}