__ZN6google8protobuf13RepeatedFieldIfEC1ERKS2_
_QWORD *__fastcall google::protobuf::RepeatedField<float>::RepeatedField(_QWORD *a1, unsigned int *a2)
{
  __int64 v4; // x1
  void *v5; // x0

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = *a2;
  if ( (_DWORD)v4 )
  {
    google::protobuf::RepeatedField<float>::Reserve(a1, v4);
    v5 = (void *)a1[1];
    *(_DWORD *)a1 += *a2;
    memcpy(v5, *((const void **)a2 + 1), 4LL * (int)*a2);
  }
  return a1;
}