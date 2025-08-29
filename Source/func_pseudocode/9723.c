__ZN3TSP18ObjectUUIDMapEntry9MergeFromERKS0_
__int64 __fastcall TSP::ObjectUUIDMapEntry::MergeFrom(__int64 this, const TSP::ObjectUUIDMapEntry *a2)
{
  __int64 v3; // x19
  _QWORD *v4; // x21
  __int64 v5; // x8
  int v6; // w22
  TSP::UUID *v7; // x0
  _QWORD *v8; // x0
  const TSP::UUID *v9; // x1

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
      v7 = *(TSP::UUID **)(v3 + 24);
      if ( !v7 )
      {
        v8 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
        if ( (*v4 & 1) != 0 )
          v8 = (_QWORD *)*v8;
        v7 = (TSP::UUID *)google::protobuf::Arena::CreateMaybeMessage<TSP::UUID>(v8);
        *(_QWORD *)(v3 + 24) = v7;
      }
      if ( *((_QWORD *)a2 + 3) )
        v9 = (const TSP::UUID *)*((_QWORD *)a2 + 3);
      else
        v9 = (const TSP::UUID *)&TSP::_UUID_default_instance_;
      this = TSP::UUID::MergeFrom(v7, v9);
    }
    if ( (v6 & 2) != 0 )
      *(_QWORD *)(v3 + 32) = *((_QWORD *)a2 + 4);
    *(_DWORD *)(v3 + 16) |= v6;
  }
  return this;
}