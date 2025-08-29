__ZNK3TSP16LargeObjectArray18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::LargeObjectArray::_InternalSerialize(
        TSP::LargeObjectArray *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  TSP::LargeArray *v6; // x0
  unsigned int v7; // w9
  unsigned __int8 *v8; // x1
  unsigned int v9; // w8
  unsigned int v10; // w9
  unsigned int v11; // w10
  __int64 v12; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( (*((_BYTE *)this + 16) & 1) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v6 = (TSP::LargeArray *)*((_QWORD *)this + 3);
    *a2 = 10;
    v7 = *((_DWORD *)v6 + 5);
    if ( v7 > 0x7F )
    {
      a2[1] = v7 | 0x80;
      v9 = v7 >> 7;
      if ( v7 >> 14 )
      {
        v8 = a2 + 3;
        do
        {
          *(v8 - 1) = v9 | 0x80;
          v10 = v9 >> 7;
          ++v8;
          v11 = v9 >> 14;
          v9 >>= 7;
        }
        while ( v11 );
        *(v8 - 1) = v10;
      }
      else
      {
        a2[2] = v9;
        v8 = a2 + 3;
      }
    }
    else
    {
      a2[1] = v7;
      v8 = a2 + 2;
    }
    a2 = TSP::LargeArray::_InternalSerialize(v6, v8, a3, a4);
  }
  v12 = *((_QWORD *)this + 1);
  if ( (v12 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v12 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)a2,
                              (unsigned __int8 *)a3,
                              a4);
}