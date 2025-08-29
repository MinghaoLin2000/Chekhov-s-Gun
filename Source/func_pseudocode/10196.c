__ZNK3TSP4Size18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::Size::_InternalSerialize(
        TSP::Size *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  int v6; // w21
  int v7; // s0
  int v8; // s0
  __int64 v9; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 1) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v7 = *((_DWORD *)this + 6);
    *a2 = 13;
    *(_DWORD *)(a2 + 1) = v7;
    a2 += 5;
  }
  if ( (v6 & 2) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v8 = *((_DWORD *)this + 7);
    *a2 = 21;
    *(_DWORD *)(a2 + 1) = v8;
    a2 += 5;
  }
  v9 = *((_QWORD *)this + 1);
  if ( (v9 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v9 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)a2,
                              (unsigned __int8 *)a3,
                              a4);
}