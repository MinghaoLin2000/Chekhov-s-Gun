__ZN6google8protobuf4Enum9MergeFromERKS1_
__int64 __fastcall google::protobuf::Enum::MergeFrom(__int64 this, const google::protobuf::Enum *a2)
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
  __int64 v12; // x22
  __int64 v13; // x24
  unsigned int *v14; // x0
  int *v15; // x8
  int v16; // w10
  int v17; // w9
  unsigned __int64 v18; // x1
  _QWORD *v19; // x2
  const google::protobuf::SourceContext *v20; // x8
  google::protobuf::SourceContext *v21; // x0
  _QWORD *v22; // x0
  const google::protobuf::SourceContext *v23; // x1
  int v24; // w8

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
    this = sub_1000F7998(v3 + 16, v8, v7, v6, (unsigned int)(**(_DWORD **)(v3 + 32) - *(_DWORD *)(v3 + 24)));
    v9 = *(int **)(v3 + 32);
    v10 = *v9;
    v11 = *(_DWORD *)(v3 + 24) + v6;
    *(_DWORD *)(v3 + 24) = v11;
    if ( v10 < v11 )
      *v9 = v11;
  }
  v12 = *((unsigned int *)a2 + 12);
  if ( (_DWORD)v12 )
  {
    v13 = *((_QWORD *)a2 + 7) + 8LL;
    v14 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
            (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 40),
            *((_DWORD *)a2 + 12));
    this = sub_1000CC380(v3 + 40, v14, v13, v12, (unsigned int)(**(_DWORD **)(v3 + 56) - *(_DWORD *)(v3 + 48)));
    v15 = *(int **)(v3 + 56);
    v16 = *v15;
    v17 = *(_DWORD *)(v3 + 48) + v12;
    *(_DWORD *)(v3 + 48) = v17;
    if ( v16 < v17 )
      *v15 = v17;
  }
  v18 = *((_QWORD *)a2 + 8) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(char *)(v18 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v18 + 8) )
      goto LABEL_16;
  }
  else if ( !*(_BYTE *)(v18 + 23) )
  {
    goto LABEL_16;
  }
  v19 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
  if ( (*v4 & 1) != 0 )
    v19 = (_QWORD *)*v19;
  this = google::protobuf::internal::ArenaStringPtr::Set(v3 + 64, v18, v19);
LABEL_16:
  if ( a2 != (const google::protobuf::Enum *)&google::protobuf::_Enum_default_instance_ )
  {
    v20 = (const google::protobuf::SourceContext *)*((_QWORD *)a2 + 9);
    if ( v20 )
    {
      v21 = *(google::protobuf::SourceContext **)(v3 + 72);
      if ( !v21 )
      {
        v22 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
        if ( (*v4 & 1) != 0 )
          v22 = (_QWORD *)*v22;
        v21 = (google::protobuf::SourceContext *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::SourceContext>(v22);
        *(_QWORD *)(v3 + 72) = v21;
        v20 = (const google::protobuf::SourceContext *)*((_QWORD *)a2 + 9);
      }
      if ( v20 )
        v23 = v20;
      else
        v23 = (const google::protobuf::SourceContext *)&google::protobuf::_SourceContext_default_instance_;
      this = google::protobuf::SourceContext::MergeFrom(v21, v23);
    }
  }
  v24 = *((_DWORD *)a2 + 20);
  if ( v24 )
    *(_DWORD *)(v3 + 80) = v24;
  return this;
}