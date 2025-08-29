__ZN6google8protobuf13RepeatedFieldIbE7ReserveEi
void __fastcall google::protobuf::RepeatedField<bool>::Reserve(unsigned int *a1, int a2)
{
  int v2; // w8
  google::protobuf::Arena *v4; // x21
  _QWORD *v5; // x20
  unsigned int v6; // w22
  int v7; // w8
  _QWORD *v8; // x0
  void *v9; // x0
  size_t v10; // x2
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = a1[1];
  if ( v2 >= a2 )
    return;
  if ( v2 < 1 )
  {
    v4 = (google::protobuf::Arena *)*((_QWORD *)a1 + 1);
    v5 = 0LL;
    if ( !v2 )
    {
      if ( a2 < 4 )
        goto LABEL_6;
      goto LABEL_10;
    }
  }
  else
  {
    v4 = (google::protobuf::Arena *)*((_QWORD *)a1 + 1);
    v5 = (_QWORD *)((char *)v4 - 8);
  }
  v4 = (google::protobuf::Arena *)*((_QWORD *)v4 - 1);
  if ( a2 < 4 )
  {
LABEL_6:
    v6 = 4;
    goto LABEL_13;
  }
  if ( v2 > 0x3FFFFFFF )
  {
    v6 = 0x7FFFFFFF;
    goto LABEL_13;
  }
LABEL_10:
  v7 = 2 * v2;
  if ( v7 <= a2 )
    v6 = a2;
  else
    v6 = v7;
LABEL_13:
  if ( v4 )
    v8 = (_QWORD *)sub_10003B5B0(v4);
  else
    v8 = operator new(v6 + 8LL);
  *v8 = v4;
  v9 = v8 + 1;
  a1[1] = v6;
  *((_QWORD *)a1 + 1) = v9;
  v10 = *a1;
  if ( (int)v10 >= 1 )
    memcpy(v9, v5 + 1, v10);
  if ( v5 && !*v5 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    operator delete(v5);
  }
}