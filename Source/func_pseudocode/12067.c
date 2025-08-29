__ZN6google8protobuf4Type8CopyFromERKNS0_7MessageE
void __fastcall google::protobuf::Type::CopyFrom(google::protobuf::Type *this, const google::protobuf::Message *a2)
{
  __int64 v2; // x30

  if ( a2 != this )
  {
    google::protobuf::Type::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    google::protobuf::Type::MergeFrom(this, a2);
  }
}