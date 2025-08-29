__ZN3TSP4UUID5ClearEv
__int64 __fastcall TSP::UUID::Clear(TSP::UUID *this)
{
  __int64 result; // x0
  char v2; // t1

  if ( (*((_BYTE *)this + 16) & 3) != 0 )
  {
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  v2 = *((_BYTE *)this + 8);
  result = (__int64)this + 8;
  *(_DWORD *)(result + 8) = 0;
  if ( (v2 & 1) != 0 )
    return sub_10003A2A8(result);
  return result;
}