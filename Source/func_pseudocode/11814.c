__ZNK6google8protobuf11UInt32Value18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::UInt32Value::_InternalSerialize(
        google::protobuf::UInt32Value *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  unsigned int v6; // w8
  unsigned int v7; // w9
  unsigned int v8; // w8
  unsigned int v9; // w10
  __int64 v10; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v6 = *((_DWORD *)this + 4);
  if ( v6 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    {
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
      v6 = *((_DWORD *)this + 4);
    }
    *a2 = 8;
    if ( v6 > 0x7F )
    {
      a2[1] = v6 | 0x80;
      v7 = v6 >> 7;
      if ( v6 >> 14 )
      {
        a2 += 3;
        do
        {
          *(a2 - 1) = v7 | 0x80;
          v8 = v7 >> 7;
          ++a2;
          v9 = v7 >> 14;
          v7 >>= 7;
        }
        while ( v9 );
        *(a2 - 1) = v8;
      }
      else
      {
        a2[2] = v7;
        a2 += 3;
      }
    }
    else
    {
      a2[1] = v6;
      a2 += 2;
    }
  }
  v10 = *((_QWORD *)this + 1);
  if ( (v10 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v10 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)a2,
                              (unsigned __int8 *)a3,
                              a4);
}