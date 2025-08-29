__ZN6google8protobuf19FileDescriptorProto9MergeFromERKS1_
char *__fastcall google::protobuf::FileDescriptorProto::MergeFrom(
        char *this,
        const google::protobuf::FileDescriptorProto *a2)
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
  int v36; // w8
  __int64 v37; // x23
  __int64 v38; // x9
  int v39; // w8
  __int64 v40; // x23
  __int64 v41; // x9
  int v42; // w22
  unsigned __int64 v43; // x1
  __int64 v44; // x8
  _QWORD *v45; // x2
  unsigned __int64 v46; // x1
  __int64 v47; // x8
  _QWORD *v48; // x2
  unsigned __int64 v49; // x1
  __int64 v50; // x8
  _QWORD *v51; // x2
  google::protobuf::FileOptions *v52; // x0
  _QWORD *v53; // x0
  const google::protobuf::FileOptions *v54; // x1
  google::protobuf::SourceCodeInfo *v55; // x0
  _QWORD *v56; // x0
  const google::protobuf::SourceCodeInfo *v57; // x1
  __int64 vars8; // [xsp+38h] [xbp+8h]

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
    this = (char *)sub_1000B8CB4(v3 + 24, v8, v7, v6, (unsigned int)(**(_DWORD **)(v3 + 40) - *(_DWORD *)(v3 + 32)));
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
    this = (char *)sub_1000B8D60(v3 + 48, v14, v13, v12, (unsigned int)(**(_DWORD **)(v3 + 64) - *(_DWORD *)(v3 + 56)));
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
    this = (char *)sub_1000B8E20(v3 + 72, v20, v19, v18, (unsigned int)(**(_DWORD **)(v3 + 88) - *(_DWORD *)(v3 + 80)));
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
    this = (char *)sub_1000B8EE0(
                     v3 + 96,
                     v26,
                     v25,
                     v24,
                     (unsigned int)(**(_DWORD **)(v3 + 112) - *(_DWORD *)(v3 + 104)));
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
    this = (char *)sub_1000B8FA0(
                     v3 + 120,
                     v32,
                     v31,
                     v30,
                     (unsigned int)(**(_DWORD **)(v3 + 136) - *(_DWORD *)(v3 + 128)));
    v33 = *(int **)(v3 + 136);
    v34 = *v33;
    v35 = *(_DWORD *)(v3 + 128) + v30;
    *(_DWORD *)(v3 + 128) = v35;
    if ( v34 < v35 )
      *v33 = v35;
  }
  v36 = *((_DWORD *)a2 + 36);
  if ( v36 )
  {
    v37 = *(int *)(v3 + 144);
    google::protobuf::RepeatedField<int>::Reserve(v3 + 144, (unsigned int)(v37 + v36));
    v38 = *(_QWORD *)(v3 + 152);
    *(_DWORD *)(v3 + 144) += *((_DWORD *)a2 + 36);
    this = (char *)memcpy((void *)(v38 + 4 * v37), *((const void **)a2 + 19), 4LL * *((int *)a2 + 36));
  }
  v39 = *((_DWORD *)a2 + 40);
  if ( v39 )
  {
    v40 = *(int *)(v3 + 160);
    google::protobuf::RepeatedField<int>::Reserve(v3 + 160, (unsigned int)(v40 + v39));
    v41 = *(_QWORD *)(v3 + 168);
    *(_DWORD *)(v3 + 160) += *((_DWORD *)a2 + 40);
    this = (char *)memcpy((void *)(v41 + 4 * v40), *((const void **)a2 + 21), 4LL * *((int *)a2 + 40));
  }
  v42 = *((_DWORD *)a2 + 4);
  if ( (v42 & 0x1F) == 0 )
    return this;
  if ( (v42 & 1) != 0 )
  {
    v43 = *((_QWORD *)a2 + 22) & 0xFFFFFFFFFFFFFFFELL;
    *(_DWORD *)(v3 + 16) |= 1u;
    v44 = *(_QWORD *)(v3 + 8);
    v45 = (_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v44 & 1) != 0 )
      v45 = (_QWORD *)*v45;
    this = (char *)google::protobuf::internal::ArenaStringPtr::Set(v3 + 176, v43, v45);
    if ( (v42 & 2) == 0 )
    {
LABEL_25:
      if ( (v42 & 4) == 0 )
        goto LABEL_26;
LABEL_35:
      v49 = *((_QWORD *)a2 + 24) & 0xFFFFFFFFFFFFFFFELL;
      *(_DWORD *)(v3 + 16) |= 4u;
      v50 = *(_QWORD *)(v3 + 8);
      v51 = (_QWORD *)(v50 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v50 & 1) != 0 )
        v51 = (_QWORD *)*v51;
      this = (char *)google::protobuf::internal::ArenaStringPtr::Set(v3 + 192, v49, v51);
      if ( (v42 & 8) == 0 )
      {
LABEL_27:
        if ( (v42 & 0x10) == 0 )
          return this;
        goto LABEL_46;
      }
      goto LABEL_38;
    }
  }
  else if ( (v42 & 2) == 0 )
  {
    goto LABEL_25;
  }
  v46 = *((_QWORD *)a2 + 23) & 0xFFFFFFFFFFFFFFFELL;
  *(_DWORD *)(v3 + 16) |= 2u;
  v47 = *(_QWORD *)(v3 + 8);
  v48 = (_QWORD *)(v47 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v47 & 1) != 0 )
    v48 = (_QWORD *)*v48;
  this = (char *)google::protobuf::internal::ArenaStringPtr::Set(v3 + 184, v46, v48);
  if ( (v42 & 4) != 0 )
    goto LABEL_35;
LABEL_26:
  if ( (v42 & 8) == 0 )
    goto LABEL_27;
LABEL_38:
  *(_DWORD *)(v3 + 16) |= 8u;
  v52 = *(google::protobuf::FileOptions **)(v3 + 200);
  if ( !v52 )
  {
    v53 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
    if ( (*v4 & 1) != 0 )
      v53 = (_QWORD *)*v53;
    v52 = (google::protobuf::FileOptions *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::FileOptions>(v53);
    *(_QWORD *)(v3 + 200) = v52;
  }
  if ( *((_QWORD *)a2 + 25) )
    v54 = (const google::protobuf::FileOptions *)*((_QWORD *)a2 + 25);
  else
    v54 = (const google::protobuf::FileOptions *)&google::protobuf::_FileOptions_default_instance_;
  this = (char *)google::protobuf::FileOptions::MergeFrom(v52, v54);
  if ( (v42 & 0x10) != 0 )
  {
LABEL_46:
    *(_DWORD *)(v3 + 16) |= 0x10u;
    v55 = *(google::protobuf::SourceCodeInfo **)(v3 + 208);
    if ( !v55 )
    {
      v56 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
      if ( (*v4 & 1) != 0 )
        v56 = (_QWORD *)*v56;
      v55 = (google::protobuf::SourceCodeInfo *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::SourceCodeInfo>(v56);
      *(_QWORD *)(v3 + 208) = v55;
    }
    if ( *((_QWORD *)a2 + 26) )
      v57 = (const google::protobuf::SourceCodeInfo *)*((_QWORD *)a2 + 26);
    else
      v57 = (const google::protobuf::SourceCodeInfo *)&google::protobuf::_SourceCodeInfo_default_instance_;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (char *)google::protobuf::SourceCodeInfo::MergeFrom(v55, v57);
  }
  return this;
}