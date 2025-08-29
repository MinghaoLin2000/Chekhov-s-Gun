__ZN6google8protobuf12FieldOptions9MergeFromERKS1_
__int64 __fastcall google::protobuf::FieldOptions::MergeFrom(
        google::protobuf::FieldOptions *this,
        const google::protobuf::FieldOptions *a2)
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
             (google::protobuf::FieldOptions *)((char *)this + 16),
             (const google::protobuf::FieldOptions *)((char *)a2 + 16));
  v5 = *((_QWORD *)a2 + 1);
  if ( (v5 & 1) != 0 )
    result = sub_10003A25C((char *)this + 8, (v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v6 = *((unsigned int *)a2 + 14);
  if ( (_DWORD)v6 )
  {
    v7 = *((_QWORD *)a2 + 8) + 8LL;
    v8 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
           (google::protobuf::FieldOptions *)((char *)this + 48),
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
  if ( (v12 & 0x3F) != 0 )
  {
    if ( (v12 & 1) != 0 )
    {
      *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
      if ( (v12 & 2) == 0 )
      {
LABEL_9:
        if ( (v12 & 4) == 0 )
          goto LABEL_10;
        goto LABEL_18;
      }
    }
    else if ( (v12 & 2) == 0 )
    {
      goto LABEL_9;
    }
    *((_BYTE *)this + 76) = *((_BYTE *)a2 + 76);
    if ( (v12 & 4) == 0 )
    {
LABEL_10:
      if ( (v12 & 8) == 0 )
        goto LABEL_11;
      goto LABEL_19;
    }
LABEL_18:
    *((_BYTE *)this + 77) = *((_BYTE *)a2 + 77);
    if ( (v12 & 8) == 0 )
    {
LABEL_11:
      if ( (v12 & 0x10) == 0 )
        goto LABEL_12;
      goto LABEL_20;
    }
LABEL_19:
    *((_BYTE *)this + 78) = *((_BYTE *)a2 + 78);
    if ( (v12 & 0x10) == 0 )
    {
LABEL_12:
      if ( (v12 & 0x20) == 0 )
      {
LABEL_14:
        *((_DWORD *)this + 10) |= v12;
        return result;
      }
LABEL_13:
      *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
      goto LABEL_14;
    }
LABEL_20:
    *((_BYTE *)this + 79) = *((_BYTE *)a2 + 79);
    if ( (v12 & 0x20) == 0 )
      goto LABEL_14;
    goto LABEL_13;
  }
  return result;
}