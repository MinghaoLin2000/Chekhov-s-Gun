__ZN6google8protobuf8internal13ReflectionOps4CopyERKNS0_7MessageEPS3_
const google::protobuf::Message *__fastcall google::protobuf::internal::ReflectionOps::Copy(
        const google::protobuf::Message *this,
        const google::protobuf::Message *a2,
        google::protobuf::Message *a3)
{
  __int64 v3; // x30
  google::protobuf::internal::ReflectionOps *v5; // x20
  google::protobuf::Message *v6; // x2

  if ( this != a2 )
  {
    v5 = this;
    google::protobuf::internal::ReflectionOps::Clear(a2, a2);
    if ( ((v3 ^ (2 * v3)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (const google::protobuf::Message *)google::protobuf::internal::ReflectionOps::Merge(v5, a2, v6);
  }
  return this;
}