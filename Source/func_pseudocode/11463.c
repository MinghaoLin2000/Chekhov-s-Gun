__ZN6google8protobuf14DynamicMessageD0Ev
void __fastcall google::protobuf::DynamicMessage::~DynamicMessage(google::protobuf::DynamicMessage *this)
{
  void *v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  google::protobuf::DynamicMessage::~DynamicMessage(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1);
}