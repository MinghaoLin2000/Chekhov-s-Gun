__ZNK3TSP11ArchiveInfo18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::ArchiveInfo::_InternalSerialize(
        TSP::ArchiveInfo *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  int v6; // w21
  unsigned __int64 v7; // x9
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x9
  unsigned __int64 v10; // x10
  int v11; // w22
  int i; // w23
  TSP::MessageInfo *v13; // x0
  unsigned int v14; // w9
  unsigned __int8 *v15; // x1
  unsigned int v16; // w8
  unsigned int v17; // w9
  unsigned int v18; // w10
  unsigned __int8 v19; // w8
  __int64 v20; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 1) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v7 = *((_QWORD *)this + 6);
    *a2 = 8;
    if ( v7 > 0x7F )
    {
      a2[1] = v7 | 0x80;
      v8 = v7 >> 7;
      if ( v7 >> 14 )
      {
        a2 += 3;
        do
        {
          *(a2 - 1) = v8 | 0x80;
          v9 = v8 >> 7;
          ++a2;
          v10 = v8 >> 14;
          v8 >>= 7;
        }
        while ( v10 );
        *(a2 - 1) = v9;
      }
      else
      {
        a2[2] = v8;
        a2 += 3;
      }
    }
    else
    {
      a2[1] = v7;
      a2 += 2;
    }
  }
  v11 = *((_DWORD *)this + 8);
  if ( v11 )
  {
    for ( i = 0; i != v11; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
        a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
      v13 = *(TSP::MessageInfo **)(*((_QWORD *)this + 5) + 8LL * i + 8);
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
      a2 = (unsigned __int8 *)TSP::MessageInfo::_InternalSerialize(v13, (google::protobuf::UnknownFieldSet *)v15, a3);
    }
  }
  if ( (v6 & 2) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v19 = *((_BYTE *)this + 56);
    *a2 = 24;
    a2[1] = v19;
    a2 += 2;
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