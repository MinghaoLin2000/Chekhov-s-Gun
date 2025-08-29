__ZNK3TSP24DatabaseImageDataArchive18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::DatabaseImageDataArchive::_InternalSerialize(
        TSP::DatabaseImageDataArchive *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  int v6; // w21
  TSP::DatabaseDataArchive *v7; // x0
  unsigned int v8; // w9
  unsigned __int8 *v9; // x1
  unsigned int v10; // w8
  unsigned int v11; // w9
  unsigned int v12; // w10
  unsigned __int64 v13; // x9
  unsigned __int64 v14; // x8
  unsigned __int64 v15; // x9
  unsigned __int64 v16; // x10
  __int64 v17; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 1) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v7 = (TSP::DatabaseDataArchive *)*((_QWORD *)this + 3);
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
    a2 = TSP::DatabaseDataArchive::_InternalSerialize(v7, (google::protobuf::UnknownFieldSet *)v9, a3);
  }
  if ( (v6 & 2) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v13 = *((int *)this + 8);
    *a2 = 16;
    if ( (unsigned int)v13 > 0x7F )
    {
      a2[1] = v13 | 0x80;
      v14 = v13 >> 7;
      if ( (unsigned int)v13 >> 14 )
      {
        a2 += 3;
        do
        {
          *(a2 - 1) = v14 | 0x80;
          v15 = v14 >> 7;
          ++a2;
          v16 = v14 >> 14;
          v14 >>= 7;
        }
        while ( v16 );
        *(a2 - 1) = v15;
      }
      else
      {
        a2[2] = v14;
        a2 += 3;
      }
    }
    else
    {
      a2[1] = v13;
      a2 += 2;
    }
  }
  v17 = *((_QWORD *)this + 1);
  if ( (v17 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v17 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)a2,
                              (unsigned __int8 *)a3,
                              a4);
}