__ZN3TSP13DataReference9MergeFromERKS0_
__int64 __fastcall TSP::DataReference::MergeFrom(__int64 this, const TSP::DataReference *a2)
{
  __int64 v3; // x19
  __int64 v4; // x8
  __int64 v5; // x8

  v3 = this;
  v4 = *((_QWORD *)a2 + 1);
  if ( (v4 & 1) != 0 )
    this = sub_10003A25C(this + 8, (v4 & 0xFFFFFFFFFFFFFFFELL) + 8);
  if ( (*((_BYTE *)a2 + 16) & 1) != 0 )
  {
    v5 = *((_QWORD *)a2 + 3);
    *(_DWORD *)(v3 + 16) |= 1u;
    *(_QWORD *)(v3 + 24) = v5;
  }
  return this;
}