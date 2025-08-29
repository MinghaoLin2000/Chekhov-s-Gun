__ZNK6google8protobuf23SourceCodeInfo_Location18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::SourceCodeInfo_Location::_InternalSerialize(
        google::protobuf::SourceCodeInfo_Location *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x4
  int v6; // w3
  google::protobuf::io::EpsCopyOutputStream *v7; // x3
  int v8; // w21
  __int64 v9; // x8
  __int64 v10; // x21
  __int64 v11; // x22
  __int64 v12; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = a2;
  v6 = *((_DWORD *)this + 10);
  if ( v6 >= 1 )
    v4 = (unsigned __int8 *)sub_1000B9960(a3, 1, (int)this + 24, v6, a2);
  v7 = (google::protobuf::io::EpsCopyOutputStream *)*((unsigned int *)this + 16);
  if ( (int)v7 >= 1 )
    v4 = (unsigned __int8 *)sub_1000B9960(a3, 2, (int)this + 48, (int)v7, v4);
  v8 = *((_DWORD *)this + 4);
  if ( (v8 & 1) != 0 )
    v4 = (unsigned __int8 *)sub_100038F08((int)a3, 3, (unsigned int)*((_QWORD *)this + 12) & 0xFFFFFFFE, v4);
  if ( (v8 & 2) != 0 )
    v4 = (unsigned __int8 *)sub_100038F08((int)a3, 4, (unsigned int)*((_QWORD *)this + 13) & 0xFFFFFFFE, v4);
  v9 = *((unsigned int *)this + 20);
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    v11 = 8 * v9;
    do
    {
      v4 = (unsigned __int8 *)sub_1000A2FD0((int)a3, 6, *(_QWORD *)(*((_QWORD *)this + 11) + v10 + 8), v4);
      v10 += 8LL;
    }
    while ( v11 != v10 );
  }
  v12 = *((_QWORD *)this + 1);
  if ( (v12 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v12 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)v4,
                              (unsigned __int8 *)a3,
                              v7);
}