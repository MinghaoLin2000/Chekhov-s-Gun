__ZN6google8protobuf8internal18EpsCopyInputStream12DoneFallbackEii
__int64 __fastcall google::protobuf::internal::EpsCopyInputStream::DoneFallback(
        google::protobuf::internal::EpsCopyInputStream *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // x21
  __int64 v6; // x0
  __int64 v7; // x8
  int v8; // w9
  __int64 result; // x0

  if ( *((_DWORD *)this + 7) < (int)a2 )
    return 0LL;
  v4 = a2;
  while ( 1 )
  {
    v6 = sub_1000EA0E8(this, v4, a3);
    if ( !v6 )
      break;
    v7 = *((_QWORD *)this + 1);
    v8 = *((_DWORD *)this + 7) + v6 - v7;
    *((_DWORD *)this + 7) = v8;
    result = v6 + (int)v4;
    v4 = (unsigned int)(result - v7);
    if ( (int)result - (int)v7 < 0 )
    {
      *(_QWORD *)this = v7 + (v8 & (v8 >> 31));
      return result;
    }
  }
  if ( (_DWORD)v4 )
    return 0LL;
  result = *((_QWORD *)this + 1);
  *(_QWORD *)this = result;
  *((_DWORD *)this + 20) = 1;
  return result;
}