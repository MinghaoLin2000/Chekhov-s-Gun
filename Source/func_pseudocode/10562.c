__ZN3TSP39LargeStringArraySegment_OptionalElement5ClearEv
__int64 __fastcall TSP::LargeStringArraySegment_OptionalElement::Clear(
        TSP::LargeStringArraySegment_OptionalElement *this)
{
  unsigned __int64 v1; // x8
  __int64 result; // x0
  char v3; // t1

  if ( (*((_BYTE *)this + 16) & 1) != 0 )
  {
    v1 = *((_QWORD *)this + 3) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v1 + 23) < 0 )
    {
      **(_BYTE **)v1 = 0;
      *(_QWORD *)(v1 + 8) = 0LL;
    }
    else
    {
      *(_BYTE *)v1 = 0;
      *(_BYTE *)(v1 + 23) = 0;
    }
  }
  v3 = *((_BYTE *)this + 8);
  result = (__int64)this + 8;
  *(_DWORD *)(result + 8) = 0;
  if ( (v3 & 1) != 0 )
    return sub_10003A2A8(result);
  return result;
}