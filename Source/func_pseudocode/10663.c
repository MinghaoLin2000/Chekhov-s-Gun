__ZN3TSP16LargeStringArray9MergeFromERKS0_
__int64 __fastcall TSP::LargeStringArray::MergeFrom(__int64 this, const TSP::LargeStringArray *a2)
{
  __int64 v3; // x20
  _QWORD *v4; // x21
  __int64 v5; // x8
  const TSP::LargeArray *v6; // x8
  __int64 v7; // x0
  _QWORD *v8; // x0
  const TSP::LargeArray *v9; // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = this;
  v4 = (_QWORD *)(this + 8);
  v5 = *((_QWORD *)a2 + 1);
  if ( (v5 & 1) != 0 )
    this = sub_10003A25C(this + 8, (v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  if ( (*((_BYTE *)a2 + 16) & 1) != 0 )
  {
    v6 = (const TSP::LargeArray *)*((_QWORD *)a2 + 3);
    *(_DWORD *)(v3 + 16) |= 1u;
    v7 = *(_QWORD *)(v3 + 24);
    if ( !v7 )
    {
      v8 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
      if ( (*v4 & 1) != 0 )
        v8 = (_QWORD *)*v8;
      v7 = google::protobuf::Arena::CreateMaybeMessage<TSP::LargeArray>(v8);
      *(_QWORD *)(v3 + 24) = v7;
      v6 = (const TSP::LargeArray *)*((_QWORD *)a2 + 3);
    }
    if ( v6 )
      v9 = v6;
    else
      v9 = (const TSP::LargeArray *)&TSP::_LargeArray_default_instance_;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return TSP::LargeArray::MergeFrom(v7, v9);
  }
  return this;
}