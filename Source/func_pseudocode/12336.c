__ZN6google8protobuf2io16CodedInputStream12SkipFallbackEii
__int64 __fastcall google::protobuf::io::CodedInputStream::SkipFallback(
        google::protobuf::io::CodedInputStream *this,
        int a2,
        int a3)
{
  __int64 result; // x0
  __int64 v5; // x20
  int v6; // w8
  int v7; // w1
  int v8; // w8

  if ( *((int *)this + 11) < 1 )
  {
    v5 = (unsigned int)(a2 - a3);
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    v6 = *((_DWORD *)this + 12);
    if ( v6 >= *((_DWORD *)this + 10) )
      v6 = *((_DWORD *)this + 10);
    v7 = v6 - *((_DWORD *)this + 6);
    if ( v7 >= (int)v5 )
    {
      if ( ((*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2), v5) & 1) != 0 )
      {
        *((_DWORD *)this + 6) += v5;
        return 1LL;
      }
      else
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2));
        result = 0LL;
        *((_DWORD *)this + 6) = v8;
      }
    }
    else
    {
      if ( v7 >= 1 )
      {
        *((_DWORD *)this + 6) = v6;
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
      }
      return 0LL;
    }
  }
  else
  {
    result = 0LL;
    *(_QWORD *)this += a3;
  }
  return result;
}