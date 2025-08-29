__ZN6google8protobuf14MessageOptions9MergeFromERKS1_
__int64 __fastcall google::protobuf::MessageOptions::MergeFrom(
        google::protobuf::MessageOptions *this,
        const google::protobuf::MessageOptions *a2)
{
  __int64 result; // x0
  __int64 v5; // x8
  __int64 v6; // x21
  __int64 v7; // x23
  __int64 v8; // x0
  int *v9; // x8
  int v10; // w10
  int v11; // w9
  int v12; // w8

  result = google::protobuf::internal::ExtensionSet::MergeFrom(
             (google::protobuf::MessageOptions *)((char *)this + 16),
             (const google::protobuf::MessageOptions *)((char *)a2 + 16));
  v5 = *((_QWORD *)a2 + 1);
  if ( (v5 & 1) != 0 )
    result = sub_10003A25C((char *)this + 8, (v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v6 = *((unsigned int *)a2 + 14);
  if ( (_DWORD)v6 )
  {
    v7 = *((_QWORD *)a2 + 8) + 8LL;
    v8 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
           (google::protobuf::MessageOptions *)((char *)this + 48),
           *((_DWORD *)a2 + 14));
    result = sub_1000B9420(
               (char *)this + 48,
               v8,
               v7,
               v6,
               (unsigned int)(**((_DWORD **)this + 8) - *((_DWORD *)this + 14)));
    v9 = (int *)*((_QWORD *)this + 8);
    v10 = *v9;
    v11 = *((_DWORD *)this + 14) + v6;
    *((_DWORD *)this + 14) = v11;
    if ( v10 < v11 )
      *v9 = v11;
  }
  v12 = *((_DWORD *)a2 + 10);
  if ( (v12 & 0xF) != 0 )
  {
    if ( (v12 & 1) != 0 )
    {
      *((_BYTE *)this + 72) = *((_BYTE *)a2 + 72);
      if ( (v12 & 2) == 0 )
      {
LABEL_9:
        if ( (v12 & 4) == 0 )
          goto LABEL_10;
        goto LABEL_16;
      }
    }
    else if ( (v12 & 2) == 0 )
    {
      goto LABEL_9;
    }
    *((_BYTE *)this + 73) = *((_BYTE *)a2 + 73);
    if ( (v12 & 4) == 0 )
    {
LABEL_10:
      if ( (v12 & 8) == 0 )
      {
LABEL_12:
        *((_DWORD *)this + 10) |= v12;
        return result;
      }
LABEL_11:
      *((_BYTE *)this + 75) = *((_BYTE *)a2 + 75);
      goto LABEL_12;
    }
LABEL_16:
    *((_BYTE *)this + 74) = *((_BYTE *)a2 + 74);
    if ( (v12 & 8) == 0 )
      goto LABEL_12;
    goto LABEL_11;
  }
  return result;
}