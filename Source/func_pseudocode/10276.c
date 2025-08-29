__ZN3TSP4Path9MergeFromERKS0_
__int64 __fastcall TSP::Path::MergeFrom(__int64 this, const TSP::Path *a2)
{
  __int64 v3; // x19
  __int64 v4; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 v7; // x0
  int *v8; // x8
  int v9; // w10
  int v10; // w9

  v3 = this;
  v4 = *((_QWORD *)a2 + 1);
  if ( (v4 & 1) != 0 )
    this = sub_10003A25C(this + 8, (v4 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v5 = *((unsigned int *)a2 + 6);
  if ( (_DWORD)v5 )
  {
    v6 = *((_QWORD *)a2 + 4) + 8LL;
    v7 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
           (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 16),
           v5);
    this = sub_100076D5C(v3 + 16, v7, v6, v5, (unsigned int)(**(_DWORD **)(v3 + 32) - *(_DWORD *)(v3 + 24)));
    v8 = *(int **)(v3 + 32);
    v9 = *v8;
    v10 = *(_DWORD *)(v3 + 24) + v5;
    *(_DWORD *)(v3 + 24) = v10;
    if ( v9 < v10 )
      *v8 = v10;
  }
  return this;
}