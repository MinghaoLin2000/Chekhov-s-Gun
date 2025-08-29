__ZN6google8protobuf15UnknownFieldSet13ClearFallbackEv
__int64 __fastcall google::protobuf::UnknownFieldSet::ClearFallback(google::protobuf::UnknownFieldSet *this)
{
  __int64 v2; // x8
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 result; // x0

  v2 = (int)((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 4);
  v3 = v2 + 1;
  v4 = 16 * v2 - 16;
  do
  {
    result = google::protobuf::UnknownField::Delete((google::protobuf::UnknownField *)(*(_QWORD *)this + v4));
    --v3;
    v4 -= 16LL;
  }
  while ( v3 > 1 );
  *((_QWORD *)this + 1) = *(_QWORD *)this;
  return result;
}