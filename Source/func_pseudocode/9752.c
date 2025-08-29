__ZN3TSP15PackageMetadata9MergeFromERKS0_
char *__fastcall TSP::PackageMetadata::MergeFrom(char *this, const TSP::PackageMetadata *a2)
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
  int v18; // w8
  __int64 v19; // x23
  __int64 v20; // x9
  int v21; // w8
  __int64 v22; // x23
  __int64 v23; // x9
  int v24; // w8
  __int64 v25; // x23
  __int64 v26; // x9
  __int64 v27; // x22
  __int64 v28; // x24
  __int64 v29; // x0
  int *v30; // x8
  int v31; // w10
  int v32; // w9
  int v33; // w22
  TSP::DocumentRevision *v34; // x0
  _QWORD *v35; // x0
  const TSP::DocumentRevision *v36; // x1
  TSP::Reference *v37; // x0
  _QWORD *v38; // x0
  const TSP::Reference *v39; // x1

  v3 = (__int64)this;
  v4 = this + 8;
  v5 = *((_QWORD *)a2 + 1);
  if ( (v5 & 1) != 0 )
    this = (char *)sub_10003A25C(this + 8, (v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v6 = *((unsigned int *)a2 + 8);
  if ( (_DWORD)v6 )
  {
    v7 = *((_QWORD *)a2 + 5) + 8LL;
    v8 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
           (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 24),
           *((_DWORD *)a2 + 8));
    this = (char *)sub_1000550E8(v3 + 24, v8, v7, v6, (unsigned int)(**(_DWORD **)(v3 + 40) - *(_DWORD *)(v3 + 32)));
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
    this = (char *)sub_1000551A8(v3 + 48, v14, v13, v12, (unsigned int)(**(_DWORD **)(v3 + 64) - *(_DWORD *)(v3 + 56)));
    v15 = *(int **)(v3 + 64);
    v16 = *v15;
    v17 = *(_DWORD *)(v3 + 56) + v12;
    *(_DWORD *)(v3 + 56) = v17;
    if ( v16 < v17 )
      *v15 = v17;
  }
  v18 = *((_DWORD *)a2 + 18);
  if ( v18 )
  {
    v19 = *(int *)(v3 + 72);
    google::protobuf::RepeatedField<unsigned int>::Reserve(v3 + 72, (unsigned int)(v19 + v18));
    v20 = *(_QWORD *)(v3 + 80);
    *(_DWORD *)(v3 + 72) += *((_DWORD *)a2 + 18);
    this = (char *)memcpy((void *)(v20 + 4 * v19), *((const void **)a2 + 10), 4LL * *((int *)a2 + 18));
  }
  v21 = *((_DWORD *)a2 + 24);
  if ( v21 )
  {
    v22 = *(int *)(v3 + 96);
    google::protobuf::RepeatedField<unsigned int>::Reserve(v3 + 96, (unsigned int)(v22 + v21));
    v23 = *(_QWORD *)(v3 + 104);
    *(_DWORD *)(v3 + 96) += *((_DWORD *)a2 + 24);
    this = (char *)memcpy((void *)(v23 + 4 * v22), *((const void **)a2 + 13), 4LL * *((int *)a2 + 24));
  }
  v24 = *((_DWORD *)a2 + 30);
  if ( v24 )
  {
    v25 = *(int *)(v3 + 120);
    google::protobuf::RepeatedField<unsigned int>::Reserve(v3 + 120, (unsigned int)(v25 + v24));
    v26 = *(_QWORD *)(v3 + 128);
    *(_DWORD *)(v3 + 120) += *((_DWORD *)a2 + 30);
    this = (char *)memcpy((void *)(v26 + 4 * v25), *((const void **)a2 + 16), 4LL * *((int *)a2 + 30));
  }
  v27 = *((unsigned int *)a2 + 38);
  if ( (_DWORD)v27 )
  {
    v28 = *((_QWORD *)a2 + 20) + 8LL;
    v29 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
            (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 144),
            *((_DWORD *)a2 + 38));
    this = (char *)sub_1000550E8(
                     v3 + 144,
                     v29,
                     v28,
                     v27,
                     (unsigned int)(**(_DWORD **)(v3 + 160) - *(_DWORD *)(v3 + 152)));
    v30 = *(int **)(v3 + 160);
    v31 = *v30;
    v32 = *(_DWORD *)(v3 + 152) + v27;
    *(_DWORD *)(v3 + 152) = v32;
    if ( v31 < v32 )
      *v30 = v32;
  }
  v33 = *((_DWORD *)a2 + 4);
  if ( (v33 & 0x1F) != 0 )
  {
    if ( (v33 & 1) != 0 )
    {
      *(_DWORD *)(v3 + 16) |= 1u;
      v34 = *(TSP::DocumentRevision **)(v3 + 168);
      if ( !v34 )
      {
        v35 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
        if ( (*v4 & 1) != 0 )
          v35 = (_QWORD *)*v35;
        v34 = (TSP::DocumentRevision *)google::protobuf::Arena::CreateMaybeMessage<TSP::DocumentRevision>(v35);
        *(_QWORD *)(v3 + 168) = v34;
      }
      if ( *((_QWORD *)a2 + 21) )
        v36 = (const TSP::DocumentRevision *)*((_QWORD *)a2 + 21);
      else
        v36 = (const TSP::DocumentRevision *)&TSP::_DocumentRevision_default_instance_;
      this = (char *)TSP::DocumentRevision::MergeFrom(v34, v36);
      if ( (v33 & 2) == 0 )
      {
LABEL_21:
        if ( (v33 & 4) == 0 )
          goto LABEL_22;
        goto LABEL_43;
      }
    }
    else if ( (v33 & 2) == 0 )
    {
      goto LABEL_21;
    }
    *(_DWORD *)(v3 + 16) |= 2u;
    v37 = *(TSP::Reference **)(v3 + 176);
    if ( !v37 )
    {
      v38 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
      if ( (*v4 & 1) != 0 )
        v38 = (_QWORD *)*v38;
      v37 = (TSP::Reference *)google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(v38);
      *(_QWORD *)(v3 + 176) = v37;
    }
    if ( *((_QWORD *)a2 + 22) )
      v39 = (const TSP::Reference *)*((_QWORD *)a2 + 22);
    else
      v39 = (const TSP::Reference *)&TSP::_Reference_default_instance_;
    this = (char *)TSP::Reference::MergeFrom(v37, v39);
    if ( (v33 & 4) == 0 )
    {
LABEL_22:
      if ( (v33 & 8) == 0 )
        goto LABEL_23;
      goto LABEL_44;
    }
LABEL_43:
    *(_QWORD *)(v3 + 184) = *((_QWORD *)a2 + 23);
    if ( (v33 & 8) == 0 )
    {
LABEL_23:
      if ( (v33 & 0x10) == 0 )
      {
LABEL_25:
        *(_DWORD *)(v3 + 16) |= v33;
        return this;
      }
LABEL_24:
      *(_DWORD *)(v3 + 200) = *((_DWORD *)a2 + 50);
      goto LABEL_25;
    }
LABEL_44:
    *(_QWORD *)(v3 + 192) = *((_QWORD *)a2 + 24);
    if ( (v33 & 0x10) == 0 )
      goto LABEL_25;
    goto LABEL_24;
  }
  return this;
}