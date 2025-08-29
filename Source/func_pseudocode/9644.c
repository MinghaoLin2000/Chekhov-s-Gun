__ZN3TSP9FieldInfo9MergeFromERKS0_
char *__fastcall TSP::FieldInfo::MergeFrom(char *this, const TSP::FieldInfo *a2)
{
  __int64 v3; // x19
  _QWORD *v4; // x21
  __int64 v5; // x8
  int v6; // w8
  __int64 v7; // x23
  __int64 v8; // x9
  int v9; // w8
  __int64 v10; // x23
  __int64 v11; // x9
  int v12; // w8
  __int64 v13; // x23
  __int64 v14; // x9
  int v15; // w22
  unsigned __int64 v16; // x1
  __int64 v17; // x8
  _QWORD *v18; // x2
  char *v19; // x0
  _QWORD *v20; // x0
  const TSP::FieldPath *v21; // x1

  v3 = (__int64)this;
  v4 = this + 8;
  v5 = *((_QWORD *)a2 + 1);
  if ( (v5 & 1) != 0 )
    this = (char *)sub_10003A25C(this + 8, (v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v6 = *((_DWORD *)a2 + 6);
  if ( v6 )
  {
    v7 = *(int *)(v3 + 24);
    google::protobuf::RepeatedField<unsigned long long>::Reserve(v3 + 24, (unsigned int)(v7 + v6));
    v8 = *(_QWORD *)(v3 + 32);
    *(_DWORD *)(v3 + 24) += *((_DWORD *)a2 + 6);
    this = (char *)memcpy((void *)(v8 + 8 * v7), *((const void **)a2 + 4), 8LL * *((int *)a2 + 6));
  }
  v9 = *((_DWORD *)a2 + 12);
  if ( v9 )
  {
    v10 = *(int *)(v3 + 48);
    google::protobuf::RepeatedField<unsigned long long>::Reserve(v3 + 48, (unsigned int)(v10 + v9));
    v11 = *(_QWORD *)(v3 + 56);
    *(_DWORD *)(v3 + 48) += *((_DWORD *)a2 + 12);
    this = (char *)memcpy((void *)(v11 + 8 * v10), *((const void **)a2 + 7), 8LL * *((int *)a2 + 12));
  }
  v12 = *((_DWORD *)a2 + 18);
  if ( v12 )
  {
    v13 = *(int *)(v3 + 72);
    google::protobuf::RepeatedField<unsigned int>::Reserve(v3 + 72, (unsigned int)(v13 + v12));
    v14 = *(_QWORD *)(v3 + 80);
    *(_DWORD *)(v3 + 72) += *((_DWORD *)a2 + 18);
    this = (char *)memcpy((void *)(v14 + 4 * v13), *((const void **)a2 + 10), 4LL * *((int *)a2 + 18));
  }
  v15 = *((_DWORD *)a2 + 4);
  if ( (v15 & 0x1F) != 0 )
  {
    if ( (v15 & 1) != 0 )
    {
      v16 = *((_QWORD *)a2 + 12) & 0xFFFFFFFFFFFFFFFELL;
      *(_DWORD *)(v3 + 16) |= 1u;
      v17 = *(_QWORD *)(v3 + 8);
      v18 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v17 & 1) != 0 )
        v18 = (_QWORD *)*v18;
      this = (char *)google::protobuf::internal::ArenaStringPtr::Set(v3 + 96, v16, v18);
      if ( (v15 & 2) == 0 )
      {
LABEL_12:
        if ( (v15 & 4) == 0 )
          goto LABEL_13;
        goto LABEL_29;
      }
    }
    else if ( (v15 & 2) == 0 )
    {
      goto LABEL_12;
    }
    *(_DWORD *)(v3 + 16) |= 2u;
    v19 = *(char **)(v3 + 104);
    if ( !v19 )
    {
      v20 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
      if ( (*v4 & 1) != 0 )
        v20 = (_QWORD *)*v20;
      v19 = (char *)google::protobuf::Arena::CreateMaybeMessage<TSP::FieldPath>(v20);
      *(_QWORD *)(v3 + 104) = v19;
    }
    if ( *((_QWORD *)a2 + 13) )
      v21 = (const TSP::FieldPath *)*((_QWORD *)a2 + 13);
    else
      v21 = (const TSP::FieldPath *)&TSP::_FieldPath_default_instance_;
    this = TSP::FieldPath::MergeFrom(v19, v21);
    if ( (v15 & 4) == 0 )
    {
LABEL_13:
      if ( (v15 & 8) == 0 )
        goto LABEL_14;
      goto LABEL_30;
    }
LABEL_29:
    *(_DWORD *)(v3 + 112) = *((_DWORD *)a2 + 28);
    if ( (v15 & 8) == 0 )
    {
LABEL_14:
      if ( (v15 & 0x10) == 0 )
      {
LABEL_16:
        *(_DWORD *)(v3 + 16) |= v15;
        return this;
      }
LABEL_15:
      *(_DWORD *)(v3 + 120) = *((_DWORD *)a2 + 30);
      goto LABEL_16;
    }
LABEL_30:
    *(_DWORD *)(v3 + 116) = *((_DWORD *)a2 + 29);
    if ( (v15 & 0x10) == 0 )
      goto LABEL_16;
    goto LABEL_15;
  }
  return this;
}