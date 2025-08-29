__ZN6google8protobuf15DescriptorProtoD0Ev
void __fastcall google::protobuf::DescriptorProto::~DescriptorProto(google::protobuf::DescriptorProto *this)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  google::protobuf::DescriptorProto::~DescriptorProto(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1, 0x10A1C408886AC97LL);
}