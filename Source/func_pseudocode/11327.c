__ZN6google8protobuf19UninterpretedOption9MergeFromERKS1_
__int64 __fastcall google::protobuf::UninterpretedOption::MergeFrom(
        __int64 this,
        const google::protobuf::UninterpretedOption *a2)
{
  __int64 v3; // x19
  __int64 v4; // x8
  __int64 v5; // x21
  __int64 v6; // x23
  __int64 v7; // x0
  int *v8; // x8
  int v9; // w10
  int v10; // w9
  int v11; // w21
  unsigned __int64 v12; // x1
  __int64 v13; // x8
  _QWORD *v14; // x2
  unsigned __int64 v15; // x1
  __int64 v16; // x8
  _QWORD *v17; // x2
  unsigned __int64 v18; // x1
  __int64 v19; // x8
  _QWORD *v20; // x2

  v3 = this;
  v4 = *((_QWORD *)a2 + 1);
  if ( (v4 & 1) != 0 )
    this = sub_10003A25C(this + 8, (v4 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v5 = *((unsigned int *)a2 + 8);
  if ( (_DWORD)v5 )
  {
    v6 = *((_QWORD *)a2 + 5) + 8LL;
    v7 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
           (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 24),
           *((_DWORD *)a2 + 8));
    this = sub_1000B98A0(v3 + 24, v7, v6, v5, (unsigned int)(**(_DWORD **)(v3 + 40) - *(_DWORD *)(v3 + 32)));
    v8 = *(int **)(v3 + 40);
    v9 = *v8;
    v10 = *(_DWORD *)(v3 + 32) + v5;
    *(_DWORD *)(v3 + 32) = v10;
    if ( v9 < v10 )
      *v8 = v10;
  }
  v11 = *((_DWORD *)a2 + 4);
  if ( (v11 & 0x3F) != 0 )
  {
    if ( (v11 & 1) != 0 )
    {
      v12 = *((_QWORD *)a2 + 6) & 0xFFFFFFFFFFFFFFFELL;
      *(_DWORD *)(v3 + 16) |= 1u;
      v13 = *(_QWORD *)(v3 + 8);
      v14 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v13 & 1) != 0 )
        v14 = (_QWORD *)*v14;
      this = google::protobuf::internal::ArenaStringPtr::Set(v3 + 48, v12, v14);
      if ( (v11 & 2) == 0 )
      {
LABEL_9:
        if ( (v11 & 4) == 0 )
          goto LABEL_10;
        goto LABEL_22;
      }
    }
    else if ( (v11 & 2) == 0 )
    {
      goto LABEL_9;
    }
    v15 = *((_QWORD *)a2 + 7) & 0xFFFFFFFFFFFFFFFELL;
    *(_DWORD *)(v3 + 16) |= 2u;
    v16 = *(_QWORD *)(v3 + 8);
    v17 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v16 & 1) != 0 )
      v17 = (_QWORD *)*v17;
    this = google::protobuf::internal::ArenaStringPtr::Set(v3 + 56, v15, v17);
    if ( (v11 & 4) == 0 )
    {
LABEL_10:
      if ( (v11 & 8) == 0 )
        goto LABEL_11;
      goto LABEL_25;
    }
LABEL_22:
    v18 = *((_QWORD *)a2 + 8) & 0xFFFFFFFFFFFFFFFELL;
    *(_DWORD *)(v3 + 16) |= 4u;
    v19 = *(_QWORD *)(v3 + 8);
    v20 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v19 & 1) != 0 )
      v20 = (_QWORD *)*v20;
    this = google::protobuf::internal::ArenaStringPtr::Set(v3 + 64, v18, v20);
    if ( (v11 & 8) == 0 )
    {
LABEL_11:
      if ( (v11 & 0x10) == 0 )
        goto LABEL_12;
      goto LABEL_26;
    }
LABEL_25:
    *(_QWORD *)(v3 + 72) = *((_QWORD *)a2 + 9);
    if ( (v11 & 0x10) == 0 )
    {
LABEL_12:
      if ( (v11 & 0x20) == 0 )
      {
LABEL_14:
        *(_DWORD *)(v3 + 16) |= v11;
        return this;
      }
LABEL_13:
      *(_QWORD *)(v3 + 88) = *((_QWORD *)a2 + 11);
      goto LABEL_14;
    }
LABEL_26:
    *(_QWORD *)(v3 + 80) = *((_QWORD *)a2 + 10);
    if ( (v11 & 0x20) == 0 )
      goto LABEL_14;
    goto LABEL_13;
  }
  return this;
}