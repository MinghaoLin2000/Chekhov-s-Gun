__ZN6google8protobuf9BoolValue5ClearEv
__int64 __fastcall google::protobuf::BoolValue::Clear(google::protobuf::BoolValue *this)
{
  __int64 result; // x0
  char v2; // t1

  v2 = *((_BYTE *)this + 8);
  result = (__int64)this + 8;
  *(_BYTE *)(result + 8) = 0;
  if ( (v2 & 1) != 0 )
    return sub_10003A2A8(result);
  return result;
}