__ZNK6google8protobuf4Type18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
google::protobuf::UnknownFieldSet *__fastcall google::protobuf::Type::_InternalSerialize(
        google::protobuf::Type *this,
        google::protobuf::UnknownFieldSet *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  unsigned __int64 v7; // x0
  int v8; // w22
  int i; // w23
  google::protobuf::Field *v10; // x0
  unsigned int v11; // w9
  google::protobuf::UnknownFieldSet *v12; // x1
  unsigned int v13; // w8
  unsigned int v14; // w9
  unsigned int v15; // w10
  __int64 v16; // x8
  __int64 v17; // x24
  __int64 v18; // x25
  __int64 *v19; // x23
  __int64 v20; // x0
  int v21; // w22
  int j; // w23
  google::protobuf::Option *v23; // x0
  unsigned int v24; // w9
  google::protobuf::UnknownFieldSet *v25; // x1
  unsigned int v26; // w8
  unsigned int v27; // w9
  unsigned int v28; // w10
  google::protobuf::SourceContext *v29; // x0
  unsigned int v30; // w9
  google::protobuf::UnknownFieldSet *v31; // x1
  unsigned int v32; // w8
  unsigned int v33; // w9
  unsigned int v34; // w10
  unsigned int v35; // w8
  unsigned __int64 v36; // x9
  unsigned __int64 v37; // x8
  unsigned __int64 v38; // x10
  __int64 v39; // x8
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v7 = *((_QWORD *)this + 11) & 0xFFFFFFFFFFFFFFFELL;
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
                                                (unsigned int)*((_QWORD *)this + 11) & 0xFFFFFFFE,
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
      v10 = *(google::protobuf::Field **)(*((_QWORD *)this + 4) + 8LL * i + 8);
      *(_BYTE *)a2 = 18;
      v11 = *((_DWORD *)v10 + 23);
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
      a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::Field::_InternalSerialize(v10, v12, a3);
    }
  }
  v16 = *((unsigned int *)this + 12);
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    v18 = 8 * v16;
    do
    {
      v19 = *(__int64 **)(*((_QWORD *)this + 7) + v17 + 8);
      if ( *((char *)v19 + 23) < 0 )
        v20 = *v19;
      else
        v20 = *(_QWORD *)(*((_QWORD *)this + 7) + v17 + 8);
      google::protobuf::internal::WireFormatLite::VerifyUtf8String(v20);
      a2 = (google::protobuf::UnknownFieldSet *)sub_1000A2FD0((int)a3, 3, (int)v19, (unsigned __int8 *)a2);
      v17 += 8LL;
    }
    while ( v18 != v17 );
  }
  v21 = *((_DWORD *)this + 18);
  if ( v21 )
  {
    for ( j = 0; j != v21; ++j )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
        a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                                    a3,
                                                    (unsigned __int8 *)a2);
      v23 = *(google::protobuf::Option **)(*((_QWORD *)this + 10) + 8LL * j + 8);
      *(_BYTE *)a2 = 34;
      v24 = *((_DWORD *)v23 + 8);
      if ( v24 > 0x7F )
      {
        *((_BYTE *)a2 + 1) = v24 | 0x80;
        v26 = v24 >> 7;
        if ( v24 >> 14 )
        {
          v25 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
          do
          {
            *((_BYTE *)v25 - 1) = v26 | 0x80;
            v27 = v26 >> 7;
            v25 = (google::protobuf::UnknownFieldSet *)((char *)v25 + 1);
            v28 = v26 >> 14;
            v26 >>= 7;
          }
          while ( v28 );
          *((_BYTE *)v25 - 1) = v27;
        }
        else
        {
          *((_BYTE *)a2 + 2) = v26;
          v25 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
        }
      }
      else
      {
        *((_BYTE *)a2 + 1) = v24;
        v25 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 2);
      }
      a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::Option::_InternalSerialize(v23, v25, a3);
    }
  }
  if ( this != (google::protobuf::Type *)&google::protobuf::_Type_default_instance_ )
  {
    v29 = (google::protobuf::SourceContext *)*((_QWORD *)this + 12);
    if ( v29 )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      {
        a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                                    a3,
                                                    (unsigned __int8 *)a2);
        v29 = (google::protobuf::SourceContext *)*((_QWORD *)this + 12);
      }
      *(_BYTE *)a2 = 42;
      v30 = *((_DWORD *)v29 + 6);
      if ( v30 > 0x7F )
      {
        *((_BYTE *)a2 + 1) = v30 | 0x80;
        v32 = v30 >> 7;
        if ( v30 >> 14 )
        {
          v31 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
          do
          {
            *((_BYTE *)v31 - 1) = v32 | 0x80;
            v33 = v32 >> 7;
            v31 = (google::protobuf::UnknownFieldSet *)((char *)v31 + 1);
            v34 = v32 >> 14;
            v32 >>= 7;
          }
          while ( v34 );
          *((_BYTE *)v31 - 1) = v33;
        }
        else
        {
          *((_BYTE *)a2 + 2) = v32;
          v31 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
        }
      }
      else
      {
        *((_BYTE *)a2 + 1) = v30;
        v31 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 2);
      }
      a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::SourceContext::_InternalSerialize(v29, v31, a3);
    }
  }
  v35 = *((_DWORD *)this + 26);
  if ( v35 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    {
      a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                                  a3,
                                                  (unsigned __int8 *)a2);
      v35 = *((_DWORD *)this + 26);
    }
    *(_BYTE *)a2 = 48;
    if ( v35 > 0x7F )
    {
      *((_BYTE *)a2 + 1) = v35 | 0x80;
      v36 = (unsigned __int64)(int)v35 >> 7;
      if ( v35 >> 14 )
      {
        a2 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
        do
        {
          *((_BYTE *)a2 - 1) = v36 | 0x80;
          v37 = v36 >> 7;
          a2 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 1);
          v38 = v36 >> 14;
          v36 >>= 7;
        }
        while ( v38 );
        *((_BYTE *)a2 - 1) = v37;
      }
      else
      {
        *((_BYTE *)a2 + 2) = v36;
        a2 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
      }
    }
    else
    {
      *((_BYTE *)a2 + 1) = v35;
      a2 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 2);
    }
  }
  v39 = *((_QWORD *)this + 1);
  if ( (v39 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (google::protobuf::UnknownFieldSet *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                                                (google::protobuf::internal::WireFormat *)((v39 & 0xFFFFFFFFFFFFFFFELL)
                                                                                         + 8),
                                                a2,
                                                (unsigned __int8 *)a3,
                                                a4);
}