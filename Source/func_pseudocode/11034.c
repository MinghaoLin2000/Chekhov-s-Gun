__ZN6google8protobuf29DescriptorProto_ReservedRangeD0Ev
void __fastcall google::protobuf::DescriptorProto_ReservedRange::~DescriptorProto_ReservedRange(
        google::protobuf::DescriptorProto_ReservedRange *this)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  sub_100037E58((char *)this + 8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(this, 0x1081C404FE48876LL);
}