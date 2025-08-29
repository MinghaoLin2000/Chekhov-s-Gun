__ZNK6google8protobuf3Api18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
google::protobuf::UnknownFieldSet *__fastcall google::protobuf::Api::_InternalSerialize(
        google::protobuf::Api *this,
        google::protobuf::UnknownFieldSet *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  unsigned __int64 v7; // x0
  int v8; // w22
  int i; // w23
  google::protobuf::Method *v10; // x0
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
  unsigned __int64 v24; // x0
  google::protobuf::SourceContext *v25; // x0
  unsigned int v26; // w9
  google::protobuf::UnknownFieldSet *v27; // x1
  unsigned int v28; // w8
  unsigned int v29; // w9
  unsigned int v30; // w10
  int v31; // w22
  int k; // w23
  google::protobuf::Mixin *v33; // x0
  unsigned int v34; // w9
  google::protobuf::UnknownFieldSet *v35; // x1
  unsigned int v36; // w8
  unsigned int v37; // w9
  unsigned int v38; // w10
  unsigned int v39; // w8
  unsigned __int64 v40; // x9
  unsigned __int64 v41; // x8
  unsigned __int64 v42; // x10
  __int64 v43; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

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
      v10 = *(google::protobuf::Method **)(*((_QWORD *)this + 4) + 8LL * i + 8);
      *(_BYTE *)a2 = 18;
      v11 = *((_DWORD *)v10 + 18);
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
      a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::Method::_InternalSerialize(v10, v12, a3);
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
  v24 = *((_QWORD *)this + 12) & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(char *)(v24 + 23) & 0x80000000) == 0 )
  {
    if ( !*(_BYTE *)(v24 + 23) )
      goto LABEL_37;
    goto LABEL_36;
  }
  if ( *(_QWORD *)(v24 + 8) )
  {
    v24 = *(_QWORD *)v24;
LABEL_36:
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(v24);
    a2 = (google::protobuf::UnknownFieldSet *)sub_100038F08(
                                                (int)a3,
                                                4,
                                                (unsigned int)*((_QWORD *)this + 12) & 0xFFFFFFFE,
                                                (unsigned __int8 *)a2);
  }
LABEL_37:
  if ( this != (google::protobuf::Api *)&google::protobuf::_Api_default_instance_ )
  {
    v25 = (google::protobuf::SourceContext *)*((_QWORD *)this + 13);
    if ( v25 )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      {
        a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                                    a3,
                                                    (unsigned __int8 *)a2);
        v25 = (google::protobuf::SourceContext *)*((_QWORD *)this + 13);
      }
      *(_BYTE *)a2 = 42;
      v26 = *((_DWORD *)v25 + 6);
      if ( v26 > 0x7F )
      {
        *((_BYTE *)a2 + 1) = v26 | 0x80;
        v28 = v26 >> 7;
        if ( v26 >> 14 )
        {
          v27 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
          do
          {
            *((_BYTE *)v27 - 1) = v28 | 0x80;
            v29 = v28 >> 7;
            v27 = (google::protobuf::UnknownFieldSet *)((char *)v27 + 1);
            v30 = v28 >> 14;
            v28 >>= 7;
          }
          while ( v30 );
          *((_BYTE *)v27 - 1) = v29;
        }
        else
        {
          *((_BYTE *)a2 + 2) = v28;
          v27 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
        }
      }
      else
      {
        *((_BYTE *)a2 + 1) = v26;
        v27 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 2);
      }
      a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::SourceContext::_InternalSerialize(v25, v27, a3);
    }
  }
  v31 = *((_DWORD *)this + 18);
  if ( v31 )
  {
    for ( k = 0; k != v31; ++k )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
        a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                                    a3,
                                                    (unsigned __int8 *)a2);
      v33 = *(google::protobuf::Mixin **)(*((_QWORD *)this + 10) + 8LL * k + 8);
      *(_BYTE *)a2 = 50;
      v34 = *((_DWORD *)v33 + 8);
      if ( v34 > 0x7F )
      {
        *((_BYTE *)a2 + 1) = v34 | 0x80;
        v36 = v34 >> 7;
        if ( v34 >> 14 )
        {
          v35 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
          do
          {
            *((_BYTE *)v35 - 1) = v36 | 0x80;
            v37 = v36 >> 7;
            v35 = (google::protobuf::UnknownFieldSet *)((char *)v35 + 1);
            v38 = v36 >> 14;
            v36 >>= 7;
          }
          while ( v38 );
          *((_BYTE *)v35 - 1) = v37;
        }
        else
        {
          *((_BYTE *)a2 + 2) = v36;
          v35 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
        }
      }
      else
      {
        *((_BYTE *)a2 + 1) = v34;
        v35 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 2);
      }
      a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::Mixin::_InternalSerialize(v33, v35, a3);
    }
  }
  v39 = *((_DWORD *)this + 28);
  if ( v39 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    {
      a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                                  a3,
                                                  (unsigned __int8 *)a2);
      v39 = *((_DWORD *)this + 28);
    }
    *(_BYTE *)a2 = 56;
    if ( v39 > 0x7F )
    {
      *((_BYTE *)a2 + 1) = v39 | 0x80;
      v40 = (unsigned __int64)(int)v39 >> 7;
      if ( v39 >> 14 )
      {
        a2 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
        do
        {
          *((_BYTE *)a2 - 1) = v40 | 0x80;
          v41 = v40 >> 7;
          a2 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 1);
          v42 = v40 >> 14;
          v40 >>= 7;
        }
        while ( v42 );
        *((_BYTE *)a2 - 1) = v41;
      }
      else
      {
        *((_BYTE *)a2 + 2) = v40;
        a2 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 3);
      }
    }
    else
    {
      *((_BYTE *)a2 + 1) = v39;
      a2 = (google::protobuf::UnknownFieldSet *)((char *)a2 + 2);
    }
  }
  v43 = *((_QWORD *)this + 1);
  if ( (v43 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (google::protobuf::UnknownFieldSet *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                                                (google::protobuf::internal::WireFormat *)((v43 & 0xFFFFFFFFFFFFFFFELL)
                                                                                         + 8),
                                                a2,
                                                (unsigned __int8 *)a3,
                                                a4);
}