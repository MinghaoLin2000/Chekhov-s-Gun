__ZN6google8protobuf9EnumValueD0Ev
void __fastcall google::protobuf::EnumValue::~EnumValue(google::protobuf::EnumValue *this)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  google::protobuf::EnumValue::~EnumValue(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1, 0x10A1C4024F5A929LL);
}