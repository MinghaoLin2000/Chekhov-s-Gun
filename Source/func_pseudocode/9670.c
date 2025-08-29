__ZN3TSP13ComponentInfo9MergeFromERKS0_
char *__fastcall TSP::ComponentInfo::MergeFrom(char *this, const TSP::ComponentInfo *a2)
{
  __int64 v3; // x19
  __int64 v4; // x8
  int v5; // w8
  __int64 v6; // x22
  __int64 v7; // x9
  int v8; // w8
  __int64 v9; // x22
  __int64 v10; // x9
  __int64 v11; // x21
  __int64 v12; // x23
  __int64 v13; // x0
  int *v14; // x8
  int v15; // w10
  int v16; // w9
  __int64 v17; // x21
  __int64 v18; // x23
  __int64 v19; // x0
  int *v20; // x8
  int v21; // w10
  int v22; // w9
  __int64 v23; // x21
  __int64 v24; // x23
  __int64 v25; // x0
  int *v26; // x8
  int v27; // w10
  int v28; // w9
  __int64 v29; // x21
  __int64 v30; // x23
  __int64 v31; // x0
  int *v32; // x8
  int v33; // w10
  int v34; // w9
  int v35; // w8
  __int64 v36; // x22
  __int64 v37; // x9
  int v38; // w8
  __int64 v39; // x22
  __int64 v40; // x9
  __int64 v41; // x21
  __int64 v42; // x23
  __int64 v43; // x0
  int *v44; // x8
  int v45; // w10
  int v46; // w9
  int v47; // w8
  __int64 v48; // x22
  __int64 v49; // x9
  int v50; // w21
  int v51; // w8
  unsigned __int64 v52; // x1
  __int64 v53; // x8
  _QWORD *v54; // x2
  unsigned __int64 v55; // x1
  __int64 v56; // x8
  _QWORD *v57; // x2

  v3 = (__int64)this;
  v4 = *((_QWORD *)a2 + 1);
  if ( (v4 & 1) != 0 )
    this = (char *)sub_10003A25C(this + 8, (v4 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v5 = *((_DWORD *)a2 + 6);
  if ( v5 )
  {
    v6 = *(int *)(v3 + 24);
    google::protobuf::RepeatedField<unsigned int>::Reserve(v3 + 24, (unsigned int)(v6 + v5));
    v7 = *(_QWORD *)(v3 + 32);
    *(_DWORD *)(v3 + 24) += *((_DWORD *)a2 + 6);
    this = (char *)memcpy((void *)(v7 + 4 * v6), *((const void **)a2 + 4), 4LL * *((int *)a2 + 6));
  }
  v8 = *((_DWORD *)a2 + 12);
  if ( v8 )
  {
    v9 = *(int *)(v3 + 48);
    google::protobuf::RepeatedField<unsigned int>::Reserve(v3 + 48, (unsigned int)(v9 + v8));
    v10 = *(_QWORD *)(v3 + 56);
    *(_DWORD *)(v3 + 48) += *((_DWORD *)a2 + 12);
    this = (char *)memcpy((void *)(v10 + 4 * v9), *((const void **)a2 + 7), 4LL * *((int *)a2 + 12));
  }
  v11 = *((unsigned int *)a2 + 20);
  if ( (_DWORD)v11 )
  {
    v12 = *((_QWORD *)a2 + 11) + 8LL;
    v13 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
            (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 72),
            *((_DWORD *)a2 + 20));
    this = (char *)sub_100054B9C(v3 + 72, v13, v12, v11, (unsigned int)(**(_DWORD **)(v3 + 88) - *(_DWORD *)(v3 + 80)));
    v14 = *(int **)(v3 + 88);
    v15 = *v14;
    v16 = *(_DWORD *)(v3 + 80) + v11;
    *(_DWORD *)(v3 + 80) = v16;
    if ( v15 < v16 )
      *v14 = v16;
  }
  v17 = *((unsigned int *)a2 + 26);
  if ( (_DWORD)v17 )
  {
    v18 = *((_QWORD *)a2 + 14) + 8LL;
    v19 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
            (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 96),
            *((_DWORD *)a2 + 26));
    this = (char *)sub_100054C5C(
                     v3 + 96,
                     v19,
                     v18,
                     v17,
                     (unsigned int)(**(_DWORD **)(v3 + 112) - *(_DWORD *)(v3 + 104)));
    v20 = *(int **)(v3 + 112);
    v21 = *v20;
    v22 = *(_DWORD *)(v3 + 104) + v17;
    *(_DWORD *)(v3 + 104) = v22;
    if ( v21 < v22 )
      *v20 = v22;
  }
  v23 = *((unsigned int *)a2 + 32);
  if ( (_DWORD)v23 )
  {
    v24 = *((_QWORD *)a2 + 17) + 8LL;
    v25 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
            (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 120),
            *((_DWORD *)a2 + 32));
    this = (char *)sub_100054D1C(
                     v3 + 120,
                     v25,
                     v24,
                     v23,
                     (unsigned int)(**(_DWORD **)(v3 + 136) - *(_DWORD *)(v3 + 128)));
    v26 = *(int **)(v3 + 136);
    v27 = *v26;
    v28 = *(_DWORD *)(v3 + 128) + v23;
    *(_DWORD *)(v3 + 128) = v28;
    if ( v27 < v28 )
      *v26 = v28;
  }
  v29 = *((unsigned int *)a2 + 38);
  if ( (_DWORD)v29 )
  {
    v30 = *((_QWORD *)a2 + 20) + 8LL;
    v31 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
            (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 144),
            *((_DWORD *)a2 + 38));
    this = (char *)sub_100054DDC(
                     v3 + 144,
                     v31,
                     v30,
                     v29,
                     (unsigned int)(**(_DWORD **)(v3 + 160) - *(_DWORD *)(v3 + 152)));
    v32 = *(int **)(v3 + 160);
    v33 = *v32;
    v34 = *(_DWORD *)(v3 + 152) + v29;
    *(_DWORD *)(v3 + 152) = v34;
    if ( v33 < v34 )
      *v32 = v34;
  }
  v35 = *((_DWORD *)a2 + 42);
  if ( v35 )
  {
    v36 = *(int *)(v3 + 168);
    google::protobuf::RepeatedField<unsigned int>::Reserve(v3 + 168, (unsigned int)(v36 + v35));
    v37 = *(_QWORD *)(v3 + 176);
    *(_DWORD *)(v3 + 168) += *((_DWORD *)a2 + 42);
    this = (char *)memcpy((void *)(v37 + 4 * v36), *((const void **)a2 + 22), 4LL * *((int *)a2 + 42));
  }
  v38 = *((_DWORD *)a2 + 48);
  if ( v38 )
  {
    v39 = *(int *)(v3 + 192);
    google::protobuf::RepeatedField<unsigned int>::Reserve(v3 + 192, (unsigned int)(v39 + v38));
    v40 = *(_QWORD *)(v3 + 200);
    *(_DWORD *)(v3 + 192) += *((_DWORD *)a2 + 48);
    this = (char *)memcpy((void *)(v40 + 4 * v39), *((const void **)a2 + 25), 4LL * *((int *)a2 + 48));
  }
  v41 = *((unsigned int *)a2 + 56);
  if ( (_DWORD)v41 )
  {
    v42 = *((_QWORD *)a2 + 29) + 8LL;
    v43 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
            (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 216),
            *((_DWORD *)a2 + 56));
    this = (char *)sub_100054B9C(
                     v3 + 216,
                     v43,
                     v42,
                     v41,
                     (unsigned int)(**(_DWORD **)(v3 + 232) - *(_DWORD *)(v3 + 224)));
    v44 = *(int **)(v3 + 232);
    v45 = *v44;
    v46 = *(_DWORD *)(v3 + 224) + v41;
    *(_DWORD *)(v3 + 224) = v46;
    if ( v45 < v46 )
      *v44 = v46;
  }
  v47 = *((_DWORD *)a2 + 60);
  if ( v47 )
  {
    v48 = *(int *)(v3 + 240);
    google::protobuf::RepeatedField<unsigned long long>::Reserve(v3 + 240, (unsigned int)(v48 + v47));
    v49 = *(_QWORD *)(v3 + 248);
    *(_DWORD *)(v3 + 240) += *((_DWORD *)a2 + 60);
    this = (char *)memcpy((void *)(v49 + 8 * v48), *((const void **)a2 + 31), 8LL * *((int *)a2 + 60));
  }
  v50 = *((_DWORD *)a2 + 4);
  if ( (_BYTE)v50 )
  {
    if ( (v50 & 1) != 0 )
    {
      v52 = *((_QWORD *)a2 + 33) & 0xFFFFFFFFFFFFFFFELL;
      *(_DWORD *)(v3 + 16) |= 1u;
      v53 = *(_QWORD *)(v3 + 8);
      v54 = (_QWORD *)(v53 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v53 & 1) != 0 )
        v54 = (_QWORD *)*v54;
      this = (char *)google::protobuf::internal::ArenaStringPtr::Set(v3 + 264, v52, v54);
      if ( (v50 & 2) == 0 )
      {
LABEL_31:
        if ( (v50 & 4) == 0 )
          goto LABEL_32;
        goto LABEL_48;
      }
    }
    else if ( (v50 & 2) == 0 )
    {
      goto LABEL_31;
    }
    v55 = *((_QWORD *)a2 + 34) & 0xFFFFFFFFFFFFFFFELL;
    *(_DWORD *)(v3 + 16) |= 2u;
    v56 = *(_QWORD *)(v3 + 8);
    v57 = (_QWORD *)(v56 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v56 & 1) != 0 )
      v57 = (_QWORD *)*v57;
    this = (char *)google::protobuf::internal::ArenaStringPtr::Set(v3 + 272, v55, v57);
    if ( (v50 & 4) == 0 )
    {
LABEL_32:
      if ( (v50 & 8) == 0 )
        goto LABEL_33;
      goto LABEL_49;
    }
LABEL_48:
    *(_QWORD *)(v3 + 280) = *((_QWORD *)a2 + 35);
    if ( (v50 & 8) == 0 )
    {
LABEL_33:
      if ( (v50 & 0x10) == 0 )
        goto LABEL_34;
      goto LABEL_50;
    }
LABEL_49:
    *(_QWORD *)(v3 + 288) = *((_QWORD *)a2 + 36);
    if ( (v50 & 0x10) == 0 )
    {
LABEL_34:
      if ( (v50 & 0x20) == 0 )
        goto LABEL_35;
      goto LABEL_51;
    }
LABEL_50:
    *(_BYTE *)(v3 + 296) = *((_BYTE *)a2 + 296);
    if ( (v50 & 0x20) == 0 )
    {
LABEL_35:
      if ( (v50 & 0x40) == 0 )
        goto LABEL_36;
      goto LABEL_52;
    }
LABEL_51:
    *(_BYTE *)(v3 + 297) = *((_BYTE *)a2 + 297);
    if ( (v50 & 0x40) == 0 )
    {
LABEL_36:
      if ( (v50 & 0x80) == 0 )
      {
LABEL_38:
        *(_DWORD *)(v3 + 16) |= v50;
        goto LABEL_39;
      }
LABEL_37:
      *(_DWORD *)(v3 + 300) = *((_DWORD *)a2 + 75);
      goto LABEL_38;
    }
LABEL_52:
    *(_BYTE *)(v3 + 298) = *((_BYTE *)a2 + 298);
    if ( (v50 & 0x80) == 0 )
      goto LABEL_38;
    goto LABEL_37;
  }
LABEL_39:
  if ( (v50 & 0x100) != 0 )
  {
    v51 = *((_DWORD *)a2 + 76);
    *(_DWORD *)(v3 + 16) |= 0x100u;
    *(_DWORD *)(v3 + 304) = v51;
  }
  return this;
}