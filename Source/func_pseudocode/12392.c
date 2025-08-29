__ZN6google8protobuf13SourceContext5ClearEv
__int64 __fastcall google::protobuf::SourceContext::Clear(google::protobuf::SourceContext *this)
{
  __int64 result; // x0
  char *v3; // x19
  char v4; // t1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  result = google::protobuf::internal::ArenaStringPtr::ClearToEmpty((google::protobuf::SourceContext *)((char *)this + 16));
  v4 = *((_BYTE *)this + 8);
  v3 = (char *)this + 8;
  if ( (v4 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v3);
  }
  return result;
}