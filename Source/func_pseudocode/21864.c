__ZN12ObjConverter20getSerializeMaterialEi
char **__fastcall ObjConverter::getSerializeMaterial(ObjConverter *this, unsigned int a2)
{
  __int64 v2; // x9
  char **v3; // x19
  char *v4; // x21
  char *v5; // x20
  size_t v6; // x22
  void **v7; // x23
  void **v8; // x1
  _OWORD *v9; // x0
  int v10; // w8
  _QWORD *v11; // x22
  _QWORD *v12; // x23
  unsigned __int64 v13; // x8
  _QWORD *v14; // x23
  __int64 v15; // x9
  __int64 v16; // x23
  __int64 v17; // x8
  __int64 v18; // x9
  __int64 v19; // x1
  __int64 v20; // x0
  _QWORD *v21; // x9
  __int64 v22; // x8
  char *v23; // x0
  char *v24; // x10
  __int64 v25; // t1
  void *__p[2]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v28; // [xsp+18h] [xbp-58h]
  void *v29[2]; // [xsp+20h] [xbp-50h] BYREF
  unsigned __int8 v30; // [xsp+37h] [xbp-39h]
  char v31; // [xsp+3Fh] [xbp-31h] BYREF

  if ( (a2 & 0x80000000) == 0 )
  {
    v2 = *((_QWORD *)this + 27);
    if ( a2 < (unsigned __int64)((*((_QWORD *)this + 28) - v2) >> 3) )
      return (char **)(v2 + 8LL * a2);
  }
  v3 = (char **)((char *)this + 240);
  if ( !*((_QWORD *)this + 30) )
  {
    v4 = (char *)this + 248;
    fileFormatUtils::Asset::getMaterialsPath((__int64 *)v29, (ObjConverter *)((char *)this + 248));
    v5 = (char *)operator new(0x40uLL);
    if ( (v30 & 0x80u) == 0 )
      v6 = v30;
    else
      v6 = (size_t)v29[1];
    v7 = __p;
    sub_100007F94(__p, v6 + 8, &v31);
    if ( v28 < 0 )
      v7 = (void **)__p[0];
    if ( v6 )
    {
      if ( (v30 & 0x80u) == 0 )
        v8 = v29;
      else
        v8 = (void **)v29[0];
      memmove(v7, v8, v6);
    }
    strcpy((char *)v7 + v6, "/default");
    *(_QWORD *)v5 = off_1000185F8;
    *((_DWORD *)v5 + 2) = 6;
    v9 = v5 + 16;
    if ( SHIBYTE(v28) < 0 )
    {
      sub_100006E68(v9, __p[0]);
      v10 = SHIBYTE(v28);
      *((_QWORD *)v5 + 6) = 0LL;
      *((_QWORD *)v5 + 7) = 0LL;
      *((_QWORD *)v5 + 5) = 0LL;
      *(_QWORD *)v5 = &off_100018758;
      *v3 = v5;
      if ( v10 < 0 )
      {
        operator delete(__p[0]);
        v5 = *v3;
      }
    }
    else
    {
      *v9 = *(_OWORD *)__p;
      *((_QWORD *)v5 + 4) = v28;
      *((_QWORD *)v5 + 6) = 0LL;
      *((_QWORD *)v5 + 7) = 0LL;
      *((_QWORD *)v5 + 5) = 0LL;
      *(_QWORD *)v5 = &off_100018758;
      *v3 = v5;
    }
    v11 = *(_QWORD **)v4;
    v12 = *(_QWORD **)(*(_QWORD *)v4 + 48LL);
    v13 = *(_QWORD *)(*(_QWORD *)v4 + 56LL);
    if ( (unsigned __int64)v12 >= v13 )
    {
      v15 = v11[5];
      v16 = ((__int64)v12 - v15) >> 3;
      if ( (unsigned __int64)(v16 + 1) >> 61 )
        sub_100007480(v11 + 5);
      v17 = v13 - v15;
      v18 = v17 >> 2;
      if ( v17 >> 2 <= (unsigned __int64)(v16 + 1) )
        v18 = v16 + 1;
      if ( (unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF8LL )
        v19 = 0x1FFFFFFFFFFFFFFFLL;
      else
        v19 = v18;
      if ( v19 )
        v20 = sub_100008574(*(_QWORD *)v4 + 56LL);
      else
        v20 = 0LL;
      v21 = (_QWORD *)(v20 + 8 * v16);
      v22 = v20 + 8 * v19;
      *v21 = v5;
      v14 = v21 + 1;
      v24 = (char *)v11[5];
      v23 = (char *)v11[6];
      if ( v23 != v24 )
      {
        do
        {
          v25 = *((_QWORD *)v23 - 1);
          v23 -= 8;
          *--v21 = v25;
        }
        while ( v23 != v24 );
        v23 = (char *)v11[5];
      }
      v11[5] = v21;
      v11[6] = v14;
      v11[7] = v22;
      if ( v23 )
        operator delete(v23);
    }
    else
    {
      *v12 = v5;
      v14 = v12 + 1;
    }
    v11[6] = v14;
    if ( (char)v30 < 0 )
      operator delete(v29[0]);
  }
  return v3;
}