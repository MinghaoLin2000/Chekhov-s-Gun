__ZN6google8protobuf10Int64Value5ClearEv
__int64 __fastcall google::protobuf::Int64Value::Clear(google::protobuf::Int64Value *this)
{
  __int64 result; // x0
  char v2; // t1

  v2 = *((_BYTE *)this + 8);
  result = (__int64)this + 8;
  *(_QWORD *)(result + 8) = 0LL;
  if ( (v2 & 1) != 0 )
    return sub_10003A2A8(result);
  return result;
}