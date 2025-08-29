__ZNK3TSP15SupportMetadata18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::SupportMetadata::_InternalSerialize(
        TSP::SupportMetadata *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  unsigned __int8 v6; // w8
  int v7; // w21
  int i; // w22
  TSP::SupportMetadata_DataCollaborationProperties *v9; // x0
  unsigned int v10; // w9
  unsigned __int8 *v11; // x1
  unsigned int v12; // w8
  unsigned int v13; // w9
  unsigned int v14; // w10
  __int64 v15; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( (*((_BYTE *)this + 16) & 1) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v6 = *((_BYTE *)this + 48);
    *a2 = 8;
    a2[1] = v6;
    a2 += 2;
  }
  v7 = *((_DWORD *)this + 8);
  if ( v7 )
  {
    for ( i = 0; i != v7; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
        a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
      v9 = *(TSP::SupportMetadata_DataCollaborationProperties **)(*((_QWORD *)this + 5) + 8LL * i + 8);
      *a2 = 18;
      v10 = *((_DWORD *)v9 + 5);
      if ( v10 > 0x7F )
      {
        a2[1] = v10 | 0x80;
        v12 = v10 >> 7;
        if ( v10 >> 14 )
        {
          v11 = a2 + 3;
          do
          {
            *(v11 - 1) = v12 | 0x80;
            v13 = v12 >> 7;
            ++v11;
            v14 = v12 >> 14;
            v12 >>= 7;
          }
          while ( v14 );
          *(v11 - 1) = v13;
        }
        else
        {
          a2[2] = v12;
          v11 = a2 + 3;
        }
      }
      else
      {
        a2[1] = v10;
        v11 = a2 + 2;
      }
      a2 = TSP::SupportMetadata_DataCollaborationProperties::_InternalSerialize(v9, v11, a3);
    }
  }
  v15 = *((_QWORD *)this + 1);
  if ( (v15 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v15 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)a2,
                              (unsigned __int8 *)a3,
                              a4);
}