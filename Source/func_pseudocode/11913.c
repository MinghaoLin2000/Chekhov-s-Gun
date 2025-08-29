__ZNK6google8protobuf7Message13SpaceUsedLongEv
__int64 __fastcall google::protobuf::Message::SpaceUsedLong(google::protobuf::Message *this)
{
  __int64 v2; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  (*(void (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)this + 152LL))(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return google::protobuf::Reflection::SpaceUsedLong(v2, (__int64)this);
}