__ZN3TSP11FeatureInfo9MergeFromERKS0_
char *__fastcall TSP::FeatureInfo::MergeFrom(char *this, const TSP::FeatureInfo *a2)
{
  __int64 v3; // x19
  __int64 v4; // x8
  int v5; // w8
  __int64 v6; // x22
  __int64 v7; // x9
  int v8; // w8
  __int64 v9; // x22
  __int64 v10; // x9
  unsigned __int64 v11; // x1
  __int64 v12; // x8
  _QWORD *v13; // x2
  __int64 vars8; // [xsp+28h] [xbp+8h]

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
  if ( (*((_BYTE *)a2 + 16) & 1) != 0 )
  {
    v11 = *((_QWORD *)a2 + 9) & 0xFFFFFFFFFFFFFFFELL;
    *(_DWORD *)(v3 + 16) |= 1u;
    v12 = *(_QWORD *)(v3 + 8);
    v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v12 & 1) != 0 )
      v13 = (_QWORD *)*v13;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (char *)google::protobuf::internal::ArenaStringPtr::Set(v3 + 72, v11, v13);
  }
  return this;
}