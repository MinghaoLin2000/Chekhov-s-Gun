__ZN6google8protobuf13RepeatedFieldIjE4SwapEPS2_
void __fastcall google::protobuf::RepeatedField<unsigned int>::Swap(unsigned int *a1, unsigned int *a2)
{
  void **v4; // x8
  _QWORD *v5; // x9
  _QWORD *v6; // x8
  __int64 v7; // x1
  __int64 v8; // x8
  __int64 v9; // x1
  void *v10; // x0
  unsigned __int64 v11; // x8
  void *v12; // x9
  unsigned __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x9
  void *__dst[2]; // [xsp+0h] [xbp-30h] BYREF

  if ( a1 != a2 )
  {
    v4 = (void **)(a1 + 2);
    if ( a1[1] )
      v4 = (void **)((char *)*v4 - 8);
    v5 = *v4;
    v6 = (_QWORD *)*((_QWORD *)a2 + 1);
    if ( a2[1] )
      v6 = (_QWORD *)*(v6 - 1);
    if ( v5 == v6 )
    {
      v14 = *(_QWORD *)a1;
      v15 = *((_QWORD *)a1 + 1);
      *(_OWORD *)a1 = *(_OWORD *)a2;
      *(_QWORD *)a2 = v14;
      *((_QWORD *)a2 + 1) = v15;
    }
    else
    {
      __dst[0] = 0LL;
      __dst[1] = v6;
      v7 = *a1;
      if ( (_DWORD)v7 )
      {
        google::protobuf::RepeatedField<unsigned int>::Reserve(__dst, v7);
        v8 = (int)*a1;
        LODWORD(__dst[0]) += v8;
        memcpy(__dst[1], *((const void **)a1 + 1), 4 * v8);
      }
      *a1 = 0;
      v9 = *a2;
      if ( (_DWORD)v9 )
      {
        google::protobuf::RepeatedField<unsigned int>::Reserve(a1, v9);
        v10 = (void *)*((_QWORD *)a1 + 1);
        *a1 += *a2;
        memcpy(v10, *((const void **)a2 + 1), 4LL * (int)*a2);
      }
      if ( __dst == (void **)a2 )
      {
        LODWORD(v13) = HIDWORD(__dst[0]);
      }
      else
      {
        v11 = *(_QWORD *)a2;
        v12 = (void *)*((_QWORD *)a2 + 1);
        *(_OWORD *)a2 = *(_OWORD *)__dst;
        __dst[0] = (void *)v11;
        __dst[1] = v12;
        v13 = HIDWORD(v11);
      }
      if ( (int)v13 >= 1 && !*((_QWORD *)__dst[1] - 1) )
        operator delete((char *)__dst[1] - 8);
    }
  }
}