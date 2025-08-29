__ZN3TSP23LargeNumberArraySegment9MergeFromERKS0_
char *__fastcall TSP::LargeNumberArraySegment::MergeFrom(char *this, const TSP::LargeNumberArraySegment *a2)
{
  __int64 v3; // x20
  _QWORD *v4; // x21
  __int64 v5; // x8
  int v6; // w8
  __int64 v7; // x23
  __int64 v8; // x9
  const TSP::LargeArraySegment *v9; // x8
  __int64 v10; // x0
  _QWORD *v11; // x0
  const TSP::LargeArraySegment *v12; // x1
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
    google::protobuf::RepeatedField<double>::Reserve(v3 + 24, (unsigned int)(v7 + v6));
    v8 = *(_QWORD *)(v3 + 32);
    *(_DWORD *)(v3 + 24) += *((_DWORD *)a2 + 6);
    this = (char *)memcpy((void *)(v8 + 8 * v7), *((const void **)a2 + 4), 8LL * *((int *)a2 + 6));
  }
  if ( (*((_BYTE *)a2 + 16) & 1) != 0 )
  {
    v9 = (const TSP::LargeArraySegment *)*((_QWORD *)a2 + 5);
    *(_DWORD *)(v3 + 16) |= 1u;
    v10 = *(_QWORD *)(v3 + 40);
    if ( !v10 )
    {
      v11 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
      if ( (*v4 & 1) != 0 )
        v11 = (_QWORD *)*v11;
      v10 = google::protobuf::Arena::CreateMaybeMessage<TSP::LargeArraySegment>(v11);
      *(_QWORD *)(v3 + 40) = v10;
      v9 = (const TSP::LargeArraySegment *)*((_QWORD *)a2 + 5);
    }
    if ( v9 )
      v12 = v9;
    else
      v12 = (const TSP::LargeArraySegment *)&TSP::_LargeArraySegment_default_instance_;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (char *)TSP::LargeArraySegment::MergeFrom(v10, v12);
  }
  return this;
}