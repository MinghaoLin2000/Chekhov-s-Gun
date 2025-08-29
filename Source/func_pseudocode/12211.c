__ZN6google8protobuf15UnknownFieldSet19MergeFromAndDestroyEPS1_
__int64 __fastcall google::protobuf::UnknownFieldSet::MergeFromAndDestroy(
        google::protobuf::UnknownFieldSet *this,
        google::protobuf::UnknownFieldSet *a2)
{
  void *v3; // x1
  __int64 result; // x0

  v3 = (void *)*((_QWORD *)this + 1);
  if ( *(void **)this == v3 )
    result = sub_1001067B0();
  else
    result = sub_100106804((int)this, v3);
  *((_QWORD *)a2 + 1) = *(_QWORD *)a2;
  return result;
}