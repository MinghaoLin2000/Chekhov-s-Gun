__ZNK3TSP21DataPropertiesEntryV118_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::DataPropertiesEntryV1::_InternalSerialize(
        TSP::DataPropertiesEntryV1 *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x4
  int v6; // w21
  unsigned __int8 v7; // w8
  __int64 v8; // d0
  google::protobuf::io::EpsCopyOutputStream *v9; // x3
  __int64 v10; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = a2;
  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 1) != 0 )
  {
    v4 = (unsigned __int8 *)sub_100038F08((int)a3, 1, (unsigned int)*((_QWORD *)this + 6) & 0xFFFFFFFE, a2);
    if ( (v6 & 8) == 0 )
    {
LABEL_3:
      if ( (v6 & 4) == 0 )
        goto LABEL_12;
      goto LABEL_9;
    }
  }
  else if ( (v6 & 8) == 0 )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v7 = *((_BYTE *)this + 72);
  *v4 = 16;
  v4[1] = v7;
  v4 += 2;
  if ( (v6 & 4) != 0 )
  {
LABEL_9:
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v8 = *((_QWORD *)this + 8);
    *v4 = 25;
    *(_QWORD *)(v4 + 1) = v8;
    v4 += 9;
  }
LABEL_12:
  v9 = (google::protobuf::io::EpsCopyOutputStream *)*((unsigned int *)this + 10);
  if ( (int)v9 >= 1 )
    v4 = (unsigned __int8 *)sub_100054554(a3, 4, (int)this + 24, (int)v9, v4);
  if ( (v6 & 2) != 0 )
    v4 = (unsigned __int8 *)sub_100038F08((int)a3, 5, (unsigned int)*((_QWORD *)this + 7) & 0xFFFFFFFE, v4);
  v10 = *((_QWORD *)this + 1);
  if ( (v10 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v10 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)v4,
                              (unsigned __int8 *)a3,
                              v9);
}