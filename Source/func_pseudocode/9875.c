__ZN3TSP17ViewStateMetadata9MergeFromERKS0_
char *__fastcall TSP::ViewStateMetadata::MergeFrom(char *this, const TSP::ViewStateMetadata *a2)
{
  __int64 v3; // x20
  _QWORD *v4; // x21
  __int64 v5; // x8
  int v6; // w8
  __int64 v7; // x23
  __int64 v8; // x9
  __int64 v9; // x22
  __int64 v10; // x24
  __int64 v11; // x0
  int *v12; // x8
  int v13; // w10
  int v14; // w9
  int v15; // w8
  __int64 v16; // x23
  __int64 v17; // x9
  int v18; // w22
  char *v19; // x0
  _QWORD *v20; // x0
  const TSP::ComponentInfo *v21; // x1
  TSP::UUID *v22; // x0
  _QWORD *v23; // x0
  const TSP::UUID *v24; // x1
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = (__int64)this;
  v4 = this + 8;
  v5 = *((_QWORD *)a2 + 1);
  if ( (v5 & 1) != 0 )
    this = (char *)sub_10003A25C(this + 8, (v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v6 = *((_DWORD *)a2 + 6);
  if ( v6 )
  {
    v7 = *(int *)(v3 + 24);
    google::protobuf::RepeatedField<unsigned int>::Reserve(v3 + 24, (unsigned int)(v7 + v6));
    v8 = *(_QWORD *)(v3 + 32);
    *(_DWORD *)(v3 + 24) += *((_DWORD *)a2 + 6);
    this = (char *)memcpy((void *)(v8 + 4 * v7), *((const void **)a2 + 4), 4LL * *((int *)a2 + 6));
  }
  v9 = *((unsigned int *)a2 + 14);
  if ( (_DWORD)v9 )
  {
    v10 = *((_QWORD *)a2 + 8) + 8LL;
    v11 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
            (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 48),
            *((_DWORD *)a2 + 14));
    this = (char *)sub_100054D1C(v3 + 48, v11, v10, v9, (unsigned int)(**(_DWORD **)(v3 + 64) - *(_DWORD *)(v3 + 56)));
    v12 = *(int **)(v3 + 64);
    v13 = *v12;
    v14 = *(_DWORD *)(v3 + 56) + v9;
    *(_DWORD *)(v3 + 56) = v14;
    if ( v13 < v14 )
      *v12 = v14;
  }
  v15 = *((_DWORD *)a2 + 18);
  if ( v15 )
  {
    v16 = *(int *)(v3 + 72);
    google::protobuf::RepeatedField<unsigned int>::Reserve(v3 + 72, (unsigned int)(v16 + v15));
    v17 = *(_QWORD *)(v3 + 80);
    *(_DWORD *)(v3 + 72) += *((_DWORD *)a2 + 18);
    this = (char *)memcpy((void *)(v17 + 4 * v16), *((const void **)a2 + 10), 4LL * *((int *)a2 + 18));
  }
  v18 = *((_DWORD *)a2 + 4);
  if ( (v18 & 3) != 0 )
  {
    if ( (v18 & 1) != 0 )
    {
      *(_DWORD *)(v3 + 16) |= 1u;
      v19 = *(char **)(v3 + 96);
      if ( !v19 )
      {
        v20 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
        if ( (*v4 & 1) != 0 )
          v20 = (_QWORD *)*v20;
        v19 = (char *)google::protobuf::Arena::CreateMaybeMessage<TSP::ComponentInfo>(v20);
        *(_QWORD *)(v3 + 96) = v19;
      }
      if ( *((_QWORD *)a2 + 12) )
        v21 = (const TSP::ComponentInfo *)*((_QWORD *)a2 + 12);
      else
        v21 = (const TSP::ComponentInfo *)&TSP::_ComponentInfo_default_instance_;
      this = TSP::ComponentInfo::MergeFrom(v19, v21);
    }
    if ( (v18 & 2) != 0 )
    {
      *(_DWORD *)(v3 + 16) |= 2u;
      v22 = *(TSP::UUID **)(v3 + 104);
      if ( !v22 )
      {
        v23 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
        if ( (*v4 & 1) != 0 )
          v23 = (_QWORD *)*v23;
        v22 = (TSP::UUID *)google::protobuf::Arena::CreateMaybeMessage<TSP::UUID>(v23);
        *(_QWORD *)(v3 + 104) = v22;
      }
      if ( *((_QWORD *)a2 + 13) )
        v24 = (const TSP::UUID *)*((_QWORD *)a2 + 13);
      else
        v24 = (const TSP::UUID *)&TSP::_UUID_default_instance_;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return (char *)TSP::UUID::MergeFrom(v22, v24);
    }
  }
  return this;
}