__ZNK6google8protobuf14ServiceOptions18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
const google::protobuf::UnknownFieldSet *__fastcall google::protobuf::ServiceOptions::_InternalSerialize(
        google::protobuf::ServiceOptions *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x3
  unsigned __int8 v6; // w8
  int v7; // w21
  int i; // w22
  google::protobuf::UninterpretedOption *v9; // x0
  unsigned int v10; // w9
  unsigned __int8 *v11; // x1
  unsigned int v12; // w8
  unsigned int v13; // w9
  unsigned int v14; // w10
  const google::protobuf::UnknownFieldSet *result; // x0
  google::protobuf::io::EpsCopyOutputStream *v16; // x3
  __int64 v17; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = a2;
  if ( (*((_BYTE *)this + 40) & 1) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v6 = *((_BYTE *)this + 72);
    *(_WORD *)v4 = 648;
    v4[2] = v6;
    v4 += 3;
  }
  v7 = *((_DWORD *)this + 14);
  if ( v7 )
  {
    for ( i = 0; i != v7; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v9 = *(google::protobuf::UninterpretedOption **)(*((_QWORD *)this + 8) + 8LL * i + 8);
      *(_WORD *)v4 = 16058;
      v10 = *((_DWORD *)v9 + 5);
      if ( v10 > 0x7F )
      {
        v4[2] = v10 | 0x80;
        v12 = v10 >> 7;
        if ( v10 >> 14 )
        {
          v11 = v4 + 4;
          do
          {
            *(v11 - 1) = v12 | 0x80;
            v13 = v12 >> 7;
            ++v11;
            v14 = v12 >> 14;
            v12 >>= 7;
          }
          while ( v14 );
          *(v11 - 1) = v13;
        }
        else
        {
          v4[3] = v12;
          v11 = v4 + 4;
        }
      }
      else
      {
        v4[2] = v10;
        v11 = v4 + 3;
      }
      v4 = (unsigned __int8 *)google::protobuf::UninterpretedOption::_InternalSerialize(v9, v11, a3);
    }
  }
  result = (const google::protobuf::UnknownFieldSet *)google::protobuf::internal::ExtensionSet::_InternalSerialize(
                                                        (google::protobuf::ServiceOptions *)((char *)this + 16),
                                                        1000,
                                                        0x20000000,
                                                        v4,
                                                        a3);
  v17 = *((_QWORD *)this + 1);
  if ( (v17 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (const google::protobuf::UnknownFieldSet *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                                                        (google::protobuf::internal::WireFormat *)((v17 & 0xFFFFFFFFFFFFFFFELL)
                                                                                                 + 8),
                                                        result,
                                                        (unsigned __int8 *)a3,
                                                        v16);
  }
  return result;
}