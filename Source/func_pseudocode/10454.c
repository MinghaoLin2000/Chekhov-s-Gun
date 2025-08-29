__ZNK3TSP25SparseUUIDPathArray_Entry30RequiredFieldsByteSizeFallbackEv
__int64 __fastcall TSP::SparseUUIDPathArray_Entry::RequiredFieldsByteSizeFallback(TSP::SparseUUIDPathArray_Entry *this)
{
  int v2; // w8
  __int64 result; // x0
  __int64 v4; // x0

  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 1) != 0 )
  {
    v4 = TSP::UUIDPath::ByteSizeLong(*((TSP::UUIDPath **)this + 3));
    result = v4 + ((9 * (__clz(v4 | 1) ^ 0x1F) + 73) >> 6) + 1;
    if ( (*((_DWORD *)this + 4) & 2) == 0 )
      return result;
    goto LABEL_5;
  }
  result = 0LL;
  if ( (v2 & 2) != 0 )
LABEL_5:
    result += ((9 * (__clz(*((_DWORD *)this + 8) | 1) ^ 0x1F) + 73) >> 6) + 1;
  return result;
}