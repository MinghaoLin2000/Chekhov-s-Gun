__ZNK3TSP23LargeNumberArraySegment18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::LargeNumberArraySegment::_InternalSerialize(
        TSP::LargeNumberArraySegment *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  TSP::LargeArraySegment *v6; // x0
  unsigned int v7; // w9
  unsigned __int8 *v8; // x1
  unsigned int v9; // w8
  unsigned int v10; // w9
  unsigned int v11; // w10
  __int64 v12; // x8
  __int64 v13; // x21
  __int64 v14; // x22
  __int64 v15; // d0
  __int64 v16; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( (*((_BYTE *)this + 16) & 1) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v6 = (TSP::LargeArraySegment *)*((_QWORD *)this + 5);
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
    a2 = TSP::LargeArraySegment::_InternalSerialize(v6, v8, a3);
  }
  v12 = *((unsigned int *)this + 6);
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    v14 = 8 * v12;
    do
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
        a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
      v15 = *(_QWORD *)(*((_QWORD *)this + 4) + v13);
      *a2 = 17;
      *(_QWORD *)(a2 + 1) = v15;
      a2 += 9;
      v13 += 8LL;
    }
    while ( v14 != v13 );
  }
  v16 = *((_QWORD *)this + 1);
  if ( (v16 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v16 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)a2,
                              (unsigned __int8 *)a3,
                              a4);
}