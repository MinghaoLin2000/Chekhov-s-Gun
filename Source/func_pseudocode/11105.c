__ZN6google8protobuf12OneofOptions9MergeFromERKS1_
__int64 __fastcall google::protobuf::OneofOptions::MergeFrom(
        google::protobuf::OneofOptions *this,
        const google::protobuf::OneofOptions *a2)
{
  __int64 result; // x0
  __int64 v5; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  __int64 v8; // x0
  int *v9; // x8
  int v10; // w10
  int v11; // w9

  result = google::protobuf::internal::ExtensionSet::MergeFrom(
             (google::protobuf::OneofOptions *)((char *)this + 16),
             (const google::protobuf::OneofOptions *)((char *)a2 + 16));
  v5 = *((_QWORD *)a2 + 1);
  if ( (v5 & 1) != 0 )
    result = sub_10003A25C((char *)this + 8, (v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v6 = *((unsigned int *)a2 + 12);
  if ( (_DWORD)v6 )
  {
    v7 = *((_QWORD *)a2 + 7) + 8LL;
    v8 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
           (google::protobuf::OneofOptions *)((char *)this + 40),
           v6);
    result = sub_1000B9420(
               (char *)this + 40,
               v8,
               v7,
               v6,
               (unsigned int)(**((_DWORD **)this + 7) - *((_DWORD *)this + 12)));
    v9 = (int *)*((_QWORD *)this + 7);
    v10 = *v9;
    v11 = *((_DWORD *)this + 12) + v6;
    *((_DWORD *)this + 12) = v11;
    if ( v10 < v11 )
      *v9 = v11;
  }
  return result;
}