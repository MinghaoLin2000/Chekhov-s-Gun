__ZNK3TSP17ViewStateMetadata18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::ViewStateMetadata::_InternalSerialize(
        TSP::ViewStateMetadata *this,
        google::protobuf::UnknownFieldSet *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x4
  google::protobuf::io::EpsCopyOutputStream *v6; // x3
  int v7; // w21
  TSP::ComponentInfo *v8; // x0
  unsigned int v9; // w9
  unsigned __int8 *v10; // x1
  unsigned int v11; // w8
  unsigned int v12; // w9
  unsigned int v13; // w10
  TSP::UUID *v14; // x0
  unsigned int v15; // w9
  unsigned __int8 *v16; // x1
  unsigned int v17; // w8
  unsigned int v18; // w9
  unsigned int v19; // w10
  int v20; // w21
  int i; // w22
  TSP::ObjectUUIDMapEntry *v22; // x0
  unsigned int v23; // w9
  unsigned __int8 *v24; // x1
  unsigned int v25; // w8
  unsigned int v26; // w9
  unsigned int v27; // w10
  google::protobuf::io::EpsCopyOutputStream *v28; // x3
  __int64 v29; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = (unsigned __int8 *)a2;
  v6 = (google::protobuf::io::EpsCopyOutputStream *)*((unsigned int *)this + 10);
  if ( (int)v6 >= 1 )
    v4 = (unsigned __int8 *)sub_100054554(a3, 1, (int)this + 24, (int)v6, (unsigned __int8 *)a2);
  v7 = *((_DWORD *)this + 4);
  if ( (v7 & 1) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v8 = (TSP::ComponentInfo *)*((_QWORD *)this + 12);
    *v4 = 26;
    v9 = *((_DWORD *)v8 + 5);
    if ( v9 > 0x7F )
    {
      v4[1] = v9 | 0x80;
      v11 = v9 >> 7;
      if ( v9 >> 14 )
      {
        v10 = v4 + 3;
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
        v4[2] = v11;
        v10 = v4 + 3;
      }
    }
    else
    {
      v4[1] = v9;
      v10 = v4 + 2;
    }
    v4 = TSP::ComponentInfo::_InternalSerialize(v8, v10, a3);
  }
  if ( (v7 & 2) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v14 = (TSP::UUID *)*((_QWORD *)this + 13);
    *v4 = 34;
    v15 = *((_DWORD *)v14 + 5);
    if ( v15 > 0x7F )
    {
      v4[1] = v15 | 0x80;
      v17 = v15 >> 7;
      if ( v15 >> 14 )
      {
        v16 = v4 + 3;
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
        v4[2] = v17;
        v16 = v4 + 3;
      }
    }
    else
    {
      v4[1] = v15;
      v16 = v4 + 2;
    }
    v4 = (unsigned __int8 *)TSP::UUID::_InternalSerialize(v14, v16, a3);
  }
  v20 = *((_DWORD *)this + 14);
  if ( v20 )
  {
    for ( i = 0; i != v20; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v22 = *(TSP::ObjectUUIDMapEntry **)(*((_QWORD *)this + 8) + 8LL * i + 8);
      *v4 = 42;
      v23 = *((_DWORD *)v22 + 5);
      if ( v23 > 0x7F )
      {
        v4[1] = v23 | 0x80;
        v25 = v23 >> 7;
        if ( v23 >> 14 )
        {
          v24 = v4 + 3;
          do
          {
            *(v24 - 1) = v25 | 0x80;
            v26 = v25 >> 7;
            ++v24;
            v27 = v25 >> 14;
            v25 >>= 7;
          }
          while ( v27 );
          *(v24 - 1) = v26;
        }
        else
        {
          v4[2] = v25;
          v24 = v4 + 3;
        }
      }
      else
      {
        v4[1] = v23;
        v24 = v4 + 2;
      }
      v4 = TSP::ObjectUUIDMapEntry::_InternalSerialize(v22, v24, a3, v6);
    }
  }
  v28 = (google::protobuf::io::EpsCopyOutputStream *)*((unsigned int *)this + 22);
  if ( (int)v28 > 0 )
    v4 = (unsigned __int8 *)sub_100054554(a3, 6, (int)this + 72, (int)v28, v4);
  v29 = *((_QWORD *)this + 1);
  if ( (v29 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v29 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)v4,
                              (unsigned __int8 *)a3,
                              v28);
}