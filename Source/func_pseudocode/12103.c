__ZN6google8protobuf9EnumValue5ClearEv
__int64 __fastcall google::protobuf::EnumValue::Clear(google::protobuf::EnumValue *this)
{
  __int64 v2; // x20
  google::protobuf::Option **v3; // x21
  google::protobuf::Option *v4; // t1
  __int64 result; // x0
  char *v6; // x19
  char v7; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((unsigned int *)this + 6);
  if ( (int)v2 >= 1 )
  {
    v3 = (google::protobuf::Option **)(*((_QWORD *)this + 4) + 8LL);
    do
    {
      v4 = *v3++;
      google::protobuf::Option::Clear(v4);
      --v2;
    }
    while ( v2 );
    *((_DWORD *)this + 6) = 0;
  }
  result = google::protobuf::internal::ArenaStringPtr::ClearToEmpty((google::protobuf::EnumValue *)((char *)this + 40));
  v7 = *((_BYTE *)this + 8);
  v6 = (char *)this + 8;
  *((_DWORD *)v6 + 10) = 0;
  if ( (v7 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v6);
  }
  return result;
}