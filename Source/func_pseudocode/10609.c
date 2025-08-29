__ZN3TSP27LargeLazyObjectArraySegment9MergeFromERKS0_
__int64 __fastcall TSP::LargeLazyObjectArraySegment::MergeFrom(
        __int64 this,
        const TSP::LargeLazyObjectArraySegment *a2)
{
  __int64 v3; // x20
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x22
  __int64 v7; // x24
  __int64 v8; // x0
  int *v9; // x8
  int v10; // w10
  int v11; // w9
  const TSP::LargeArraySegment *v12; // x8
  __int64 v13; // x0
  _QWORD *v14; // x0
  const TSP::LargeArraySegment *v15; // x1
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = this;
  v4 = (_QWORD *)(this + 8);
  v5 = *((_QWORD *)a2 + 1);
  if ( (v5 & 1) != 0 )
    this = sub_10003A25C(this + 8, (v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v6 = *((unsigned int *)a2 + 8);
  if ( (_DWORD)v6 )
  {
    v7 = *((_QWORD *)a2 + 5) + 8LL;
    v8 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
           (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 24),
           *((_DWORD *)a2 + 8));
    this = sub_100077328(v3 + 24, v8, v7, v6, (unsigned int)(**(_DWORD **)(v3 + 40) - *(_DWORD *)(v3 + 32)));
    v9 = *(int **)(v3 + 40);
    v10 = *v9;
    v11 = *(_DWORD *)(v3 + 32) + v6;
    *(_DWORD *)(v3 + 32) = v11;
    if ( v10 < v11 )
      *v9 = v11;
  }
  if ( (*((_BYTE *)a2 + 16) & 1) != 0 )
  {
    v12 = (const TSP::LargeArraySegment *)*((_QWORD *)a2 + 6);
    *(_DWORD *)(v3 + 16) |= 1u;
    v13 = *(_QWORD *)(v3 + 48);
    if ( !v13 )
    {
      v14 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
      if ( (*v4 & 1) != 0 )
        v14 = (_QWORD *)*v14;
      v13 = google::protobuf::Arena::CreateMaybeMessage<TSP::LargeArraySegment>(v14);
      *(_QWORD *)(v3 + 48) = v13;
      v12 = (const TSP::LargeArraySegment *)*((_QWORD *)a2 + 6);
    }
    if ( v12 )
      v15 = v12;
    else
      v15 = (const TSP::LargeArraySegment *)&TSP::_LargeArraySegment_default_instance_;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return TSP::LargeArraySegment::MergeFrom(v13, v15);
  }
  return this;
}