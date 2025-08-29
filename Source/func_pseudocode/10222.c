__ZN3TSP4Date9MergeFromERKS0_
double __fastcall TSP::Date::MergeFrom(TSP::Date *this, const TSP::Date *a2)
{
  __int64 v4; // x8
  double result; // d0

  v4 = *((_QWORD *)a2 + 1);
  if ( (v4 & 1) != 0 )
    sub_10003A25C((char *)this + 8, (v4 & 0xFFFFFFFFFFFFFFFELL) + 8);
  if ( (*((_BYTE *)a2 + 16) & 1) != 0 )
  {
    result = *((double *)a2 + 3);
    *((_DWORD *)this + 4) |= 1u;
    *((double *)this + 3) = result;
  }
  return result;
}