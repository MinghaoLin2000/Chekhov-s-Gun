__ZN6google8protobuf5Value8CopyFromERKNS0_7MessageE
void __fastcall google::protobuf::Value::CopyFrom(google::protobuf::Value *this, const google::protobuf::Message *a2)
{
  __int64 v2; // x30

  if ( a2 != this )
  {
    google::protobuf::Value::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    google::protobuf::Value::MergeFrom(this, a2);
  }
}