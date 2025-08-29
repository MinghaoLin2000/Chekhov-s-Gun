__ZNK6google8protobuf11EnumOptions18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
const google::protobuf::UnknownFieldSet *__fastcall google::protobuf::EnumOptions::_InternalSerialize(
        google::protobuf::EnumOptions *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x3
  int v6; // w21
  unsigned __int8 v7; // w8
  unsigned __int8 v8; // w8
  int v9; // w21
  int i; // w22
  google::protobuf::UninterpretedOption *v11; // x0
  unsigned int v12; // w9
  unsigned __int8 *v13; // x1
  unsigned int v14; // w8
  unsigned int v15; // w9
  unsigned int v16; // w10
  const google::protobuf::UnknownFieldSet *result; // x0
  google::protobuf::io::EpsCopyOutputStream *v18; // x3
  __int64 v19; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = a2;
  v6 = *((_DWORD *)this + 10);
  if ( (v6 & 1) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v7 = *((_BYTE *)this + 72);
    *v4 = 16;
    v4[1] = v7;
    v4 += 2;
  }
  if ( (v6 & 2) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v8 = *((_BYTE *)this + 73);
    *v4 = 24;
    v4[1] = v8;
    v4 += 2;
  }
  v9 = *((_DWORD *)this + 14);
  if ( v9 )
  {
    for ( i = 0; i != v9; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v11 = *(google::protobuf::UninterpretedOption **)(*((_QWORD *)this + 8) + 8LL * i + 8);
      *(_WORD *)v4 = 16058;
      v12 = *((_DWORD *)v11 + 5);
      if ( v12 > 0x7F )
      {
        v4[2] = v12 | 0x80;
        v14 = v12 >> 7;
        if ( v12 >> 14 )
        {
          v13 = v4 + 4;
          do
          {
            *(v13 - 1) = v14 | 0x80;
            v15 = v14 >> 7;
            ++v13;
            v16 = v14 >> 14;
            v14 >>= 7;
          }
          while ( v16 );
          *(v13 - 1) = v15;
        }
        else
        {
          v4[3] = v14;
          v13 = v4 + 4;
        }
      }
      else
      {
        v4[2] = v12;
        v13 = v4 + 3;
      }
      v4 = (unsigned __int8 *)google::protobuf::UninterpretedOption::_InternalSerialize(v11, v13, a3);
    }
  }
  result = (const google::protobuf::UnknownFieldSet *)google::protobuf::internal::ExtensionSet::_InternalSerialize(
                                                        (google::protobuf::EnumOptions *)((char *)this + 16),
                                                        1000,
                                                        0x20000000,
                                                        v4,
                                                        a3);
  v19 = *((_QWORD *)this + 1);
  if ( (v19 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (const google::protobuf::UnknownFieldSet *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                                                        (google::protobuf::internal::WireFormat *)((v19 & 0xFFFFFFFFFFFFFFFELL)
                                                                                                 + 8),
                                                        result,
                                                        (unsigned __int8 *)a3,
                                                        v18);
  }
  return result;
}