__ZNK3TSP15ObjectContainer18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::ObjectContainer::_InternalSerialize(
        TSP::ObjectContainer *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  unsigned int v6; // w9
  unsigned int v7; // w8
  unsigned int v8; // w9
  unsigned int v9; // w10
  int v10; // w21
  int i; // w22
  TSP::Reference *v12; // x0
  unsigned int v13; // w9
  unsigned __int8 *v14; // x1
  unsigned int v15; // w8
  unsigned int v16; // w9
  unsigned int v17; // w10
  __int64 v18; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( (*((_BYTE *)this + 16) & 1) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v6 = *((_DWORD *)this + 12);
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
  v10 = *((_DWORD *)this + 8);
  if ( v10 )
  {
    for ( i = 0; i != v10; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
        a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
      v12 = *(TSP::Reference **)(*((_QWORD *)this + 5) + 8LL * i + 8);
      *a2 = 18;
      v13 = *((_DWORD *)v12 + 5);
      if ( v13 > 0x7F )
      {
        a2[1] = v13 | 0x80;
        v15 = v13 >> 7;
        if ( v13 >> 14 )
        {
          v14 = a2 + 3;
          do
          {
            *(v14 - 1) = v15 | 0x80;
            v16 = v15 >> 7;
            ++v14;
            v17 = v15 >> 14;
            v15 >>= 7;
          }
          while ( v17 );
          *(v14 - 1) = v16;
        }
        else
        {
          a2[2] = v15;
          v14 = a2 + 3;
        }
      }
      else
      {
        a2[1] = v13;
        v14 = a2 + 2;
      }
      a2 = TSP::Reference::_InternalSerialize(v12, v14, a3, a4);
    }
  }
  v18 = *((_QWORD *)this + 1);
  if ( (v18 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v18 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)a2,
                              (unsigned __int8 *)a3,
                              a4);
}