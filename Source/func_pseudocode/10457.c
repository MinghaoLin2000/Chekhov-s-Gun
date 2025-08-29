__ZN3TSP25SparseUUIDPathArray_Entry9MergeFromERKS0_
__int64 __fastcall TSP::SparseUUIDPathArray_Entry::MergeFrom(__int64 this, const TSP::SparseUUIDPathArray_Entry *a2)
{
  __int64 v3; // x19
  _QWORD *v4; // x21
  __int64 v5; // x8
  int v6; // w22
  __int64 v7; // x0
  _QWORD *v8; // x0
  const TSP::UUIDPath *v9; // x1

  v3 = this;
  v4 = (_QWORD *)(this + 8);
  v5 = *((_QWORD *)a2 + 1);
  if ( (v5 & 1) != 0 )
    this = sub_10003A25C(this + 8, (v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v6 = *((_DWORD *)a2 + 4);
  if ( (v6 & 3) != 0 )
  {
    if ( (v6 & 1) != 0 )
    {
      *(_DWORD *)(v3 + 16) |= 1u;
      v7 = *(_QWORD *)(v3 + 24);
      if ( !v7 )
      {
        v8 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
        if ( (*v4 & 1) != 0 )
          v8 = (_QWORD *)*v8;
        v7 = google::protobuf::Arena::CreateMaybeMessage<TSP::UUIDPath>(v8);
        *(_QWORD *)(v3 + 24) = v7;
      }
      if ( *((_QWORD *)a2 + 3) )
        v9 = (const TSP::UUIDPath *)*((_QWORD *)a2 + 3);
      else
        v9 = (const TSP::UUIDPath *)&TSP::_UUIDPath_default_instance_;
      this = TSP::UUIDPath::MergeFrom(v7, v9);
    }
    if ( (v6 & 2) != 0 )
      *(_DWORD *)(v3 + 32) = *((_DWORD *)a2 + 8);
    *(_DWORD *)(v3 + 16) |= v6;
  }
  return this;
}