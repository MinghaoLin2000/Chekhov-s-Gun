__ZN6google8protobuf6Struct5ClearEv
__int64 __fastcall google::protobuf::Struct::Clear(google::protobuf::Struct *this)
{
  __int64 result; // x0
  char *v3; // x19
  char v4; // t1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  result = sub_100110210((char *)this + 16);
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