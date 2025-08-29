__ZN6google8protobuf9EnumValue9MergeFromERKS1_
__int64 __fastcall google::protobuf::EnumValue::MergeFrom(__int64 this, const google::protobuf::EnumValue *a2)
{
  __int64 v3; // x19
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x22
  __int64 v7; // x24
  unsigned int *v8; // x0
  int *v9; // x8
  int v10; // w10
  int v11; // w9
  unsigned __int64 v12; // x1
  _QWORD *v13; // x2
  int v14; // w8

  v3 = this;
  v4 = (_QWORD *)(this + 8);
  v5 = *((_QWORD *)a2 + 1);
  if ( (v5 & 1) != 0 )
    this = sub_10003A25C(this + 8, (v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v6 = *((unsigned int *)a2 + 6);
  if ( (_DWORD)v6 )
  {
    v7 = *((_QWORD *)a2 + 4) + 8LL;
    v8 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
           (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 16),
           *((_DWORD *)a2 + 6));
    this = sub_1000CC380(v3 + 16, v8, v7, v6, (unsigned int)(**(_DWORD **)(v3 + 32) - *(_DWORD *)(v3 + 24)));
    v9 = *(int **)(v3 + 32);
    v10 = *v9;
    v11 = *(_DWORD *)(v3 + 24) + v6;
    *(_DWORD *)(v3 + 24) = v11;
    if ( v10 < v11 )
      *v9 = v11;
  }
  v12 = *((_QWORD *)a2 + 5) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(char *)(v12 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v12 + 8) )
      goto LABEL_13;
  }
  else if ( !*(_BYTE *)(v12 + 23) )
  {
    goto LABEL_13;
  }
  v13 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
  if ( (*v4 & 1) != 0 )
    v13 = (_QWORD *)*v13;
  this = google::protobuf::internal::ArenaStringPtr::Set(v3 + 40, v12, v13);
LABEL_13:
  v14 = *((_DWORD *)a2 + 12);
  if ( v14 )
    *(_DWORD *)(v3 + 48) = v14;
  return this;
}