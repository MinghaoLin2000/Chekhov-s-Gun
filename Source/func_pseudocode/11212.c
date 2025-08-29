__ZNK6google8protobuf14MessageOptions18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
const google::protobuf::UnknownFieldSet *__fastcall google::protobuf::MessageOptions::_InternalSerialize(
        google::protobuf::MessageOptions *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x3
  int v6; // w21
  unsigned __int8 v7; // w8
  unsigned __int8 v8; // w8
  unsigned __int8 v9; // w8
  unsigned __int8 v10; // w8
  int v11; // w21
  int i; // w22
  google::protobuf::UninterpretedOption *v13; // x0
  unsigned int v14; // w9
  unsigned __int8 *v15; // x1
  unsigned int v16; // w8
  unsigned int v17; // w9
  unsigned int v18; // w10
  const google::protobuf::UnknownFieldSet *result; // x0
  google::protobuf::io::EpsCopyOutputStream *v20; // x3
  __int64 v21; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = a2;
  v6 = *((_DWORD *)this + 10);
  if ( (v6 & 1) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v7 = *((_BYTE *)this + 72);
    *v4 = 8;
    v4[1] = v7;
    v4 += 2;
    if ( (v6 & 2) == 0 )
    {
LABEL_3:
      if ( (v6 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_12;
    }
  }
  else if ( (v6 & 2) == 0 )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v8 = *((_BYTE *)this + 73);
  *v4 = 16;
  v4[1] = v8;
  v4 += 2;
  if ( (v6 & 4) == 0 )
  {
LABEL_4:
    if ( (v6 & 8) == 0 )
      goto LABEL_18;
    goto LABEL_15;
  }
LABEL_12:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v9 = *((_BYTE *)this + 74);
  *v4 = 24;
  v4[1] = v9;
  v4 += 2;
  if ( (v6 & 8) != 0 )
  {
LABEL_15:
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v10 = *((_BYTE *)this + 75);
    *v4 = 56;
    v4[1] = v10;
    v4 += 2;
  }
LABEL_18:
  v11 = *((_DWORD *)this + 14);
  if ( v11 )
  {
    for ( i = 0; i != v11; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v13 = *(google::protobuf::UninterpretedOption **)(*((_QWORD *)this + 8) + 8LL * i + 8);
      *(_WORD *)v4 = 16058;
      v14 = *((_DWORD *)v13 + 5);
      if ( v14 > 0x7F )
      {
        v4[2] = v14 | 0x80;
        v16 = v14 >> 7;
        if ( v14 >> 14 )
        {
          v15 = v4 + 4;
          do
          {
            *(v15 - 1) = v16 | 0x80;
            v17 = v16 >> 7;
            ++v15;
            v18 = v16 >> 14;
            v16 >>= 7;
          }
          while ( v18 );
          *(v15 - 1) = v17;
        }
        else
        {
          v4[3] = v16;
          v15 = v4 + 4;
        }
      }
      else
      {
        v4[2] = v14;
        v15 = v4 + 3;
      }
      v4 = (unsigned __int8 *)google::protobuf::UninterpretedOption::_InternalSerialize(v13, v15, a3);
    }
  }
  result = (const google::protobuf::UnknownFieldSet *)google::protobuf::internal::ExtensionSet::_InternalSerialize(
                                                        (google::protobuf::MessageOptions *)((char *)this + 16),
                                                        1000,
                                                        0x20000000,
                                                        v4,
                                                        a3);
  v21 = *((_QWORD *)this + 1);
  if ( (v21 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (const google::protobuf::UnknownFieldSet *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                                                        (google::protobuf::internal::WireFormat *)((v21 & 0xFFFFFFFFFFFFFFFELL)
                                                                                                 + 8),
                                                        result,
                                                        (unsigned __int8 *)a3,
                                                        v20);
  }
  return result;
}