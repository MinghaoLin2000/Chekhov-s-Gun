__ZNK3TSP11FeatureInfo18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::FeatureInfo::_InternalSerialize(
        TSP::FeatureInfo *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x4
  int v6; // w3
  google::protobuf::io::EpsCopyOutputStream *v7; // x3
  __int64 v8; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = a2;
  if ( (*((_BYTE *)this + 16) & 1) != 0 )
    v4 = (unsigned __int8 *)sub_100038F08((int)a3, 1, (unsigned int)*((_QWORD *)this + 9) & 0xFFFFFFFE, a2);
  v6 = *((_DWORD *)this + 10);
  if ( v6 >= 1 )
    v4 = (unsigned __int8 *)sub_100054554(a3, 2, (int)this + 24, v6, v4);
  v7 = (google::protobuf::io::EpsCopyOutputStream *)*((unsigned int *)this + 16);
  if ( (int)v7 >= 1 )
    v4 = (unsigned __int8 *)sub_100054554(a3, 3, (int)this + 48, (int)v7, v4);
  v8 = *((_QWORD *)this + 1);
  if ( (v8 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v8 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)v4,
                              (unsigned __int8 *)a3,
                              v7);
}