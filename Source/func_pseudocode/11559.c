__ZN6google8protobuf3Api9MergeFromERKS1_
__int64 __fastcall google::protobuf::Api::MergeFrom(__int64 this, const google::protobuf::Api *a2)
{
  __int64 v3; // x19
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
  unsigned __int64 v24; // x1
  _QWORD *v25; // x2
  unsigned __int64 v26; // x1
  _QWORD *v27; // x2
  const google::protobuf::SourceContext *v28; // x8
  google::protobuf::SourceContext *v29; // x0
  _QWORD *v30; // x0
  const google::protobuf::SourceContext *v31; // x1
  int v32; // w8

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
    this = sub_1000CC2C0(v3 + 16, v8, v7, v6, (unsigned int)(**(_DWORD **)(v3 + 32) - *(_DWORD *)(v3 + 24)));
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
  v18 = *((unsigned int *)a2 + 18);
  if ( (_DWORD)v18 )
  {
    v19 = *((_QWORD *)a2 + 10) + 8LL;
    v20 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
            (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 64),
            *((_DWORD *)a2 + 18));
    this = sub_1000CC440(v3 + 64, v20, v19, v18, (unsigned int)(**(_DWORD **)(v3 + 80) - *(_DWORD *)(v3 + 72)));
    v21 = *(int **)(v3 + 80);
    v22 = *v21;
    v23 = *(_DWORD *)(v3 + 72) + v18;
    *(_DWORD *)(v3 + 72) = v23;
    if ( v22 < v23 )
      *v21 = v23;
  }
  v24 = *((_QWORD *)a2 + 11) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(char *)(v24 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v24 + 8) )
      goto LABEL_19;
  }
  else if ( !*(_BYTE *)(v24 + 23) )
  {
    goto LABEL_19;
  }
  v25 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
  if ( (*v4 & 1) != 0 )
    v25 = (_QWORD *)*v25;
  this = google::protobuf::internal::ArenaStringPtr::Set(v3 + 88, v24, v25);
LABEL_19:
  v26 = *((_QWORD *)a2 + 12) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(char *)(v26 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v26 + 8) )
      goto LABEL_26;
  }
  else if ( !*(_BYTE *)(v26 + 23) )
  {
    goto LABEL_26;
  }
  v27 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
  if ( (*v4 & 1) != 0 )
    v27 = (_QWORD *)*v27;
  this = google::protobuf::internal::ArenaStringPtr::Set(v3 + 96, v26, v27);
LABEL_26:
  if ( a2 != (const google::protobuf::Api *)&google::protobuf::_Api_default_instance_ )
  {
    v28 = (const google::protobuf::SourceContext *)*((_QWORD *)a2 + 13);
    if ( v28 )
    {
      v29 = *(google::protobuf::SourceContext **)(v3 + 104);
      if ( !v29 )
      {
        v30 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
        if ( (*v4 & 1) != 0 )
          v30 = (_QWORD *)*v30;
        v29 = (google::protobuf::SourceContext *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::SourceContext>(v30);
        *(_QWORD *)(v3 + 104) = v29;
        v28 = (const google::protobuf::SourceContext *)*((_QWORD *)a2 + 13);
      }
      if ( v28 )
        v31 = v28;
      else
        v31 = (const google::protobuf::SourceContext *)&google::protobuf::_SourceContext_default_instance_;
      this = google::protobuf::SourceContext::MergeFrom(v29, v31);
    }
  }
  v32 = *((_DWORD *)a2 + 28);
  if ( v32 )
    *(_DWORD *)(v3 + 112) = v32;
  return this;
}