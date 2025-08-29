__ZN3TSP11MessageInfo9MergeFromERKS0_
char *__fastcall TSP::MessageInfo::MergeFrom(char *this, const TSP::MessageInfo *a2)
{
  __int64 v3; // x19
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
  int v18; // w8
  __int64 v19; // x23
  __int64 v20; // x9
  int v21; // w8
  __int64 v22; // x23
  __int64 v23; // x9
  __int64 v24; // x22
  __int64 v25; // x24
  __int64 v26; // x0
  int *v27; // x8
  int v28; // w10
  int v29; // w9
  int v30; // w8
  __int64 v31; // x23
  __int64 v32; // x9
  int v33; // w22
  TSP::FieldPath *v34; // x0
  _QWORD *v35; // x0
  const TSP::FieldPath *v36; // x1

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
    this = (char *)sub_100054810(v3 + 48, v11, v10, v9, (unsigned int)(**(_DWORD **)(v3 + 64) - *(_DWORD *)(v3 + 56)));
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
    google::protobuf::RepeatedField<unsigned long long>::Reserve(v3 + 72, (unsigned int)(v16 + v15));
    v17 = *(_QWORD *)(v3 + 80);
    *(_DWORD *)(v3 + 72) += *((_DWORD *)a2 + 18);
    this = (char *)memcpy((void *)(v17 + 8 * v16), *((const void **)a2 + 10), 8LL * *((int *)a2 + 18));
  }
  v18 = *((_DWORD *)a2 + 24);
  if ( v18 )
  {
    v19 = *(int *)(v3 + 96);
    google::protobuf::RepeatedField<unsigned long long>::Reserve(v3 + 96, (unsigned int)(v19 + v18));
    v20 = *(_QWORD *)(v3 + 104);
    *(_DWORD *)(v3 + 96) += *((_DWORD *)a2 + 24);
    this = (char *)memcpy((void *)(v20 + 8 * v19), *((const void **)a2 + 13), 8LL * *((int *)a2 + 24));
  }
  v21 = *((_DWORD *)a2 + 30);
  if ( v21 )
  {
    v22 = *(int *)(v3 + 120);
    google::protobuf::RepeatedField<unsigned int>::Reserve(v3 + 120, (unsigned int)(v22 + v21));
    v23 = *(_QWORD *)(v3 + 128);
    *(_DWORD *)(v3 + 120) += *((_DWORD *)a2 + 30);
    this = (char *)memcpy((void *)(v23 + 4 * v22), *((const void **)a2 + 16), 4LL * *((int *)a2 + 30));
  }
  v24 = *((unsigned int *)a2 + 38);
  if ( (_DWORD)v24 )
  {
    v25 = *((_QWORD *)a2 + 20) + 8LL;
    v26 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
            (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 144),
            *((_DWORD *)a2 + 38));
    this = (char *)sub_1000548D0(
                     v3 + 144,
                     v26,
                     v25,
                     v24,
                     (unsigned int)(**(_DWORD **)(v3 + 160) - *(_DWORD *)(v3 + 152)));
    v27 = *(int **)(v3 + 160);
    v28 = *v27;
    v29 = *(_DWORD *)(v3 + 152) + v24;
    *(_DWORD *)(v3 + 152) = v29;
    if ( v28 < v29 )
      *v27 = v29;
  }
  v30 = *((_DWORD *)a2 + 42);
  if ( v30 )
  {
    v31 = *(int *)(v3 + 168);
    google::protobuf::RepeatedField<unsigned int>::Reserve(v3 + 168, (unsigned int)(v31 + v30));
    v32 = *(_QWORD *)(v3 + 176);
    *(_DWORD *)(v3 + 168) += *((_DWORD *)a2 + 42);
    this = (char *)memcpy((void *)(v32 + 4 * v31), *((const void **)a2 + 22), 4LL * *((int *)a2 + 42));
  }
  v33 = *((_DWORD *)a2 + 4);
  if ( (v33 & 0xF) != 0 )
  {
    if ( (v33 & 1) != 0 )
    {
      *(_DWORD *)(v3 + 16) |= 1u;
      v34 = *(TSP::FieldPath **)(v3 + 192);
      if ( !v34 )
      {
        v35 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
        if ( (*v4 & 1) != 0 )
          v35 = (_QWORD *)*v35;
        v34 = (TSP::FieldPath *)google::protobuf::Arena::CreateMaybeMessage<TSP::FieldPath>(v35);
        *(_QWORD *)(v3 + 192) = v34;
      }
      if ( *((_QWORD *)a2 + 24) )
        v36 = (const TSP::FieldPath *)*((_QWORD *)a2 + 24);
      else
        v36 = (const TSP::FieldPath *)&TSP::_FieldPath_default_instance_;
      this = (char *)TSP::FieldPath::MergeFrom(v34, v36);
      if ( (v33 & 2) == 0 )
      {
LABEL_22:
        if ( (v33 & 4) == 0 )
          goto LABEL_23;
        goto LABEL_36;
      }
    }
    else if ( (v33 & 2) == 0 )
    {
      goto LABEL_22;
    }
    *(_DWORD *)(v3 + 200) = *((_DWORD *)a2 + 50);
    if ( (v33 & 4) == 0 )
    {
LABEL_23:
      if ( (v33 & 8) == 0 )
      {
LABEL_25:
        *(_DWORD *)(v3 + 16) |= v33;
        return this;
      }
LABEL_24:
      *(_DWORD *)(v3 + 208) = *((_DWORD *)a2 + 52);
      goto LABEL_25;
    }
LABEL_36:
    *(_DWORD *)(v3 + 204) = *((_DWORD *)a2 + 51);
    if ( (v33 & 8) == 0 )
      goto LABEL_25;
    goto LABEL_24;
  }
  return this;
}