__ZNK6google8protobuf9Timestamp18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::Timestamp::_InternalSerialize(
        google::protobuf::Timestamp *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  unsigned __int64 v6; // x8
  unsigned __int64 v7; // x9
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x10
  unsigned int v10; // w8
  unsigned __int64 v11; // x9
  unsigned __int64 v12; // x8
  unsigned __int64 v13; // x10
  __int64 v14; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v6 = *((_QWORD *)this + 2);
  if ( v6 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    {
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
      v6 = *((_QWORD *)this + 2);
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
  v10 = *((_DWORD *)this + 6);
  if ( v10 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    {
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
      v10 = *((_DWORD *)this + 6);
    }
    *a2 = 16;
    if ( v10 > 0x7F )
    {
      a2[1] = v10 | 0x80;
      v11 = (unsigned __int64)(int)v10 >> 7;
      if ( v10 >> 14 )
      {
        a2 += 3;
        do
        {
          *(a2 - 1) = v11 | 0x80;
          v12 = v11 >> 7;
          ++a2;
          v13 = v11 >> 14;
          v11 >>= 7;
        }
        while ( v13 );
        *(a2 - 1) = v12;
      }
      else
      {
        a2[2] = v11;
        a2 += 3;
      }
    }
    else
    {
      a2[1] = v10;
      a2 += 2;
    }
  }
  v14 = *((_QWORD *)this + 1);
  if ( (v14 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v14 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)a2,
                              (unsigned __int8 *)a3,
                              a4);
}