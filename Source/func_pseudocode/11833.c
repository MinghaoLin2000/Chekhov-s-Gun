__ZN6google8protobuf11StringValueD0Ev
void __fastcall google::protobuf::StringValue::~StringValue(google::protobuf::StringValue *this)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  google::protobuf::StringValue::~StringValue(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1, 0x1081C40AA79BA9DLL);
}