__ZN6google8protobuf23SourceCodeInfo_Location9MergeFromERKS1_
char *__fastcall google::protobuf::SourceCodeInfo_Location::MergeFrom(
        char *this,
        const google::protobuf::SourceCodeInfo_Location *a2)
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
  int v17; // w21
  unsigned __int64 v18; // x1
  __int64 v19; // x8
  _QWORD *v20; // x2
  unsigned __int64 v21; // x1
  __int64 v22; // x8
  _QWORD *v23; // x2
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = (__int64)this;
  v4 = *((_QWORD *)a2 + 1);
  if ( (v4 & 1) != 0 )
    this = (char *)sub_10003A25C(this + 8, (v4 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v5 = *((_DWORD *)a2 + 6);
  if ( v5 )
  {
    v6 = *(int *)(v3 + 24);
    google::protobuf::RepeatedField<int>::Reserve(v3 + 24, (unsigned int)(v6 + v5));
    v7 = *(_QWORD *)(v3 + 32);
    *(_DWORD *)(v3 + 24) += *((_DWORD *)a2 + 6);
    this = (char *)memcpy((void *)(v7 + 4 * v6), *((const void **)a2 + 4), 4LL * *((int *)a2 + 6));
  }
  v8 = *((_DWORD *)a2 + 12);
  if ( v8 )
  {
    v9 = *(int *)(v3 + 48);
    google::protobuf::RepeatedField<int>::Reserve(v3 + 48, (unsigned int)(v9 + v8));
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
    this = (char *)sub_1000B8CB4(v3 + 72, v13, v12, v11, (unsigned int)(**(_DWORD **)(v3 + 88) - *(_DWORD *)(v3 + 80)));
    v14 = *(int **)(v3 + 88);
    v15 = *v14;
    v16 = *(_DWORD *)(v3 + 80) + v11;
    *(_DWORD *)(v3 + 80) = v16;
    if ( v15 < v16 )
      *v14 = v16;
  }
  v17 = *((_DWORD *)a2 + 4);
  if ( (v17 & 3) != 0 )
  {
    if ( (v17 & 1) != 0 )
    {
      v18 = *((_QWORD *)a2 + 12) & 0xFFFFFFFFFFFFFFFELL;
      *(_DWORD *)(v3 + 16) |= 1u;
      v19 = *(_QWORD *)(v3 + 8);
      v20 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v19 & 1) != 0 )
        v20 = (_QWORD *)*v20;
      this = (char *)google::protobuf::internal::ArenaStringPtr::Set(v3 + 96, v18, v20);
    }
    if ( (v17 & 2) != 0 )
    {
      v21 = *((_QWORD *)a2 + 13) & 0xFFFFFFFFFFFFFFFELL;
      *(_DWORD *)(v3 + 16) |= 2u;
      v22 = *(_QWORD *)(v3 + 8);
      v23 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v22 & 1) != 0 )
        v23 = (_QWORD *)*v23;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return (char *)google::protobuf::internal::ArenaStringPtr::Set(v3 + 104, v21, v23);
    }
  }
  return this;
}