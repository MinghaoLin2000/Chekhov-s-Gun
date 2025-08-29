__ZN6google8protobuf13SourceContext8CopyFromERKNS0_7MessageE
void __fastcall google::protobuf::SourceContext::CopyFrom(
        google::protobuf::SourceContext *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30

  if ( a2 != this )
  {
    google::protobuf::SourceContext::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    google::protobuf::SourceContext::MergeFrom(this, a2);
  }
}