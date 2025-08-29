__ZNK6google8protobuf11StringPiece4findEcm
__int64 __fastcall google::protobuf::StringPiece::find(
        google::protobuf::StringPiece *this,
        int a2,
        unsigned __int64 a3)
{
  __int64 v3; // x8
  __int64 v6; // x19
  void *v7; // x0

  v3 = *((_QWORD *)this + 1);
  if ( v3 < 1 || v3 <= a3 )
    return -1LL;
  v6 = *(_QWORD *)this;
  v7 = memchr((void *)(*(_QWORD *)this + a3), a2, v3 - a3);
  if ( v7 )
    return (__int64)v7 - v6;
  else
    return -1LL;
}