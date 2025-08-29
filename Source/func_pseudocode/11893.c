__ZN6google8protobuf8internal11SerialArena23AllocateAlignedFallbackEm
_QWORD *__fastcall google::protobuf::internal::SerialArena::AllocateAlignedFallback(
        google::protobuf::internal::SerialArena *this,
        unsigned __int64 a2)
{
  _QWORD *v4; // x22
  __int64 v5; // x1
  _QWORD *result; // x0
  char *v7; // x9
  char *v8; // t2
  _QWORD *v9; // x8

  v4 = (_QWORD *)*((_QWORD *)this + 2);
  v5 = v4[2];
  v8 = (char *)this + 40;
  result = (_QWORD *)*((_QWORD *)this + 5);
  v7 = (char *)*((_QWORD *)v8 + 1);
  do
  {
    v4[1] = (char *)result + v5 - (_QWORD)v7;
    v9 = google::protobuf::internal::ArenaImpl::NewBuffer(*(google::protobuf::internal::ArenaImpl **)this, v5, a2);
    *v9 = v4;
    v9[1] = 24LL;
    v9[2] = v5;
    *((_QWORD *)this + 2) = v9;
    result = v9 + 3;
    v7 = (char *)v9 + v5;
    *((_QWORD *)this + 5) = v9 + 3;
    *((_QWORD *)this + 6) = (char *)v9 + v5;
    v4 = v9;
  }
  while ( v5 - 24 < a2 );
  *((_QWORD *)this + 5) = (char *)result + a2;
  return result;
}