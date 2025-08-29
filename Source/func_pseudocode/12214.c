__ZN6google8protobuf15UnknownFieldSet10AddFixed32Eij
void __fastcall google::protobuf::UnknownFieldSet::AddFixed32(google::protobuf::UnknownFieldSet *this, int a2, int a3)
{
  char *v6; // x0
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // t1
  _DWORD *v9; // x10
  _DWORD *v10; // x20
  __int64 v11; // x22
  __int64 v12; // x8
  __int64 v13; // x9
  __int64 v14; // x1
  __int64 v15; // x0
  _DWORD *v16; // x9
  __int64 v17; // x8
  char *v18; // x0
  char *v19; // x10

  v8 = *((_QWORD *)this + 2);
  v6 = (char *)this + 16;
  v7 = v8;
  v9 = (_DWORD *)*((_QWORD *)v6 - 1);
  if ( (unsigned __int64)v9 >= v8 )
  {
    v11 = ((__int64)v9 - *(_QWORD *)this) >> 4;
    if ( (unsigned __int64)(v11 + 1) >> 60 )
      sub_100097888(this);
    v12 = v7 - *(_QWORD *)this;
    v13 = v12 >> 3;
    if ( v12 >> 3 <= (unsigned __int64)(v11 + 1) )
      v13 = v11 + 1;
    if ( (unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF0LL )
      v14 = 0xFFFFFFFFFFFFFFFLL;
    else
      v14 = v13;
    if ( v14 )
      v15 = sub_10009A208(v6);
    else
      v15 = 0LL;
    v16 = (_DWORD *)(v15 + 16 * v11);
    v17 = v15 + 16 * v14;
    *v16 = a2;
    v16[1] = 1;
    v16[2] = a3;
    v10 = v16 + 4;
    v19 = *(char **)this;
    v18 = (char *)*((_QWORD *)this + 1);
    if ( v18 != *(char **)this )
    {
      do
      {
        *((_OWORD *)v16 - 1) = *((_OWORD *)v18 - 1);
        v16 -= 4;
        v18 -= 16;
      }
      while ( v18 != v19 );
      v18 = *(char **)this;
    }
    *(_QWORD *)this = v16;
    *((_QWORD *)this + 1) = v10;
    *((_QWORD *)this + 2) = v17;
    if ( v18 )
      operator delete(v18);
  }
  else
  {
    *v9 = a2;
    v9[1] = 1;
    v9[2] = a3;
    v10 = v9 + 4;
  }
  *((_QWORD *)this + 1) = v10;
}