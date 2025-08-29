__ZN3TSP9FieldPath9MergeFromERKS0_
char *__fastcall TSP::FieldPath::MergeFrom(char *this, const TSP::FieldPath *a2)
{
  __int64 v3; // x20
  __int64 v4; // x8
  int v5; // w8
  __int64 v6; // x20
  __int64 v7; // t1
  __int64 v8; // x9
  void *v9; // x0
  const void *v10; // x1
  size_t v11; // x2
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = (__int64)this;
  v4 = *((_QWORD *)a2 + 1);
  if ( (v4 & 1) != 0 )
    this = (char *)sub_10003A25C(this + 8, (v4 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v5 = *((_DWORD *)a2 + 4);
  if ( v5 )
  {
    v7 = *(int *)(v3 + 16);
    v6 = v3 + 16;
    google::protobuf::RepeatedField<unsigned int>::Reserve(v6, (unsigned int)(v7 + v5));
    v8 = *(_QWORD *)(v6 + 8);
    *(_DWORD *)v6 += *((_DWORD *)a2 + 4);
    v9 = (void *)(v8 + 4 * v7);
    v10 = (const void *)*((_QWORD *)a2 + 3);
    v11 = 4LL * *((int *)a2 + 4);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (char *)memcpy(v9, v10, v11);
  }
  return this;
}