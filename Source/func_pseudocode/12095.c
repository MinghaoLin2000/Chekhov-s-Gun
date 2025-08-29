__ZN6google8protobuf4Enum8CopyFromERKNS0_7MessageE
void __fastcall google::protobuf::Enum::CopyFrom(google::protobuf::Enum *this, const google::protobuf::Message *a2)
{
  __int64 v2; // x30

  if ( a2 != this )
  {
    google::protobuf::Enum::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    google::protobuf::Enum::MergeFrom(this, a2);
  }
}