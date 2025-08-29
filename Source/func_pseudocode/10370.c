__ZNK3TSP19UUIDMultiMapArchive18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::UUIDMultiMapArchive::_InternalSerialize(
        TSP::UUIDMultiMapArchive *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  int v6; // w21
  int i; // w22
  TSP::UUID *v8; // x0
  unsigned int v9; // w9
  unsigned __int8 *v10; // x1
  unsigned int v11; // w8
  unsigned int v12; // w9
  unsigned int v13; // w10
  int v14; // w21
  int j; // w22
  TSP::UUID *v16; // x0
  unsigned int v17; // w9
  unsigned __int8 *v18; // x1
  unsigned int v19; // w8
  unsigned int v20; // w9
  unsigned int v21; // w10
  __int64 v22; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = *((_DWORD *)this + 6);
  if ( v6 )
  {
    for ( i = 0; i != v6; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
        a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
      v8 = *(TSP::UUID **)(*((_QWORD *)this + 4) + 8LL * i + 8);
      *a2 = 10;
      v9 = *((_DWORD *)v8 + 5);
      if ( v9 > 0x7F )
      {
        a2[1] = v9 | 0x80;
        v11 = v9 >> 7;
        if ( v9 >> 14 )
        {
          v10 = a2 + 3;
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
          a2[2] = v11;
          v10 = a2 + 3;
        }
      }
      else
      {
        a2[1] = v9;
        v10 = a2 + 2;
      }
      a2 = TSP::UUID::_InternalSerialize(v8, v10, a3, a4);
    }
  }
  v14 = *((_DWORD *)this + 12);
  if ( v14 )
  {
    for ( j = 0; j != v14; ++j )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
        a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
      v16 = *(TSP::UUID **)(*((_QWORD *)this + 7) + 8LL * j + 8);
      *a2 = 18;
      v17 = *((_DWORD *)v16 + 5);
      if ( v17 > 0x7F )
      {
        a2[1] = v17 | 0x80;
        v19 = v17 >> 7;
        if ( v17 >> 14 )
        {
          v18 = a2 + 3;
          do
          {
            *(v18 - 1) = v19 | 0x80;
            v20 = v19 >> 7;
            ++v18;
            v21 = v19 >> 14;
            v19 >>= 7;
          }
          while ( v21 );
          *(v18 - 1) = v20;
        }
        else
        {
          a2[2] = v19;
          v18 = a2 + 3;
        }
      }
      else
      {
        a2[1] = v17;
        v18 = a2 + 2;
      }
      a2 = TSP::UUID::_InternalSerialize(v16, v18, a3, a4);
    }
  }
  v22 = *((_QWORD *)this + 1);
  if ( (v22 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v22 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)a2,
                              (unsigned __int8 *)a3,
                              a4);
}