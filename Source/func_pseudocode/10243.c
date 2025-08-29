__ZN3TSP5Color5ClearEv
__int64 __fastcall TSP::Color::Clear(TSP::Color *this)
{
  int v1; // w8
  __int64 result; // x0
  char v3; // t1

  v1 = *((_DWORD *)this + 4);
  if ( (_BYTE)v1 )
  {
    *(_OWORD *)((char *)this + 40) = 0u;
    *(_OWORD *)((char *)this + 24) = 0u;
  }
  if ( (v1 & 0x700) != 0 )
  {
    *((_QWORD *)this + 7) = 0x100000001LL;
    *((_DWORD *)this + 16) = 1065353216;
  }
  v3 = *((_BYTE *)this + 8);
  result = (__int64)this + 8;
  *(_DWORD *)(result + 8) = 0;
  if ( (v3 & 1) != 0 )
    return sub_10003A2A8(result);
  return result;
}