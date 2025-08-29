__ZN3TSP27ObjectSerializationMetadata9MergeFromERKS0_
char *__fastcall TSP::ObjectSerializationMetadata::MergeFrom(char *this, const TSP::ObjectSerializationMetadata *a2)
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
  __int64 v15; // x22
  __int64 v16; // x24
  __int64 v17; // x0
  int *v18; // x8
  int v19; // w10
  int v20; // w9
  int v21; // w8
  __int64 v22; // x23
  __int64 v23; // x9
  int v24; // w22
  TSP::UUID *v25; // x0
  _QWORD *v26; // x0
  const TSP::UUID *v27; // x1
  TSP::UUID *v28; // x0
  _QWORD *v29; // x0
  const TSP::UUID *v30; // x1
  char *v31; // x0
  _QWORD *v32; // x0
  const TSP::ComponentInfo *v33; // x1
  TSP::Reference *v34; // x0
  _QWORD *v35; // x0
  const TSP::Reference *v36; // x1
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
    this = (char *)sub_1000551A8(v3 + 48, v11, v10, v9, (unsigned int)(**(_DWORD **)(v3 + 64) - *(_DWORD *)(v3 + 56)));
    v12 = *(int **)(v3 + 64);
    v13 = *v12;
    v14 = *(_DWORD *)(v3 + 56) + v9;
    *(_DWORD *)(v3 + 56) = v14;
    if ( v13 < v14 )
      *v12 = v14;
  }
  v15 = *((unsigned int *)a2 + 20);
  if ( (_DWORD)v15 )
  {
    v16 = *((_QWORD *)a2 + 11) + 8LL;
    v17 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
            (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 72),
            *((_DWORD *)a2 + 20));
    this = (char *)sub_100054D1C(v3 + 72, v17, v16, v15, (unsigned int)(**(_DWORD **)(v3 + 88) - *(_DWORD *)(v3 + 80)));
    v18 = *(int **)(v3 + 88);
    v19 = *v18;
    v20 = *(_DWORD *)(v3 + 80) + v15;
    *(_DWORD *)(v3 + 80) = v20;
    if ( v19 < v20 )
      *v18 = v20;
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
  v24 = *((_DWORD *)a2 + 4);
  if ( (v24 & 0xF) == 0 )
    return this;
  if ( (v24 & 1) == 0 )
  {
    if ( (v24 & 2) == 0 )
      goto LABEL_16;
LABEL_27:
    *(_DWORD *)(v3 + 16) |= 2u;
    v28 = *(TSP::UUID **)(v3 + 128);
    if ( !v28 )
    {
      v29 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
      if ( (*v4 & 1) != 0 )
        v29 = (_QWORD *)*v29;
      v28 = (TSP::UUID *)google::protobuf::Arena::CreateMaybeMessage<TSP::UUID>(v29);
      *(_QWORD *)(v3 + 128) = v28;
    }
    if ( *((_QWORD *)a2 + 16) )
      v30 = (const TSP::UUID *)*((_QWORD *)a2 + 16);
    else
      v30 = (const TSP::UUID *)&TSP::_UUID_default_instance_;
    this = (char *)TSP::UUID::MergeFrom(v28, v30);
    if ( (v24 & 4) == 0 )
    {
LABEL_17:
      if ( (v24 & 8) == 0 )
        return this;
      goto LABEL_43;
    }
    goto LABEL_35;
  }
  *(_DWORD *)(v3 + 16) |= 1u;
  v25 = *(TSP::UUID **)(v3 + 120);
  if ( !v25 )
  {
    v26 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
    if ( (*v4 & 1) != 0 )
      v26 = (_QWORD *)*v26;
    v25 = (TSP::UUID *)google::protobuf::Arena::CreateMaybeMessage<TSP::UUID>(v26);
    *(_QWORD *)(v3 + 120) = v25;
  }
  if ( *((_QWORD *)a2 + 15) )
    v27 = (const TSP::UUID *)*((_QWORD *)a2 + 15);
  else
    v27 = (const TSP::UUID *)&TSP::_UUID_default_instance_;
  this = (char *)TSP::UUID::MergeFrom(v25, v27);
  if ( (v24 & 2) != 0 )
    goto LABEL_27;
LABEL_16:
  if ( (v24 & 4) == 0 )
    goto LABEL_17;
LABEL_35:
  *(_DWORD *)(v3 + 16) |= 4u;
  v31 = *(char **)(v3 + 136);
  if ( !v31 )
  {
    v32 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
    if ( (*v4 & 1) != 0 )
      v32 = (_QWORD *)*v32;
    v31 = (char *)google::protobuf::Arena::CreateMaybeMessage<TSP::ComponentInfo>(v32);
    *(_QWORD *)(v3 + 136) = v31;
  }
  if ( *((_QWORD *)a2 + 17) )
    v33 = (const TSP::ComponentInfo *)*((_QWORD *)a2 + 17);
  else
    v33 = (const TSP::ComponentInfo *)&TSP::_ComponentInfo_default_instance_;
  this = TSP::ComponentInfo::MergeFrom(v31, v33);
  if ( (v24 & 8) != 0 )
  {
LABEL_43:
    *(_DWORD *)(v3 + 16) |= 8u;
    v34 = *(TSP::Reference **)(v3 + 144);
    if ( !v34 )
    {
      v35 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
      if ( (*v4 & 1) != 0 )
        v35 = (_QWORD *)*v35;
      v34 = (TSP::Reference *)google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(v35);
      *(_QWORD *)(v3 + 144) = v34;
    }
    if ( *((_QWORD *)a2 + 18) )
      v36 = (const TSP::Reference *)*((_QWORD *)a2 + 18);
    else
      v36 = (const TSP::Reference *)&TSP::_Reference_default_instance_;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (char *)TSP::Reference::MergeFrom(v34, v36);
  }
  return this;
}