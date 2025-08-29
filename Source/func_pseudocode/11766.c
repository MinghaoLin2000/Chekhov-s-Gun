__ZN6google8protobuf10FloatValueD0Ev
void __fastcall google::protobuf::FloatValue::~FloatValue(google::protobuf::FloatValue *this)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  sub_100037E58((char *)this + 8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(this, 0x1081C40CC6EE3FDLL);
}