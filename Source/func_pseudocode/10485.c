__ZN3TSP16PasteboardObject9MergeFromERKS0_
__int64 __fastcall TSP::PasteboardObject::MergeFrom(__int64 this, const TSP::PasteboardObject *a2)
{
  __int64 v3; // x19
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x22
  __int64 v7; // x24
  __int64 v8; // x0
  int *v9; // x8
  int v10; // w10
  int v11; // w9
  __int64 v12; // x22
  __int64 v13; // x24
  __int64 v14; // x0
  int *v15; // x8
  int v16; // w10
  int v17; // w9
  __int64 v18; // x22
  __int64 v19; // x24
  __int64 v20; // x0
  int *v21; // x8
  int v22; // w10
  int v23; // w9
  __int64 v24; // x22
  __int64 v25; // x24
  __int64 v26; // x0
  int *v27; // x8
  int v28; // w10
  int v29; // w9
  __int64 v30; // x22
  __int64 v31; // x24
  __int64 v32; // x0
  int *v33; // x8
  int v34; // w10
  int v35; // w9
  int v36; // w22
  __int64 v37; // x0
  _QWORD *v38; // x0
  const TSP::Reference *v39; // x1
  __int64 v40; // x0
  _QWORD *v41; // x0
  const TSP::Reference *v42; // x1
  __int64 v43; // x0
  _QWORD *v44; // x0
  const TSP::Reference *v45; // x1
  __int64 v46; // x0
  _QWORD *v47; // x0
  const TSP::Reference *v48; // x1
  __int64 v49; // x0
  _QWORD *v50; // x0
  const TSP::Reference *v51; // x1

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
  v12 = *((unsigned int *)a2 + 14);
  if ( (_DWORD)v12 )
  {
    v13 = *((_QWORD *)a2 + 8) + 8LL;
    v14 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
            (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 48),
            *((_DWORD *)a2 + 14));
    this = sub_100077328(v3 + 48, v14, v13, v12, (unsigned int)(**(_DWORD **)(v3 + 64) - *(_DWORD *)(v3 + 56)));
    v15 = *(int **)(v3 + 64);
    v16 = *v15;
    v17 = *(_DWORD *)(v3 + 56) + v12;
    *(_DWORD *)(v3 + 56) = v17;
    if ( v16 < v17 )
      *v15 = v17;
  }
  v18 = *((unsigned int *)a2 + 20);
  if ( (_DWORD)v18 )
  {
    v19 = *((_QWORD *)a2 + 11) + 8LL;
    v20 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
            (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 72),
            *((_DWORD *)a2 + 20));
    this = sub_100077328(v3 + 72, v20, v19, v18, (unsigned int)(**(_DWORD **)(v3 + 88) - *(_DWORD *)(v3 + 80)));
    v21 = *(int **)(v3 + 88);
    v22 = *v21;
    v23 = *(_DWORD *)(v3 + 80) + v18;
    *(_DWORD *)(v3 + 80) = v23;
    if ( v22 < v23 )
      *v21 = v23;
  }
  v24 = *((unsigned int *)a2 + 26);
  if ( (_DWORD)v24 )
  {
    v25 = *((_QWORD *)a2 + 14) + 8LL;
    v26 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
            (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 96),
            *((_DWORD *)a2 + 26));
    this = sub_100077328(v3 + 96, v26, v25, v24, (unsigned int)(**(_DWORD **)(v3 + 112) - *(_DWORD *)(v3 + 104)));
    v27 = *(int **)(v3 + 112);
    v28 = *v27;
    v29 = *(_DWORD *)(v3 + 104) + v24;
    *(_DWORD *)(v3 + 104) = v29;
    if ( v28 < v29 )
      *v27 = v29;
  }
  v30 = *((unsigned int *)a2 + 32);
  if ( (_DWORD)v30 )
  {
    v31 = *((_QWORD *)a2 + 17) + 8LL;
    v32 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
            (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 120),
            *((_DWORD *)a2 + 32));
    this = sub_100076B5C(v3 + 120, v32, v31, v30, (unsigned int)(**(_DWORD **)(v3 + 136) - *(_DWORD *)(v3 + 128)));
    v33 = *(int **)(v3 + 136);
    v34 = *v33;
    v35 = *(_DWORD *)(v3 + 128) + v30;
    *(_DWORD *)(v3 + 128) = v35;
    if ( v34 < v35 )
      *v33 = v35;
  }
  v36 = *((_DWORD *)a2 + 4);
  if ( (v36 & 0x7F) != 0 )
  {
    if ( (v36 & 1) != 0 )
    {
      *(_DWORD *)(v3 + 16) |= 1u;
      v37 = *(_QWORD *)(v3 + 144);
      if ( !v37 )
      {
        v38 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
        if ( (*v4 & 1) != 0 )
          v38 = (_QWORD *)*v38;
        v37 = google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(v38);
        *(_QWORD *)(v3 + 144) = v37;
      }
      if ( *((_QWORD *)a2 + 18) )
        v39 = (const TSP::Reference *)*((_QWORD *)a2 + 18);
      else
        v39 = (const TSP::Reference *)&TSP::_Reference_default_instance_;
      this = TSP::Reference::MergeFrom(v37, v39);
      if ( (v36 & 2) == 0 )
      {
LABEL_21:
        if ( (v36 & 4) == 0 )
          goto LABEL_22;
        goto LABEL_45;
      }
    }
    else if ( (v36 & 2) == 0 )
    {
      goto LABEL_21;
    }
    *(_DWORD *)(v3 + 16) |= 2u;
    v40 = *(_QWORD *)(v3 + 152);
    if ( !v40 )
    {
      v41 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
      if ( (*v4 & 1) != 0 )
        v41 = (_QWORD *)*v41;
      v40 = google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(v41);
      *(_QWORD *)(v3 + 152) = v40;
    }
    if ( *((_QWORD *)a2 + 19) )
      v42 = (const TSP::Reference *)*((_QWORD *)a2 + 19);
    else
      v42 = (const TSP::Reference *)&TSP::_Reference_default_instance_;
    this = TSP::Reference::MergeFrom(v40, v42);
    if ( (v36 & 4) == 0 )
    {
LABEL_22:
      if ( (v36 & 8) == 0 )
        goto LABEL_23;
      goto LABEL_53;
    }
LABEL_45:
    *(_DWORD *)(v3 + 16) |= 4u;
    v43 = *(_QWORD *)(v3 + 160);
    if ( !v43 )
    {
      v44 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
      if ( (*v4 & 1) != 0 )
        v44 = (_QWORD *)*v44;
      v43 = google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(v44);
      *(_QWORD *)(v3 + 160) = v43;
    }
    if ( *((_QWORD *)a2 + 20) )
      v45 = (const TSP::Reference *)*((_QWORD *)a2 + 20);
    else
      v45 = (const TSP::Reference *)&TSP::_Reference_default_instance_;
    this = TSP::Reference::MergeFrom(v43, v45);
    if ( (v36 & 8) == 0 )
    {
LABEL_23:
      if ( (v36 & 0x10) == 0 )
        goto LABEL_24;
      goto LABEL_61;
    }
LABEL_53:
    *(_DWORD *)(v3 + 16) |= 8u;
    v46 = *(_QWORD *)(v3 + 168);
    if ( !v46 )
    {
      v47 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
      if ( (*v4 & 1) != 0 )
        v47 = (_QWORD *)*v47;
      v46 = google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(v47);
      *(_QWORD *)(v3 + 168) = v46;
    }
    if ( *((_QWORD *)a2 + 21) )
      v48 = (const TSP::Reference *)*((_QWORD *)a2 + 21);
    else
      v48 = (const TSP::Reference *)&TSP::_Reference_default_instance_;
    this = TSP::Reference::MergeFrom(v46, v48);
    if ( (v36 & 0x10) == 0 )
    {
LABEL_24:
      if ( (v36 & 0x20) == 0 )
        goto LABEL_25;
      goto LABEL_69;
    }
LABEL_61:
    *(_DWORD *)(v3 + 16) |= 0x10u;
    v49 = *(_QWORD *)(v3 + 176);
    if ( !v49 )
    {
      v50 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
      if ( (*v4 & 1) != 0 )
        v50 = (_QWORD *)*v50;
      v49 = google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(v50);
      *(_QWORD *)(v3 + 176) = v49;
    }
    if ( *((_QWORD *)a2 + 22) )
      v51 = (const TSP::Reference *)*((_QWORD *)a2 + 22);
    else
      v51 = (const TSP::Reference *)&TSP::_Reference_default_instance_;
    this = TSP::Reference::MergeFrom(v49, v51);
    if ( (v36 & 0x20) == 0 )
    {
LABEL_25:
      if ( (v36 & 0x40) == 0 )
      {
LABEL_27:
        *(_DWORD *)(v3 + 16) |= v36;
        return this;
      }
LABEL_26:
      *(_BYTE *)(v3 + 185) = *((_BYTE *)a2 + 185);
      goto LABEL_27;
    }
LABEL_69:
    *(_BYTE *)(v3 + 184) = *((_BYTE *)a2 + 184);
    if ( (v36 & 0x40) == 0 )
      goto LABEL_27;
    goto LABEL_26;
  }
  return this;
}