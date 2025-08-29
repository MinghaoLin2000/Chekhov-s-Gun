__ZNK6google8protobuf5Value18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
const google::protobuf::UnknownFieldSet *__fastcall google::protobuf::Value::_InternalSerialize(
        google::protobuf::Value *this,
        google::protobuf::UnknownFieldSet *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  const google::protobuf::UnknownFieldSet *v5; // x21
  int v7; // w8
  unsigned int v8; // w8
  _BYTE *v9; // x9
  unsigned int v10; // w10
  unsigned __int64 v11; // x8
  unsigned __int64 v12; // x9
  unsigned __int64 v13; // x10
  __int64 v14; // d0
  unsigned __int64 v15; // x8
  unsigned __int64 v16; // x0
  __int64 *v17; // x2
  bool v18; // w8
  google::protobuf::Struct *v19; // x0
  unsigned int v20; // w9
  unsigned __int8 *v21; // x1
  unsigned int v22; // w8
  unsigned int v23; // w9
  unsigned int v24; // w10
  google::protobuf::ListValue *v25; // x0
  unsigned int v26; // w9
  unsigned __int8 *v27; // x1
  unsigned int v28; // w8
  unsigned int v29; // w9
  unsigned int v30; // w10
  __int64 v31; // x8
  _BYTE *v33; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = a2;
  v7 = *((_DWORD *)this + 7);
  if ( v7 == 1 )
  {
    if ( *(_QWORD *)a3 > (unsigned __int64)a2
      || (v33 = (_BYTE *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, (unsigned __int8 *)a2),
          v5 = (const google::protobuf::UnknownFieldSet *)v33,
          *((_DWORD *)this + 7) == 1) )
    {
      v8 = *((_DWORD *)this + 4);
      *(_BYTE *)v5 = 8;
      v9 = (char *)v5 + 1;
      if ( v8 > 0x7F )
      {
        v10 = v8;
        *v9 = v8 | 0x80;
        v11 = (unsigned __int64)(int)v8 >> 7;
        if ( v10 >> 14 )
        {
          v5 = (const google::protobuf::UnknownFieldSet *)((char *)v5 + 3);
          do
          {
            *((_BYTE *)v5 - 1) = v11 | 0x80;
            v12 = v11 >> 7;
            v5 = (const google::protobuf::UnknownFieldSet *)((char *)v5 + 1);
            v13 = v11 >> 14;
            v11 >>= 7;
          }
          while ( v13 );
          *((_BYTE *)v5 - 1) = v12;
        }
        else
        {
          *((_BYTE *)v5 + 2) = v11;
          v5 = (const google::protobuf::UnknownFieldSet *)((char *)v5 + 3);
        }
        goto LABEL_10;
      }
    }
    else
    {
      LOBYTE(v8) = 0;
      *v33 = 8;
      v9 = v33 + 1;
    }
    *v9 = v8;
    v5 = (const google::protobuf::UnknownFieldSet *)(v9 + 1);
LABEL_10:
    v7 = *((_DWORD *)this + 7);
  }
  if ( v7 == 2 )
  {
    if ( *(_QWORD *)a3 > (unsigned __int64)v5
      || (v5 = (const google::protobuf::UnknownFieldSet *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                                            a3,
                                                            (unsigned __int8 *)v5),
          v14 = 0LL,
          *((_DWORD *)this + 7) == 2) )
    {
      v14 = *((_QWORD *)this + 2);
    }
    *(_BYTE *)v5 = 17;
    *(_QWORD *)((char *)v5 + 1) = v14;
    v5 = (const google::protobuf::UnknownFieldSet *)((char *)v5 + 9);
    v7 = *((_DWORD *)this + 7);
  }
  if ( v7 == 3 )
  {
    v15 = *((_QWORD *)this + 2) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v15 + 23) < 0 )
      v16 = *(_QWORD *)v15;
    else
      v16 = *((_QWORD *)this + 2) & 0xFFFFFFFFFFFFFFFELL;
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(v16);
    if ( *((_DWORD *)this + 7) == 3 )
      v17 = (__int64 *)(*((_QWORD *)this + 2) & 0xFFFFFFFFFFFFFFFELL);
    else
      v17 = &google::protobuf::internal::fixed_address_empty_string;
    v5 = (const google::protobuf::UnknownFieldSet *)sub_100038F08((int)a3, 3, (int)v17, (unsigned __int8 *)v5);
    v7 = *((_DWORD *)this + 7);
  }
  if ( v7 == 4 )
  {
    v18 = (*(_QWORD *)a3 > (unsigned __int64)v5
        || (v5 = (const google::protobuf::UnknownFieldSet *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                                              a3,
                                                              (unsigned __int8 *)v5),
            *((_DWORD *)this + 7) == 4))
       && *((_BYTE *)this + 16) != 0;
    *(_BYTE *)v5 = 32;
    *((_BYTE *)v5 + 1) = v18;
    v5 = (const google::protobuf::UnknownFieldSet *)((char *)v5 + 2);
    v7 = *((_DWORD *)this + 7);
  }
  if ( v7 == 5 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v5 )
      v5 = (const google::protobuf::UnknownFieldSet *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                                        a3,
                                                        (unsigned __int8 *)v5);
    v19 = (google::protobuf::Struct *)*((_QWORD *)this + 2);
    *(_BYTE *)v5 = 42;
    v20 = *((_DWORD *)v19 + 40);
    if ( v20 > 0x7F )
    {
      *((_BYTE *)v5 + 1) = v20 | 0x80;
      v22 = v20 >> 7;
      if ( v20 >> 14 )
      {
        v21 = (unsigned __int8 *)v5 + 3;
        do
        {
          *(v21 - 1) = v22 | 0x80;
          v23 = v22 >> 7;
          ++v21;
          v24 = v22 >> 14;
          v22 >>= 7;
        }
        while ( v24 );
        *(v21 - 1) = v23;
      }
      else
      {
        *((_BYTE *)v5 + 2) = v22;
        v21 = (unsigned __int8 *)v5 + 3;
      }
    }
    else
    {
      *((_BYTE *)v5 + 1) = v20;
      v21 = (unsigned __int8 *)v5 + 2;
    }
    v5 = google::protobuf::Struct::_InternalSerialize(v19, v21, a3);
    v7 = *((_DWORD *)this + 7);
  }
  if ( v7 == 6 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v5 )
      v5 = (const google::protobuf::UnknownFieldSet *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                                        a3,
                                                        (unsigned __int8 *)v5);
    v25 = (google::protobuf::ListValue *)*((_QWORD *)this + 2);
    *(_BYTE *)v5 = 50;
    v26 = *((_DWORD *)v25 + 10);
    if ( v26 > 0x7F )
    {
      *((_BYTE *)v5 + 1) = v26 | 0x80;
      v28 = v26 >> 7;
      if ( v26 >> 14 )
      {
        v27 = (unsigned __int8 *)v5 + 3;
        do
        {
          *(v27 - 1) = v28 | 0x80;
          v29 = v28 >> 7;
          ++v27;
          v30 = v28 >> 14;
          v28 >>= 7;
        }
        while ( v30 );
        *(v27 - 1) = v29;
      }
      else
      {
        *((_BYTE *)v5 + 2) = v28;
        v27 = (unsigned __int8 *)v5 + 3;
      }
    }
    else
    {
      *((_BYTE *)v5 + 1) = v26;
      v27 = (unsigned __int8 *)v5 + 2;
    }
    v5 = (const google::protobuf::UnknownFieldSet *)google::protobuf::ListValue::_InternalSerialize(v25, v27, a3);
  }
  v31 = *((_QWORD *)this + 1);
  if ( (v31 & 1) == 0 )
    return v5;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
           (google::protobuf::internal::WireFormat *)((v31 & 0xFFFFFFFFFFFFFFFELL) + 8),
           v5,
           a3,
           a4);
}