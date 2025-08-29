__ZNK3TSP16UUIDCoordArchive18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::UUIDCoordArchive::_InternalSerialize(
        TSP::UUIDCoordArchive *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  int v6; // w21
  TSP::UUID *v7; // x0
  unsigned int v8; // w9
  unsigned __int8 *v9; // x1
  unsigned int v10; // w8
  unsigned int v11; // w9
  unsigned int v12; // w10
  TSP::UUID *v13; // x0
  unsigned int v14; // w9
  unsigned __int8 *v15; // x1
  unsigned int v16; // w8
  unsigned int v17; // w9
  unsigned int v18; // w10
  __int64 v19; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 1) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v7 = (TSP::UUID *)*((_QWORD *)this + 3);
    *a2 = 10;
    v8 = *((_DWORD *)v7 + 5);
    if ( v8 > 0x7F )
    {
      a2[1] = v8 | 0x80;
      v10 = v8 >> 7;
      if ( v8 >> 14 )
      {
        v9 = a2 + 3;
        do
        {
          *(v9 - 1) = v10 | 0x80;
          v11 = v10 >> 7;
          ++v9;
          v12 = v10 >> 14;
          v10 >>= 7;
        }
        while ( v12 );
        *(v9 - 1) = v11;
      }
      else
      {
        a2[2] = v10;
        v9 = a2 + 3;
      }
    }
    else
    {
      a2[1] = v8;
      v9 = a2 + 2;
    }
    a2 = TSP::UUID::_InternalSerialize(v7, v9, a3, a4);
  }
  if ( (v6 & 2) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v13 = (TSP::UUID *)*((_QWORD *)this + 4);
    *a2 = 18;
    v14 = *((_DWORD *)v13 + 5);
    if ( v14 > 0x7F )
    {
      a2[1] = v14 | 0x80;
      v16 = v14 >> 7;
      if ( v14 >> 14 )
      {
        v15 = a2 + 3;
        do
        {
          *(v15 - 1) = v16 | 0x80;
          v17 = v16 >> 7;
          ++v15;
          v18 = v16 >> 14;
          v16 >>= 7;
        }
        while ( v18 );
        *(v15 - 1) = v17;
      }
      else
      {
        a2[2] = v16;
        v15 = a2 + 3;
      }
    }
    else
    {
      a2[1] = v14;
      v15 = a2 + 2;
    }
    a2 = TSP::UUID::_InternalSerialize(v13, v15, a3, a4);
  }
  v19 = *((_QWORD *)this + 1);
  if ( (v19 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v19 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)a2,
                              (unsigned __int8 *)a3,
                              a4);
}