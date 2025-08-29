__ZN3TSP15UUIDRectArchive9MergeFromERKS0_
__int64 __fastcall TSP::UUIDRectArchive::MergeFrom(__int64 this, const TSP::UUIDRectArchive *a2)
{
  __int64 v3; // x19
  __int64 v4; // x8
  __int64 v5; // x21
  __int64 v6; // x23
  __int64 v7; // x0
  int *v8; // x8
  int v9; // w10
  int v10; // w9
  __int64 v11; // x21
  __int64 v12; // x20
  __int64 v13; // x0
  int *v14; // x8
  int v15; // w10
  int v16; // w9

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
           *((_DWORD *)a2 + 6));
    this = sub_100076F5C(v3 + 16, v7, v6, v5, (unsigned int)(**(_DWORD **)(v3 + 32) - *(_DWORD *)(v3 + 24)));
    v8 = *(int **)(v3 + 32);
    v9 = *v8;
    v10 = *(_DWORD *)(v3 + 24) + v5;
    *(_DWORD *)(v3 + 24) = v10;
    if ( v9 < v10 )
      *v8 = v10;
  }
  v11 = *((unsigned int *)a2 + 12);
  if ( (_DWORD)v11 )
  {
    v12 = *((_QWORD *)a2 + 7) + 8LL;
    v13 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
            (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 40),
            v11);
    this = sub_100076F5C(v3 + 40, v13, v12, v11, (unsigned int)(**(_DWORD **)(v3 + 56) - *(_DWORD *)(v3 + 48)));
    v14 = *(int **)(v3 + 56);
    v15 = *v14;
    v16 = *(_DWORD *)(v3 + 48) + v11;
    *(_DWORD *)(v3 + 48) = v16;
    if ( v15 < v16 )
      *v14 = v16;
  }
  return this;
}