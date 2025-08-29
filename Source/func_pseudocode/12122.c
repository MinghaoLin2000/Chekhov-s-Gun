__ZN6google8protobuf6Option8CopyFromERKNS0_7MessageE
void __fastcall google::protobuf::Option::CopyFrom(google::protobuf::Option *this, const google::protobuf::Message *a2)
{
  __int64 v2; // x30

  if ( a2 != this )
  {
    google::protobuf::Option::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    google::protobuf::Option::MergeFrom(this, a2);
  }
}