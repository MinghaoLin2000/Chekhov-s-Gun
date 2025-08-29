__ZN12ObjConverter5Group11setMaterialEi
void __fastcall ObjConverter::Group::setMaterial(ObjConverter::Group *this, int a2)
{
  __int64 i; // x8
  _QWORD *v5; // x0
  unsigned __int64 v6; // x9
  _QWORD *v7; // x20
  _QWORD *v8; // x20
  __int64 v9; // x20
  __int64 v10; // x9
  __int64 v11; // x10
  __int64 v12; // x1
  __int64 v13; // x8
  _QWORD *v14; // x9
  __int64 v15; // x8
  char *v16; // x0
  char *v17; // x10
  __int64 v18; // t1

  *((_QWORD *)this + 3) = 0LL;
  for ( i = *(_QWORD *)this; i != *((_QWORD *)this + 1); i += 8LL )
  {
    if ( *(_DWORD *)(*(_QWORD *)i + 24LL) == a2 )
    {
      *((_QWORD *)this + 3) = *(_QWORD *)i;
      return;
    }
  }
  ObjConverter::Group::removeLastSubMaterialIfEmpty(this);
  v5 = operator new(0x20uLL);
  v5[1] = 0LL;
  v5[2] = 0LL;
  *v5 = 0LL;
  *((_DWORD *)v5 + 6) = a2;
  v6 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 3) = v5;
  v7 = (_QWORD *)*((_QWORD *)this + 1);
  if ( (unsigned __int64)v7 >= v6 )
  {
    v9 = ((__int64)v7 - *(_QWORD *)this) >> 3;
    if ( (unsigned __int64)(v9 + 1) >> 61 )
      sub_100007480(this);
    v10 = v6 - *(_QWORD *)this;
    v11 = v10 >> 2;
    if ( v10 >> 2 <= (unsigned __int64)(v9 + 1) )
      v11 = v9 + 1;
    if ( (unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL )
      v12 = 0x1FFFFFFFFFFFFFFFLL;
    else
      v12 = v11;
    if ( v12 )
    {
      v13 = sub_100008574((char *)this + 16);
      v5 = (_QWORD *)*((_QWORD *)this + 3);
    }
    else
    {
      v13 = 0LL;
    }
    v14 = (_QWORD *)(v13 + 8 * v9);
    v15 = v13 + 8 * v12;
    *v14 = v5;
    v8 = v14 + 1;
    v17 = *(char **)this;
    v16 = (char *)*((_QWORD *)this + 1);
    if ( v16 != *(char **)this )
    {
      do
      {
        v18 = *((_QWORD *)v16 - 1);
        v16 -= 8;
        *--v14 = v18;
      }
      while ( v16 != v17 );
      v16 = *(char **)this;
    }
    *(_QWORD *)this = v14;
    *((_QWORD *)this + 1) = v8;
    *((_QWORD *)this + 2) = v15;
    if ( v16 )
      operator delete(v16);
  }
  else
  {
    *v7 = v5;
    v8 = v7 + 1;
  }
  *((_QWORD *)this + 1) = v8;
}