__ZN3TSP21DataPropertiesEntryV19MergeFromERKS0_
char *__fastcall TSP::DataPropertiesEntryV1::MergeFrom(char *this, const TSP::DataPropertiesEntryV1 *a2)
{
  __int64 v3; // x19
  __int64 v4; // x8
  int v5; // w8
  __int64 v6; // x22
  __int64 v7; // x9
  int v8; // w21
  unsigned __int64 v9; // x1
  __int64 v10; // x8
  _QWORD *v11; // x2
  unsigned __int64 v12; // x1
  __int64 v13; // x8
  _QWORD *v14; // x2

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
  v8 = *((_DWORD *)a2 + 4);
  if ( (v8 & 0xF) != 0 )
  {
    if ( (v8 & 1) != 0 )
    {
      v9 = *((_QWORD *)a2 + 6) & 0xFFFFFFFFFFFFFFFELL;
      *(_DWORD *)(v3 + 16) |= 1u;
      v10 = *(_QWORD *)(v3 + 8);
      v11 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v10 & 1) != 0 )
        v11 = (_QWORD *)*v11;
      this = (char *)google::protobuf::internal::ArenaStringPtr::Set(v3 + 48, v9, v11);
      if ( (v8 & 2) == 0 )
      {
LABEL_8:
        if ( (v8 & 4) == 0 )
          goto LABEL_9;
        goto LABEL_19;
      }
    }
    else if ( (v8 & 2) == 0 )
    {
      goto LABEL_8;
    }
    v12 = *((_QWORD *)a2 + 7) & 0xFFFFFFFFFFFFFFFELL;
    *(_DWORD *)(v3 + 16) |= 2u;
    v13 = *(_QWORD *)(v3 + 8);
    v14 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v13 & 1) != 0 )
      v14 = (_QWORD *)*v14;
    this = (char *)google::protobuf::internal::ArenaStringPtr::Set(v3 + 56, v12, v14);
    if ( (v8 & 4) == 0 )
    {
LABEL_9:
      if ( (v8 & 8) == 0 )
      {
LABEL_11:
        *(_DWORD *)(v3 + 16) |= v8;
        return this;
      }
LABEL_10:
      *(_BYTE *)(v3 + 72) = *((_BYTE *)a2 + 72);
      goto LABEL_11;
    }
LABEL_19:
    *(_QWORD *)(v3 + 64) = *((_QWORD *)a2 + 8);
    if ( (v8 & 8) == 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  return this;
}