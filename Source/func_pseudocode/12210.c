__ZN6google8protobuf15UnknownFieldSet9MergeFromERKS1_
void **__fastcall google::protobuf::UnknownFieldSet::MergeFrom(
        void **this,
        const google::protobuf::UnknownFieldSet *a2)
{
  unsigned __int64 v2; // x8
  void **v4; // x19
  __int64 v5; // x22
  __int64 v6; // x1
  __int64 v7; // x23
  _OWORD *v8; // x26
  unsigned __int64 v9; // x8
  _OWORD *v10; // x9
  _OWORD *v11; // x26
  __int64 v12; // x27
  unsigned __int64 v13; // x9
  __int64 v14; // x8
  __int64 v15; // x0
  _OWORD *v16; // x9
  char *v17; // x8
  char *v18; // x11
  _OWORD *v19; // x10

  v2 = *((_QWORD *)a2 + 1) - *(_QWORD *)a2;
  if ( (int)(v2 >> 4) >= 1 )
  {
    v4 = this;
    v5 = (unsigned int)(v2 >> 4);
    sub_1001058BC();
    v7 = 0LL;
    do
    {
      v8 = (_OWORD *)(*(_QWORD *)a2 + 16 * v7);
      v10 = v4[1];
      v9 = (unsigned __int64)v4[2];
      if ( (unsigned __int64)v10 >= v9 )
      {
        v12 = ((char *)v10 - (_BYTE *)*v4) >> 4;
        v13 = v12 + 1;
        if ( (unsigned __int64)(v12 + 1) >> 60 )
          sub_100097888(v4);
        v14 = v9 - (_QWORD)*v4;
        if ( v14 >> 3 > v13 )
          v13 = v14 >> 3;
        if ( (unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF0LL )
          v6 = 0xFFFFFFFFFFFFFFFLL;
        else
          v6 = v13;
        if ( v6 )
          v15 = sub_10009A208(v4 + 2);
        else
          v15 = 0LL;
        v16 = (_OWORD *)(v15 + 16 * v12);
        *v16 = *v8;
        v18 = (char *)*v4;
        v17 = (char *)v4[1];
        v19 = v16;
        if ( v17 != *v4 )
        {
          do
          {
            *--v19 = *((_OWORD *)v17 - 1);
            v17 -= 16;
          }
          while ( v17 != v18 );
          v17 = (char *)*v4;
        }
        v11 = v16 + 1;
        *v4 = v19;
        v4[1] = v16 + 1;
        v4[2] = (void *)(v15 + 16 * v6);
        if ( v17 )
          operator delete(v17);
      }
      else
      {
        *v10 = *v8;
        v11 = v10 + 1;
      }
      v4[1] = v11;
      this = google::protobuf::UnknownField::DeepCopy((void **)v11 - 2, (const google::protobuf::UnknownField *)v6);
      ++v7;
    }
    while ( v7 != v5 );
  }
  return this;
}