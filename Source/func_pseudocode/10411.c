__ZNK3TSP21SparseUUIDArray_Entry18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::SparseUUIDArray_Entry::_InternalSerialize(
        TSP::SparseUUIDArray_Entry *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  int v6; // w21
  unsigned int v7; // w9
  unsigned int v8; // w8
  TSP::UUID *v9; // x0
  unsigned int v10; // w9
  unsigned __int8 *v11; // x1
  unsigned int v12; // w8
  unsigned int v13; // w9
  unsigned int v14; // w10
  unsigned int v15; // w9
  unsigned int v16; // w10
  __int64 v17; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 2) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v7 = *((_DWORD *)this + 8);
    *a2 = 8;
    if ( v7 <= 0x7F )
    {
      a2[1] = v7;
      a2 += 2;
      if ( (v6 & 1) == 0 )
        goto LABEL_24;
      goto LABEL_10;
    }
    a2[1] = v7 | 0x80;
    v8 = v7 >> 7;
    if ( v7 >> 14 )
    {
      a2 += 3;
      do
      {
        *(a2 - 1) = v8 | 0x80;
        v13 = v8 >> 7;
        ++a2;
        v14 = v8 >> 14;
        v8 >>= 7;
      }
      while ( v14 );
      *(a2 - 1) = v13;
      if ( (v6 & 1) == 0 )
        goto LABEL_24;
      goto LABEL_10;
    }
    a2[2] = v8;
    a2 += 3;
  }
  if ( (v6 & 1) == 0 )
    goto LABEL_24;
LABEL_10:
  if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
  v9 = (TSP::UUID *)*((_QWORD *)this + 3);
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
        v15 = v12 >> 7;
        ++v11;
        v16 = v12 >> 14;
        v12 >>= 7;
      }
      while ( v16 );
      *(v11 - 1) = v15;
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
  a2 = TSP::UUID::_InternalSerialize(v9, v11, a3, a4);
LABEL_24:
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