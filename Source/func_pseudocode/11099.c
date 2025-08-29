__ZN6google8protobuf12OneofOptions5ClearEv
__int64 __fastcall google::protobuf::OneofOptions::Clear(google::protobuf::OneofOptions *this)
{
  __int64 result; // x0
  __int64 v3; // x20
  google::protobuf::UninterpretedOption **v4; // x21
  google::protobuf::UninterpretedOption *v5; // t1
  char *v6; // x19
  char v7; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  result = google::protobuf::internal::ExtensionSet::Clear((google::protobuf::OneofOptions *)((char *)this + 16));
  v3 = *((unsigned int *)this + 12);
  if ( (int)v3 >= 1 )
  {
    v4 = (google::protobuf::UninterpretedOption **)(*((_QWORD *)this + 7) + 8LL);
    do
    {
      v5 = *v4++;
      result = google::protobuf::UninterpretedOption::Clear(v5);
      --v3;
    }
    while ( v3 );
    *((_DWORD *)this + 12) = 0;
  }
  v7 = *((_BYTE *)this + 8);
  v6 = (char *)this + 8;
  if ( (v7 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v6);
  }
  return result;
}