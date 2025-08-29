__ZN6google8protobuf8internal15DynamicMapFieldD0Ev
void __fastcall google::protobuf::internal::DynamicMapField::~DynamicMapField(
        google::protobuf::internal::DynamicMapField *this)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  google::protobuf::internal::DynamicMapField::~DynamicMapField(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1, 0x10E1C40F5342568LL);
}