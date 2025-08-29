__ZN3TSP13CFUUIDArchive5ClearEv
__int64 __fastcall TSP::CFUUIDArchive::Clear(TSP::CFUUIDArchive *this)
{
  int v1; // w8
  unsigned __int64 v2; // x9
  __int64 result; // x0
  char v4; // t1

  v1 = *((_DWORD *)this + 4);
  if ( (v1 & 1) != 0 )
  {
    v2 = *((_QWORD *)this + 3) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v2 + 23) < 0 )
    {
      **(_BYTE **)v2 = 0;
      *(_QWORD *)(v2 + 8) = 0LL;
    }
    else
    {
      *(_BYTE *)v2 = 0;
      *(_BYTE *)(v2 + 23) = 0;
    }
  }
  if ( (v1 & 0x1E) != 0 )
  {
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  v4 = *((_BYTE *)this + 8);
  result = (__int64)this + 8;
  *(_DWORD *)(result + 8) = 0;
  if ( (v4 & 1) != 0 )
    return sub_10003A2A8(result);
  return result;
}