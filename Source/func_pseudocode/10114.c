__ZN3TSP13DataReference5ClearEv
__int64 __fastcall TSP::DataReference::Clear(TSP::DataReference *this)
{
  __int64 result; // x0
  char v2; // t1

  v2 = *((_BYTE *)this + 8);
  result = (__int64)this + 8;
  *(_QWORD *)(result + 16) = 0LL;
  *(_DWORD *)(result + 8) = 0;
  if ( (v2 & 1) != 0 )
    return sub_10003A2A8(result);
  return result;
}