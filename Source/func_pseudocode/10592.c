__ZNK3TSP21LargeUUIDArraySegment18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::LargeUUIDArraySegment::_InternalSerialize(
        TSP::LargeUUIDArraySegment *this,
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
  int v12; // w21
  int i; // w22
  TSP::UUID *v14; // x0
  unsigned int v15; // w9
  unsigned __int8 *v16; // x1
  unsigned int v17; // w8
  unsigned int v18; // w9
  unsigned int v19; // w10
  __int64 v20; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( (*((_BYTE *)this + 16) & 1) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v6 = (TSP::LargeArraySegment *)*((_QWORD *)this + 6);
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
  v12 = *((_DWORD *)this + 8);
  if ( v12 )
  {
    for ( i = 0; i != v12; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
        a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
      v14 = *(TSP::UUID **)(*((_QWORD *)this + 5) + 8LL * i + 8);
      *a2 = 18;
      v15 = *((_DWORD *)v14 + 5);
      if ( v15 > 0x7F )
      {
        a2[1] = v15 | 0x80;
        v17 = v15 >> 7;
        if ( v15 >> 14 )
        {
          v16 = a2 + 3;
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
          a2[2] = v17;
          v16 = a2 + 3;
        }
      }
      else
      {
        a2[1] = v15;
        v16 = a2 + 2;
      }
      a2 = TSP::UUID::_InternalSerialize(v14, v16, a3, a4);
    }
  }
  v20 = *((_QWORD *)this + 1);
  if ( (v20 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v20 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)a2,
                              (unsigned __int8 *)a3,
                              a4);
}