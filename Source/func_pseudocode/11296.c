__ZNK6google8protobuf13MethodOptions18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
const google::protobuf::UnknownFieldSet *__fastcall google::protobuf::MethodOptions::_InternalSerialize(
        google::protobuf::MethodOptions *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x3
  int v6; // w21
  unsigned __int8 v7; // w8
  unsigned __int64 v8; // x9
  unsigned __int64 v9; // x8
  unsigned __int64 v10; // x9
  unsigned __int64 v11; // x10
  int v12; // w21
  int i; // w22
  google::protobuf::UninterpretedOption *v14; // x0
  unsigned int v15; // w9
  unsigned __int8 *v16; // x1
  unsigned int v17; // w8
  unsigned int v18; // w9
  unsigned int v19; // w10
  const google::protobuf::UnknownFieldSet *result; // x0
  google::protobuf::io::EpsCopyOutputStream *v21; // x3
  __int64 v22; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = a2;
  v6 = *((_DWORD *)this + 10);
  if ( (v6 & 1) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v7 = *((_BYTE *)this + 72);
    *(_WORD *)v4 = 648;
    v4[2] = v7;
    v4 += 3;
  }
  if ( (v6 & 2) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v8 = *((int *)this + 19);
    *(_WORD *)v4 = 656;
    if ( (unsigned int)v8 > 0x7F )
    {
      v4[2] = v8 | 0x80;
      v9 = v8 >> 7;
      if ( (unsigned int)v8 >> 14 )
      {
        v4 += 4;
        do
        {
          *(v4 - 1) = v9 | 0x80;
          v10 = v9 >> 7;
          ++v4;
          v11 = v9 >> 14;
          v9 >>= 7;
        }
        while ( v11 );
        *(v4 - 1) = v10;
      }
      else
      {
        v4[3] = v9;
        v4 += 4;
      }
    }
    else
    {
      v4[2] = v8;
      v4 += 3;
    }
  }
  v12 = *((_DWORD *)this + 14);
  if ( v12 )
  {
    for ( i = 0; i != v12; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v14 = *(google::protobuf::UninterpretedOption **)(*((_QWORD *)this + 8) + 8LL * i + 8);
      *(_WORD *)v4 = 16058;
      v15 = *((_DWORD *)v14 + 5);
      if ( v15 > 0x7F )
      {
        v4[2] = v15 | 0x80;
        v17 = v15 >> 7;
        if ( v15 >> 14 )
        {
          v16 = v4 + 4;
          do
          {
            *(v16 - 1) = v17 | 0x80;
            v18 = v17 >> 7;
            ++v16;
            v19 = v17 >> 14;
            v17 >>= 7;
          }
          while ( v19 );
          *(v16 - 1) = v18;
        }
        else
        {
          v4[3] = v17;
          v16 = v4 + 4;
        }
      }
      else
      {
        v4[2] = v15;
        v16 = v4 + 3;
      }
      v4 = (unsigned __int8 *)google::protobuf::UninterpretedOption::_InternalSerialize(v14, v16, a3);
    }
  }
  result = (const google::protobuf::UnknownFieldSet *)google::protobuf::internal::ExtensionSet::_InternalSerialize(
                                                        (google::protobuf::MethodOptions *)((char *)this + 16),
                                                        1000,
                                                        0x20000000,
                                                        v4,
                                                        a3);
  v22 = *((_QWORD *)this + 1);
  if ( (v22 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (const google::protobuf::UnknownFieldSet *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                                                        (google::protobuf::internal::WireFormat *)((v22 & 0xFFFFFFFFFFFFFFFELL)
                                                                                                 + 8),
                                                        result,
                                                        (unsigned __int8 *)a3,
                                                        v21);
  }
  return result;
}