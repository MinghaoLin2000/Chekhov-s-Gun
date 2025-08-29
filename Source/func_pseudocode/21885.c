__ZN9serialize4Prim8addChildEPS0_
void __fastcall serialize::Prim::addChild(serialize::Prim *this, serialize::Prim *a2)
{
  char *v4; // x0
  unsigned __int64 v5; // x8
  unsigned __int64 v6; // t1
  _QWORD *v7; // x22
  _QWORD *v8; // x22
  void **v9; // x20
  __int64 v10; // x9
  __int64 v11; // x22
  __int64 v12; // x8
  __int64 v13; // x9
  __int64 v14; // x1
  __int64 v15; // x0
  _QWORD *v16; // x9
  __int64 v17; // x8
  char *v18; // x0
  char *v19; // x10
  __int64 v20; // t1

  v6 = *((_QWORD *)this + 7);
  v4 = (char *)this + 56;
  v5 = v6;
  v7 = (_QWORD *)*((_QWORD *)v4 - 1);
  if ( (unsigned __int64)v7 >= v6 )
  {
    v9 = (void **)(v4 - 16);
    v10 = *((_QWORD *)v4 - 2);
    v11 = ((__int64)v7 - v10) >> 3;
    if ( (unsigned __int64)(v11 + 1) >> 61 )
      sub_100007480(v4 - 16);
    v12 = v5 - v10;
    v13 = v12 >> 2;
    if ( v12 >> 2 <= (unsigned __int64)(v11 + 1) )
      v13 = v11 + 1;
    if ( (unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL )
      v14 = 0x1FFFFFFFFFFFFFFFLL;
    else
      v14 = v13;
    if ( v14 )
      v15 = sub_100008574(v4);
    else
      v15 = 0LL;
    v16 = (_QWORD *)(v15 + 8 * v11);
    v17 = v15 + 8 * v14;
    *v16 = a2;
    v8 = v16 + 1;
    v19 = (char *)*((_QWORD *)this + 5);
    v18 = (char *)*((_QWORD *)this + 6);
    if ( v18 != v19 )
    {
      do
      {
        v20 = *((_QWORD *)v18 - 1);
        v18 -= 8;
        *--v16 = v20;
      }
      while ( v18 != v19 );
      v18 = (char *)*v9;
    }
    *((_QWORD *)this + 5) = v16;
    *((_QWORD *)this + 6) = v8;
    *((_QWORD *)this + 7) = v17;
    if ( v18 )
      operator delete(v18);
  }
  else
  {
    *v7 = a2;
    v8 = v7 + 1;
  }
  *((_QWORD *)this + 6) = v8;
}