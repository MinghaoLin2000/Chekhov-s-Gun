__ZN6google8protobuf8internal20RepeatedPtrFieldBase14InternalExtendEi
unsigned int *__fastcall google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
        google::protobuf::internal::RepeatedPtrFieldBase *this,
        int a2)
{
  int v2; // w8
  int v3; // w10
  unsigned int *v4; // x20
  int v5; // w9
  __int64 v7; // x21
  int v8; // w8
  unsigned int v9; // w22
  unsigned int *v10; // x0
  __int64 v11; // x8

  v2 = *((_DWORD *)this + 2);
  v3 = *((_DWORD *)this + 3);
  v4 = (unsigned int *)*((_QWORD *)this + 2);
  v5 = v2 + a2;
  if ( v3 < v2 + a2 )
  {
    v7 = *(_QWORD *)this;
    v8 = 2 * v3;
    if ( 2 * v3 <= v5 )
      v8 = v5;
    if ( v8 <= 4 )
      v9 = 4;
    else
      v9 = v8;
    if ( v7 )
      v10 = (unsigned int *)sub_10003B5B0(*(google::protobuf::Arena **)this);
    else
      v10 = (unsigned int *)operator new(8LL * v9 + 8);
    *((_QWORD *)this + 2) = v10;
    *((_DWORD *)this + 3) = v9;
    if ( v4 && (v11 = *v4, (int)v11 >= 1) )
    {
      memcpy(v10 + 2, v4 + 2, 8 * v11);
      v10 = (unsigned int *)*((_QWORD *)this + 2);
      *v10 = *v4;
      if ( !v7 )
        goto LABEL_15;
    }
    else
    {
      *v10 = 0;
      if ( !v7 )
      {
LABEL_15:
        operator delete(v4);
        v10 = (unsigned int *)*((_QWORD *)this + 2);
      }
    }
    v2 = *((_DWORD *)this + 2);
    v4 = v10;
  }
  return &v4[2 * v2 + 2];
}