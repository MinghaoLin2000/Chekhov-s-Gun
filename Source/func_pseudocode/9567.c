__ZN3TSP19DatabaseDataArchive9MergeFromERKS0_
__int64 __fastcall TSP::DatabaseDataArchive::MergeFrom(__int64 this, const TSP::DatabaseDataArchive *a2)
{
  __int64 v3; // x19
  _QWORD *v4; // x21
  __int64 v5; // x8
  int v6; // w22
  unsigned __int64 v7; // x1
  __int64 v8; // x8
  _QWORD *v9; // x2
  unsigned __int64 v10; // x1
  __int64 v11; // x8
  _QWORD *v12; // x2
  TSP::Reference *v13; // x0
  _QWORD *v14; // x0
  const TSP::Reference *v15; // x1

  v3 = this;
  v4 = (_QWORD *)(this + 8);
  v5 = *((_QWORD *)a2 + 1);
  if ( (v5 & 1) != 0 )
    this = sub_10003A25C(this + 8, (v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v6 = *((_DWORD *)a2 + 4);
  if ( (v6 & 0x3F) != 0 )
  {
    if ( (v6 & 1) != 0 )
    {
      v7 = *((_QWORD *)a2 + 3) & 0xFFFFFFFFFFFFFFFELL;
      *(_DWORD *)(v3 + 16) |= 1u;
      v8 = *(_QWORD *)(v3 + 8);
      v9 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v8 & 1) != 0 )
        v9 = (_QWORD *)*v9;
      this = google::protobuf::internal::ArenaStringPtr::Set(v3 + 24, v7, v9);
      if ( (v6 & 2) == 0 )
      {
LABEL_6:
        if ( (v6 & 4) == 0 )
          goto LABEL_7;
        goto LABEL_19;
      }
    }
    else if ( (v6 & 2) == 0 )
    {
      goto LABEL_6;
    }
    v10 = *((_QWORD *)a2 + 4) & 0xFFFFFFFFFFFFFFFELL;
    *(_DWORD *)(v3 + 16) |= 2u;
    v11 = *(_QWORD *)(v3 + 8);
    v12 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v11 & 1) != 0 )
      v12 = (_QWORD *)*v12;
    this = google::protobuf::internal::ArenaStringPtr::Set(v3 + 32, v10, v12);
    if ( (v6 & 4) == 0 )
    {
LABEL_7:
      if ( (v6 & 8) == 0 )
        goto LABEL_8;
      goto LABEL_27;
    }
LABEL_19:
    *(_DWORD *)(v3 + 16) |= 4u;
    v13 = *(TSP::Reference **)(v3 + 40);
    if ( !v13 )
    {
      v14 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
      if ( (*v4 & 1) != 0 )
        v14 = (_QWORD *)*v14;
      v13 = (TSP::Reference *)google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(v14);
      *(_QWORD *)(v3 + 40) = v13;
    }
    if ( *((_QWORD *)a2 + 5) )
      v15 = (const TSP::Reference *)*((_QWORD *)a2 + 5);
    else
      v15 = (const TSP::Reference *)&TSP::_Reference_default_instance_;
    this = TSP::Reference::MergeFrom(v13, v15);
    if ( (v6 & 8) == 0 )
    {
LABEL_8:
      if ( (v6 & 0x10) == 0 )
        goto LABEL_9;
      goto LABEL_28;
    }
LABEL_27:
    *(_QWORD *)(v3 + 48) = *((_QWORD *)a2 + 6);
    if ( (v6 & 0x10) == 0 )
    {
LABEL_9:
      if ( (v6 & 0x20) == 0 )
      {
LABEL_11:
        *(_DWORD *)(v3 + 16) |= v6;
        return this;
      }
LABEL_10:
      *(_BYTE *)(v3 + 60) = *((_BYTE *)a2 + 60);
      goto LABEL_11;
    }
LABEL_28:
    *(_DWORD *)(v3 + 56) = *((_DWORD *)a2 + 14);
    if ( (v6 & 0x20) == 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  return this;
}