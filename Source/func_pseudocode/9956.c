__ZNK3TSP16DocumentMetadata18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::DocumentMetadata::_InternalSerialize(
        TSP::DocumentMetadata *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  int v6; // w21
  unsigned __int8 v7; // w8
  TSP::DataPropertiesV1 *v8; // x0
  unsigned int v9; // w9
  unsigned __int8 *v10; // x1
  unsigned int v11; // w8
  unsigned int v12; // w9
  unsigned int v13; // w10
  __int64 v14; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 2) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v7 = *((_BYTE *)this + 32);
    *a2 = 8;
    a2[1] = v7;
    a2 += 2;
  }
  if ( (v6 & 1) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v8 = (TSP::DataPropertiesV1 *)*((_QWORD *)this + 3);
    *a2 = 26;
    v9 = *((_DWORD *)v8 + 10);
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
    a2 = TSP::DataPropertiesV1::_InternalSerialize(v8, v10, a3, a4);
  }
  v14 = *((_QWORD *)this + 1);
  if ( (v14 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v14 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)a2,
                              (unsigned __int8 *)a3,
                              a4);
}