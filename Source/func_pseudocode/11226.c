__ZNK6google8protobuf12FieldOptions18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
const google::protobuf::UnknownFieldSet *__fastcall google::protobuf::FieldOptions::_InternalSerialize(
        google::protobuf::FieldOptions *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x3
  int v6; // w21
  unsigned __int64 v7; // x9
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x9
  unsigned __int64 v10; // x10
  unsigned __int8 v11; // w8
  unsigned __int8 v12; // w8
  unsigned __int8 v13; // w8
  unsigned __int64 v14; // x9
  unsigned __int64 v15; // x8
  unsigned __int64 v16; // x9
  unsigned __int64 v17; // x10
  unsigned __int8 v18; // w8
  int v19; // w21
  int i; // w22
  google::protobuf::UninterpretedOption *v21; // x0
  unsigned int v22; // w9
  unsigned __int8 *v23; // x1
  unsigned int v24; // w8
  unsigned int v25; // w9
  unsigned int v26; // w10
  const google::protobuf::UnknownFieldSet *result; // x0
  google::protobuf::io::EpsCopyOutputStream *v28; // x3
  __int64 v29; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = a2;
  v6 = *((_DWORD *)this + 10);
  if ( (v6 & 1) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v7 = *((int *)this + 18);
    *v4 = 8;
    if ( (unsigned int)v7 > 0x7F )
    {
      v4[1] = v7 | 0x80;
      v8 = v7 >> 7;
      if ( (unsigned int)v7 >> 14 )
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
        if ( (v6 & 2) != 0 )
          goto LABEL_19;
      }
      else
      {
        v4[2] = v8;
        v4 += 3;
        if ( (v6 & 2) != 0 )
          goto LABEL_19;
      }
    }
    else
    {
      v4[1] = v7;
      v4 += 2;
      if ( (v6 & 2) != 0 )
        goto LABEL_19;
    }
LABEL_3:
    if ( (v6 & 8) == 0 )
      goto LABEL_4;
    goto LABEL_22;
  }
  if ( (v6 & 2) == 0 )
    goto LABEL_3;
LABEL_19:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v11 = *((_BYTE *)this + 76);
  *v4 = 16;
  v4[1] = v11;
  v4 += 2;
  if ( (v6 & 8) == 0 )
  {
LABEL_4:
    if ( (v6 & 4) == 0 )
      goto LABEL_5;
    goto LABEL_25;
  }
LABEL_22:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v12 = *((_BYTE *)this + 78);
  *v4 = 24;
  v4[1] = v12;
  v4 += 2;
  if ( (v6 & 4) == 0 )
  {
LABEL_5:
    if ( (v6 & 0x20) == 0 )
      goto LABEL_6;
    goto LABEL_28;
  }
LABEL_25:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v13 = *((_BYTE *)this + 77);
  *v4 = 40;
  v4[1] = v13;
  v4 += 2;
  if ( (v6 & 0x20) == 0 )
  {
LABEL_6:
    if ( (v6 & 0x10) == 0 )
      goto LABEL_42;
    goto LABEL_39;
  }
LABEL_28:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v14 = *((int *)this + 20);
  *v4 = 48;
  if ( (unsigned int)v14 > 0x7F )
  {
    v4[1] = v14 | 0x80;
    v15 = v14 >> 7;
    if ( (unsigned int)v14 >> 14 )
    {
      v4 += 3;
      do
      {
        *(v4 - 1) = v15 | 0x80;
        v16 = v15 >> 7;
        ++v4;
        v17 = v15 >> 14;
        v15 >>= 7;
      }
      while ( v17 );
      *(v4 - 1) = v16;
      if ( (v6 & 0x10) == 0 )
        goto LABEL_42;
    }
    else
    {
      v4[2] = v15;
      v4 += 3;
      if ( (v6 & 0x10) == 0 )
        goto LABEL_42;
    }
  }
  else
  {
    v4[1] = v14;
    v4 += 2;
    if ( (v6 & 0x10) == 0 )
      goto LABEL_42;
  }
LABEL_39:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v18 = *((_BYTE *)this + 79);
  *v4 = 80;
  v4[1] = v18;
  v4 += 2;
LABEL_42:
  v19 = *((_DWORD *)this + 14);
  if ( v19 )
  {
    for ( i = 0; i != v19; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v21 = *(google::protobuf::UninterpretedOption **)(*((_QWORD *)this + 8) + 8LL * i + 8);
      *(_WORD *)v4 = 16058;
      v22 = *((_DWORD *)v21 + 5);
      if ( v22 > 0x7F )
      {
        v4[2] = v22 | 0x80;
        v24 = v22 >> 7;
        if ( v22 >> 14 )
        {
          v23 = v4 + 4;
          do
          {
            *(v23 - 1) = v24 | 0x80;
            v25 = v24 >> 7;
            ++v23;
            v26 = v24 >> 14;
            v24 >>= 7;
          }
          while ( v26 );
          *(v23 - 1) = v25;
        }
        else
        {
          v4[3] = v24;
          v23 = v4 + 4;
        }
      }
      else
      {
        v4[2] = v22;
        v23 = v4 + 3;
      }
      v4 = (unsigned __int8 *)google::protobuf::UninterpretedOption::_InternalSerialize(v21, v23, a3);
    }
  }
  result = (const google::protobuf::UnknownFieldSet *)google::protobuf::internal::ExtensionSet::_InternalSerialize(
                                                        (google::protobuf::FieldOptions *)((char *)this + 16),
                                                        1000,
                                                        0x20000000,
                                                        v4,
                                                        a3);
  v29 = *((_QWORD *)this + 1);
  if ( (v29 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (const google::protobuf::UnknownFieldSet *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                                                        (google::protobuf::internal::WireFormat *)((v29 & 0xFFFFFFFFFFFFFFFELL)
                                                                                                 + 8),
                                                        result,
                                                        (unsigned __int8 *)a3,
                                                        v28);
  }
  return result;
}