__ZN6google8protobuf8internal11SerialArena18AddCleanupFallbackEPvPFvS3_E
__int64 *__fastcall google::protobuf::internal::SerialArena::AddCleanupFallback(
        google::protobuf::internal::SerialArena *this,
        __int64 a2,
        void (__fastcall *a3)(void *))
{
  __int64 *result; // x0
  __int64 v7; // x23
  unsigned __int64 v8; // x1
  __int64 *v9; // x8
  __int64 *v10; // x9

  result = (__int64 *)*((_QWORD *)this + 3);
  do
  {
    if ( result )
    {
      if ( (unsigned __int64)(2 * *result) >= 0x40 )
        v7 = 64LL;
      else
        v7 = 2 * *result;
    }
    else
    {
      v7 = 8LL;
    }
    v8 = (16 * (_WORD)v7 + 23) & 0xFF0;
    v9 = (__int64 *)*((_QWORD *)this + 5);
    if ( *((_QWORD *)this + 6) - (_QWORD)v9 < v8 )
    {
      result = (__int64 *)google::protobuf::internal::SerialArena::AllocateAlignedFallback(this, v8);
      v10 = (__int64 *)*((_QWORD *)this + 3);
    }
    else
    {
      *((_QWORD *)this + 5) = (char *)v9 + v8;
      v10 = result;
      result = v9;
    }
    *result = v7;
    result[1] = (__int64)v10;
    *((_QWORD *)this + 3) = result;
    *((_QWORD *)this + 7) = result + 2;
    *((_QWORD *)this + 8) = &result[2 * v7 + 2];
  }
  while ( !(16 * v7) );
  result[2] = a2;
  result[3] = (__int64)a3;
  *((_QWORD *)this + 7) = result + 4;
  return result;
}