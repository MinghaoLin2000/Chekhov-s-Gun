__ZN3TSP10LargeArray9MergeFromERKS0_
__int64 __fastcall TSP::LargeArray::MergeFrom(__int64 this, const TSP::LargeArray *a2)
{
  __int64 v3; // x19
  __int64 v4; // x8
  __int64 v5; // x21
  __int64 v6; // x23
  __int64 v7; // x0
  int *v8; // x8
  int v9; // w10
  int v10; // w9
  __int64 v11; // x21
  __int64 v12; // x23
  __int64 v13; // x0
  int *v14; // x8
  int v15; // w10
  int v16; // w9
  int v17; // w8

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
    this = sub_100076B5C(v3 + 24, v7, v6, v5, (unsigned int)(**(_DWORD **)(v3 + 40) - *(_DWORD *)(v3 + 32)));
    v8 = *(int **)(v3 + 40);
    v9 = *v8;
    v10 = *(_DWORD *)(v3 + 32) + v5;
    *(_DWORD *)(v3 + 32) = v10;
    if ( v9 < v10 )
      *v8 = v10;
  }
  v11 = *((unsigned int *)a2 + 14);
  if ( (_DWORD)v11 )
  {
    v12 = *((_QWORD *)a2 + 8) + 8LL;
    v13 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
            (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 48),
            *((_DWORD *)a2 + 14));
    this = sub_100077328(v3 + 48, v13, v12, v11, (unsigned int)(**(_DWORD **)(v3 + 64) - *(_DWORD *)(v3 + 56)));
    v14 = *(int **)(v3 + 64);
    v15 = *v14;
    v16 = *(_DWORD *)(v3 + 56) + v11;
    *(_DWORD *)(v3 + 56) = v16;
    if ( v15 < v16 )
      *v14 = v16;
  }
  v17 = *((_DWORD *)a2 + 4);
  if ( (v17 & 0x7F) != 0 )
  {
    if ( (v17 & 1) != 0 )
    {
      *(_QWORD *)(v3 + 72) = *((_QWORD *)a2 + 9);
      if ( (v17 & 2) == 0 )
      {
LABEL_12:
        if ( (v17 & 4) == 0 )
          goto LABEL_13;
        goto LABEL_22;
      }
    }
    else if ( (v17 & 2) == 0 )
    {
      goto LABEL_12;
    }
    *(_QWORD *)(v3 + 80) = *((_QWORD *)a2 + 10);
    if ( (v17 & 4) == 0 )
    {
LABEL_13:
      if ( (v17 & 8) == 0 )
        goto LABEL_14;
      goto LABEL_23;
    }
LABEL_22:
    *(_DWORD *)(v3 + 88) = *((_DWORD *)a2 + 22);
    if ( (v17 & 8) == 0 )
    {
LABEL_14:
      if ( (v17 & 0x10) == 0 )
        goto LABEL_15;
      goto LABEL_24;
    }
LABEL_23:
    *(_BYTE *)(v3 + 92) = *((_BYTE *)a2 + 92);
    if ( (v17 & 0x10) == 0 )
    {
LABEL_15:
      if ( (v17 & 0x20) == 0 )
        goto LABEL_16;
      goto LABEL_25;
    }
LABEL_24:
    *(_BYTE *)(v3 + 93) = *((_BYTE *)a2 + 93);
    if ( (v17 & 0x20) == 0 )
    {
LABEL_16:
      if ( (v17 & 0x40) == 0 )
      {
LABEL_18:
        *(_DWORD *)(v3 + 16) |= v17;
        return this;
      }
LABEL_17:
      *(_QWORD *)(v3 + 104) = *((_QWORD *)a2 + 13);
      goto LABEL_18;
    }
LABEL_25:
    *(_QWORD *)(v3 + 96) = *((_QWORD *)a2 + 12);
    if ( (v17 & 0x40) == 0 )
      goto LABEL_18;
    goto LABEL_17;
  }
  return this;
}