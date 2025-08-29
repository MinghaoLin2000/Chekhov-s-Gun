__ZN6google8protobuf15UnknownFieldSet18AddLengthDelimitedEi
_QWORD *__fastcall google::protobuf::UnknownFieldSet::AddLengthDelimited(
        google::protobuf::UnknownFieldSet *this,
        int a2)
{
  _QWORD *v4; // x20
  unsigned __int64 v5; // x8
  unsigned __int64 v6; // x10
  __int64 v7; // x21
  __int64 v8; // x22
  __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // x1
  __int64 v12; // x0
  __int64 v13; // x9
  __int64 v14; // x8
  char *v15; // x0
  char *v16; // x10

  v4 = (_QWORD *)operator new(24LL, 0x1012C40EC159624LL);
  v4[1] = 0LL;
  v4[2] = 0LL;
  *v4 = 0LL;
  v5 = *((_QWORD *)this + 2);
  v6 = *((_QWORD *)this + 1);
  if ( v6 >= v5 )
  {
    v8 = (__int64)(v6 - *(_QWORD *)this) >> 4;
    if ( (unsigned __int64)(v8 + 1) >> 60 )
      sub_100097888(this);
    v9 = v5 - *(_QWORD *)this;
    v10 = v9 >> 3;
    if ( v9 >> 3 <= (unsigned __int64)(v8 + 1) )
      v10 = v8 + 1;
    if ( (unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFF0LL )
      v11 = 0xFFFFFFFFFFFFFFFLL;
    else
      v11 = v10;
    if ( v11 )
      v12 = sub_10009A208((char *)this + 16);
    else
      v12 = 0LL;
    v13 = v12 + 16 * v8;
    v14 = v12 + 16 * v11;
    *(_DWORD *)v13 = a2;
    *(_DWORD *)(v13 + 4) = 3;
    *(_QWORD *)(v13 + 8) = v4;
    v7 = v13 + 16;
    v16 = *(char **)this;
    v15 = (char *)*((_QWORD *)this + 1);
    if ( v15 != *(char **)this )
    {
      do
      {
        *(_OWORD *)(v13 - 16) = *((_OWORD *)v15 - 1);
        v13 -= 16LL;
        v15 -= 16;
      }
      while ( v15 != v16 );
      v15 = *(char **)this;
    }
    *(_QWORD *)this = v13;
    *((_QWORD *)this + 1) = v7;
    *((_QWORD *)this + 2) = v14;
    if ( v15 )
      operator delete(v15);
  }
  else
  {
    *(_DWORD *)v6 = a2;
    *(_DWORD *)(v6 + 4) = 3;
    *(_QWORD *)(v6 + 8) = v4;
    v7 = v6 + 16;
  }
  *((_QWORD *)this + 1) = v7;
  return v4;
}