__ZNK6google8protobuf21ExtensionRangeOptions18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
const google::protobuf::UnknownFieldSet *__fastcall google::protobuf::ExtensionRangeOptions::_InternalSerialize(
        google::protobuf::ExtensionRangeOptions *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  int v6; // w21
  int i; // w22
  google::protobuf::UninterpretedOption *v8; // x0
  unsigned int v9; // w9
  unsigned __int8 *v10; // x1
  unsigned int v11; // w8
  unsigned int v12; // w9
  unsigned int v13; // w10
  const google::protobuf::UnknownFieldSet *result; // x0
  google::protobuf::io::EpsCopyOutputStream *v15; // x3
  __int64 v16; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = *((_DWORD *)this + 12);
  if ( v6 )
  {
    for ( i = 0; i != v6; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
        a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
      v8 = *(google::protobuf::UninterpretedOption **)(*((_QWORD *)this + 7) + 8LL * i + 8);
      *(_WORD *)a2 = 16058;
      v9 = *((_DWORD *)v8 + 5);
      if ( v9 > 0x7F )
      {
        a2[2] = v9 | 0x80;
        v11 = v9 >> 7;
        if ( v9 >> 14 )
        {
          v10 = a2 + 4;
          do
          {
            *(v10 - 1) = v11 | 0x80;
            v12 = v11 >> 7;
            ++v10;
            v13 = v11 >> 14;
            v11 >>= 7;
          }
          while ( v13 );
          *(v10 - 1) = v12;
        }
        else
        {
          a2[3] = v11;
          v10 = a2 + 4;
        }
      }
      else
      {
        a2[2] = v9;
        v10 = a2 + 3;
      }
      a2 = (unsigned __int8 *)google::protobuf::UninterpretedOption::_InternalSerialize(v8, v10, a3);
    }
  }
  result = (const google::protobuf::UnknownFieldSet *)google::protobuf::internal::ExtensionSet::_InternalSerialize(
                                                        (google::protobuf::ExtensionRangeOptions *)((char *)this + 16),
                                                        1000,
                                                        0x20000000,
                                                        a2,
                                                        a3);
  v16 = *((_QWORD *)this + 1);
  if ( (v16 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (const google::protobuf::UnknownFieldSet *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                                                        (google::protobuf::internal::WireFormat *)((v16 & 0xFFFFFFFFFFFFFFFELL)
                                                                                                 + 8),
                                                        result,
                                                        (unsigned __int8 *)a3,
                                                        v15);
  }
  return result;
}