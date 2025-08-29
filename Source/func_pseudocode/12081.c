__ZN6google8protobuf5Field8CopyFromERKNS0_7MessageE
void __fastcall google::protobuf::Field::CopyFrom(google::protobuf::Field *this, const google::protobuf::Message *a2)
{
  __int64 v2; // x30

  if ( a2 != this )
  {
    google::protobuf::Field::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    google::protobuf::Field::MergeFrom(this, a2);
  }
}