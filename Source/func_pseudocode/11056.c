__ZN6google8protobuf15DescriptorProto9MergeFromERKS1_
__int64 __fastcall google::protobuf::DescriptorProto::MergeFrom(
        __int64 this,
        const google::protobuf::DescriptorProto *a2)
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
  __int64 v36; // x22
  __int64 v37; // x24
  __int64 v38; // x0
  int *v39; // x8
  int v40; // w10
  int v41; // w9
  __int64 v42; // x22
  __int64 v43; // x24
  __int64 v44; // x0
  int *v45; // x8
  int v46; // w10
  int v47; // w9
  __int64 v48; // x22
  __int64 v49; // x24
  __int64 v50; // x0
  int *v51; // x8
  int v52; // w10
  int v53; // w9
  int v54; // w22
  unsigned __int64 v55; // x1
  __int64 v56; // x8
  _QWORD *v57; // x2
  google::protobuf::MessageOptions *v58; // x0
  _QWORD *v59; // x0
  const google::protobuf::MessageOptions *v60; // x1
  __int64 vars8; // [xsp+38h] [xbp+8h]

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
    this = sub_1000B8FA0(v3 + 24, v8, v7, v6, (unsigned int)(**(_DWORD **)(v3 + 40) - *(_DWORD *)(v3 + 32)));
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
    this = sub_1000B8D60(v3 + 48, v14, v13, v12, (unsigned int)(**(_DWORD **)(v3 + 64) - *(_DWORD *)(v3 + 56)));
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
    this = sub_1000B8E20(v3 + 72, v20, v19, v18, (unsigned int)(**(_DWORD **)(v3 + 88) - *(_DWORD *)(v3 + 80)));
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
    this = sub_1000B9160(v3 + 96, v26, v25, v24, (unsigned int)(**(_DWORD **)(v3 + 112) - *(_DWORD *)(v3 + 104)));
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
    this = sub_1000B8FA0(v3 + 120, v32, v31, v30, (unsigned int)(**(_DWORD **)(v3 + 136) - *(_DWORD *)(v3 + 128)));
    v33 = *(int **)(v3 + 136);
    v34 = *v33;
    v35 = *(_DWORD *)(v3 + 128) + v30;
    *(_DWORD *)(v3 + 128) = v35;
    if ( v34 < v35 )
      *v33 = v35;
  }
  v36 = *((unsigned int *)a2 + 38);
  if ( (_DWORD)v36 )
  {
    v37 = *((_QWORD *)a2 + 20) + 8LL;
    v38 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
            (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 144),
            *((_DWORD *)a2 + 38));
    this = sub_1000B9220(v3 + 144, v38, v37, v36, (unsigned int)(**(_DWORD **)(v3 + 160) - *(_DWORD *)(v3 + 152)));
    v39 = *(int **)(v3 + 160);
    v40 = *v39;
    v41 = *(_DWORD *)(v3 + 152) + v36;
    *(_DWORD *)(v3 + 152) = v41;
    if ( v40 < v41 )
      *v39 = v41;
  }
  v42 = *((unsigned int *)a2 + 44);
  if ( (_DWORD)v42 )
  {
    v43 = *((_QWORD *)a2 + 23) + 8LL;
    v44 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
            (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 168),
            *((_DWORD *)a2 + 44));
    this = sub_1000B92E0(v3 + 168, v44, v43, v42, (unsigned int)(**(_DWORD **)(v3 + 184) - *(_DWORD *)(v3 + 176)));
    v45 = *(int **)(v3 + 184);
    v46 = *v45;
    v47 = *(_DWORD *)(v3 + 176) + v42;
    *(_DWORD *)(v3 + 176) = v47;
    if ( v46 < v47 )
      *v45 = v47;
  }
  v48 = *((unsigned int *)a2 + 50);
  if ( (_DWORD)v48 )
  {
    v49 = *((_QWORD *)a2 + 26) + 8LL;
    v50 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
            (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 192),
            *((_DWORD *)a2 + 50));
    this = sub_1000B8CB4(v3 + 192, v50, v49, v48, (unsigned int)(**(_DWORD **)(v3 + 208) - *(_DWORD *)(v3 + 200)));
    v51 = *(int **)(v3 + 208);
    v52 = *v51;
    v53 = *(_DWORD *)(v3 + 200) + v48;
    *(_DWORD *)(v3 + 200) = v53;
    if ( v52 < v53 )
      *v51 = v53;
  }
  v54 = *((_DWORD *)a2 + 4);
  if ( (v54 & 3) != 0 )
  {
    if ( (v54 & 1) != 0 )
    {
      v55 = *((_QWORD *)a2 + 27) & 0xFFFFFFFFFFFFFFFELL;
      *(_DWORD *)(v3 + 16) |= 1u;
      v56 = *(_QWORD *)(v3 + 8);
      v57 = (_QWORD *)(v56 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v56 & 1) != 0 )
        v57 = (_QWORD *)*v57;
      this = google::protobuf::internal::ArenaStringPtr::Set(v3 + 216, v55, v57);
    }
    if ( (v54 & 2) != 0 )
    {
      *(_DWORD *)(v3 + 16) |= 2u;
      v58 = *(google::protobuf::MessageOptions **)(v3 + 224);
      if ( !v58 )
      {
        v59 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
        if ( (*v4 & 1) != 0 )
          v59 = (_QWORD *)*v59;
        v58 = (google::protobuf::MessageOptions *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::MessageOptions>(v59);
        *(_QWORD *)(v3 + 224) = v58;
      }
      if ( *((_QWORD *)a2 + 28) )
        v60 = (const google::protobuf::MessageOptions *)*((_QWORD *)a2 + 28);
      else
        v60 = (const google::protobuf::MessageOptions *)&google::protobuf::_MessageOptions_default_instance_;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return google::protobuf::MessageOptions::MergeFrom(v58, v60);
    }
  }
  return this;
}