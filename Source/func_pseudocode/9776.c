__ZNK3TSP18PasteboardMetadata18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::PasteboardMetadata::_InternalSerialize(
        TSP::PasteboardMetadata *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x4
  int v6; // w3
  int v7; // w21
  int v8; // w22
  int i; // w23
  TSP::DataInfo *v10; // x0
  unsigned int v11; // w9
  unsigned __int8 *v12; // x1
  unsigned int v13; // w8
  unsigned int v14; // w9
  unsigned int v15; // w10
  TSP::UUID *v16; // x0
  unsigned int v17; // w9
  unsigned __int8 *v18; // x1
  unsigned int v19; // w8
  unsigned int v20; // w9
  unsigned int v21; // w10
  TSP::Reference *v22; // x0
  unsigned int v23; // w9
  unsigned __int8 *v24; // x1
  unsigned int v25; // w8
  unsigned int v26; // w9
  unsigned int v27; // w10
  google::protobuf::io::EpsCopyOutputStream *v28; // x3
  __int64 v29; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = a2;
  v6 = *((_DWORD *)this + 10);
  if ( v6 >= 1 )
    v4 = (unsigned __int8 *)sub_100054554(a3, 1, (int)this + 24, v6, a2);
  v7 = *((_DWORD *)this + 4);
  if ( (v7 & 1) != 0 )
    v4 = (unsigned __int8 *)sub_100038F08((int)a3, 2, (unsigned int)*((_QWORD *)this + 12) & 0xFFFFFFFE, v4);
  v8 = *((_DWORD *)this + 14);
  if ( v8 )
  {
    for ( i = 0; i != v8; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v10 = *(TSP::DataInfo **)(*((_QWORD *)this + 8) + 8LL * i + 8);
      *v4 = 26;
      v11 = *((_DWORD *)v10 + 5);
      if ( v11 > 0x7F )
      {
        v4[1] = v11 | 0x80;
        v13 = v11 >> 7;
        if ( v11 >> 14 )
        {
          v12 = v4 + 3;
          do
          {
            *(v12 - 1) = v13 | 0x80;
            v14 = v13 >> 7;
            ++v12;
            v15 = v13 >> 14;
            v13 >>= 7;
          }
          while ( v15 );
          *(v12 - 1) = v14;
        }
        else
        {
          v4[2] = v13;
          v12 = v4 + 3;
        }
      }
      else
      {
        v4[1] = v11;
        v12 = v4 + 2;
      }
      v4 = (unsigned __int8 *)TSP::DataInfo::_InternalSerialize(v10, v12, a3);
    }
  }
  if ( (v7 & 2) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v16 = (TSP::UUID *)*((_QWORD *)this + 13);
    *v4 = 42;
    v17 = *((_DWORD *)v16 + 5);
    if ( v17 > 0x7F )
    {
      v4[1] = v17 | 0x80;
      v19 = v17 >> 7;
      if ( v17 >> 14 )
      {
        v18 = v4 + 3;
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
        v4[2] = v19;
        v18 = v4 + 3;
      }
    }
    else
    {
      v4[1] = v17;
      v18 = v4 + 2;
    }
    v4 = (unsigned __int8 *)TSP::UUID::_InternalSerialize(v16, v18, a3);
  }
  if ( (v7 & 4) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v22 = (TSP::Reference *)*((_QWORD *)this + 14);
    *v4 = 50;
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
    v4 = (unsigned __int8 *)TSP::Reference::_InternalSerialize(v22, v24, a3);
  }
  v28 = (google::protobuf::io::EpsCopyOutputStream *)*((unsigned int *)this + 22);
  if ( (int)v28 >= 1 )
    v4 = (unsigned __int8 *)sub_100054554(a3, 7, (int)this + 72, (int)v28, v4);
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