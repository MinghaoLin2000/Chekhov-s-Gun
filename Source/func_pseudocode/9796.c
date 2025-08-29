__ZN3TSP14EncryptionInfo9MergeFromERKS0_
__int64 __fastcall TSP::EncryptionInfo::MergeFrom(__int64 this, const TSP::EncryptionInfo *a2)
{
  __int64 v3; // x19
  __int64 v4; // x8
  __int64 v5; // x21
  __int64 v6; // x23
  __int64 v7; // x0
  int *v8; // x8
  int v9; // w10
  int v10; // w9
  int v11; // w8

  v3 = this;
  v4 = *((_QWORD *)a2 + 1);
  if ( (v4 & 1) != 0 )
    this = sub_10003A25C(this + 8, (v4 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v5 = *((unsigned int *)a2 + 8);
  if ( (_DWORD)v5 )
  {
    v6 = *((_QWORD *)a2 + 5) + 8LL;
    v7 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
           (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 24),
           *((_DWORD *)a2 + 8));
    this = sub_100055434(v3 + 24, v7, v6, v5, (unsigned int)(**(_DWORD **)(v3 + 40) - *(_DWORD *)(v3 + 32)));
    v8 = *(int **)(v3 + 40);
    v9 = *v8;
    v10 = *(_DWORD *)(v3 + 32) + v5;
    *(_DWORD *)(v3 + 32) = v10;
    if ( v9 < v10 )
      *v8 = v10;
  }
  v11 = *((_DWORD *)a2 + 4);
  if ( (v11 & 3) != 0 )
  {
    if ( (v11 & 1) != 0 )
      *(_QWORD *)(v3 + 48) = *((_QWORD *)a2 + 6);
    if ( (v11 & 2) != 0 )
      *(_QWORD *)(v3 + 56) = *((_QWORD *)a2 + 7);
    *(_DWORD *)(v3 + 16) |= v11;
  }
  return this;
}