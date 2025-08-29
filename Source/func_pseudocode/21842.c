__ZN12StlConverter9makeStageEv
__int64 __fastcall StlConverter::makeStage(void **this)
{
  __int64 inited; // x19
  char *v3; // x21
  size_t v4; // x22
  void **v5; // x23
  void **v6; // x1
  _OWORD *v7; // x0
  int v8; // w8
  unsigned __int64 v9; // x8
  _QWORD *v10; // x23
  _QWORD *v11; // x23
  __int64 v12; // x9
  __int64 v13; // x23
  __int64 v14; // x8
  __int64 v15; // x9
  __int64 v16; // x1
  __int64 v17; // x0
  _QWORD *v18; // x9
  __int64 v19; // x8
  char *v20; // x0
  char *v21; // x10
  __int64 v22; // t1
  __int64 *GeomPath; // x0
  __int64 *v24; // x20
  __int64 *v25; // x22
  void *v27[2]; // [xsp+0h] [xbp-D0h] BYREF
  __int64 v28; // [xsp+10h] [xbp-C0h]
  void *v29[2]; // [xsp+18h] [xbp-B8h] BYREF
  unsigned __int8 v30; // [xsp+2Fh] [xbp-A1h]
  void *__p[2]; // [xsp+30h] [xbp-A0h] BYREF
  void *v32; // [xsp+40h] [xbp-90h]
  char v33[8]; // [xsp+48h] [xbp-88h] BYREF
  void *v34; // [xsp+50h] [xbp-80h] BYREF
  char v35; // [xsp+67h] [xbp-69h]
  void *v36[2]; // [xsp+68h] [xbp-68h]
  void *v37[2]; // [xsp+78h] [xbp-58h]
  __int128 v38; // [xsp+88h] [xbp-48h]
  char v39; // [xsp+9Fh] [xbp-31h] BYREF

  if ( *((char *)this + 63) < 0 )
  {
    sub_100006E68(__p, this[5]);
  }
  else
  {
    *(_OWORD *)__p = *(_OWORD *)(this + 5);
    v32 = this[7];
  }
  fileFormatUtils::makeValidIdentifier(&v34, __p);
  v38 = 0u;
  *(_OWORD *)v37 = 0u;
  *(_OWORD *)v36 = 0u;
  if ( SHIBYTE(v32) < 0 )
    operator delete(__p[0]);
  inited = fileFormatUtils::Asset::initStage((fileFormatUtils::Asset *)v33);
  *(_DWORD *)(inited + 88) = 981668463;
  fileFormatUtils::Asset::getMaterialsPath((__int64 *)v29, (fileFormatUtils::Asset *)v33);
  v3 = (char *)operator new(0x40uLL);
  if ( (v30 & 0x80u) == 0 )
    v4 = v30;
  else
    v4 = (size_t)v29[1];
  v5 = v27;
  sub_100007F94(v27, v4 + 8, &v39);
  if ( v28 < 0 )
    v5 = (void **)v27[0];
  if ( v4 )
  {
    if ( (v30 & 0x80u) == 0 )
      v6 = v29;
    else
      v6 = (void **)v29[0];
    memmove(v5, v6, v4);
  }
  strcpy((char *)v5 + v4, "/default");
  *(_QWORD *)v3 = off_1000185F8;
  *((_DWORD *)v3 + 2) = 6;
  v7 = v3 + 16;
  if ( SHIBYTE(v28) < 0 )
  {
    sub_100006E68(v7, v27[0]);
    v8 = SHIBYTE(v28);
    *((_QWORD *)v3 + 6) = 0LL;
    *((_QWORD *)v3 + 7) = 0LL;
    *((_QWORD *)v3 + 5) = 0LL;
    *(_QWORD *)v3 = &off_100018758;
    if ( v8 < 0 )
      operator delete(v27[0]);
  }
  else
  {
    *v7 = *(_OWORD *)v27;
    *((_QWORD *)v3 + 4) = v28;
    *((_QWORD *)v3 + 6) = 0LL;
    *((_QWORD *)v3 + 7) = 0LL;
    *((_QWORD *)v3 + 5) = 0LL;
    *(_QWORD *)v3 = &off_100018758;
  }
  v9 = *(_QWORD *)(inited + 56);
  v10 = *(_QWORD **)(inited + 48);
  if ( (unsigned __int64)v10 >= v9 )
  {
    v12 = *(_QWORD *)(inited + 40);
    v13 = ((__int64)v10 - v12) >> 3;
    if ( (unsigned __int64)(v13 + 1) >> 61 )
      sub_100007480(inited + 40);
    v14 = v9 - v12;
    v15 = v14 >> 2;
    if ( v14 >> 2 <= (unsigned __int64)(v13 + 1) )
      v15 = v13 + 1;
    if ( (unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL )
      v16 = 0x1FFFFFFFFFFFFFFFLL;
    else
      v16 = v15;
    if ( v16 )
      v17 = sub_100008574(inited + 56);
    else
      v17 = 0LL;
    v18 = (_QWORD *)(v17 + 8 * v13);
    v19 = v17 + 8 * v16;
    *v18 = v3;
    v11 = v18 + 1;
    v21 = *(char **)(inited + 40);
    v20 = *(char **)(inited + 48);
    if ( v20 != v21 )
    {
      do
      {
        v22 = *((_QWORD *)v20 - 1);
        v20 -= 8;
        *--v18 = v22;
      }
      while ( v20 != v21 );
      v20 = *(char **)(inited + 40);
    }
    *(_QWORD *)(inited + 40) = v18;
    *(_QWORD *)(inited + 48) = v11;
    *(_QWORD *)(inited + 56) = v19;
    if ( v20 )
      operator delete(v20);
  }
  else
  {
    *v10 = v3;
    v11 = v10 + 1;
  }
  *(_QWORD *)(inited + 48) = v11;
  GeomPath = fileFormatUtils::Asset::getGeomPath((__int64 *)v27, (fileFormatUtils::Asset *)v33);
  v25 = (__int64 *)this[1];
  v24 = (__int64 *)this[2];
  while ( v25 != v24 )
    StlConverter::createMesh((__int64)GeomPath, (__int64)v27, *v25++, (__int64)v3, (_QWORD *)inited);
  if ( SHIBYTE(v28) < 0 )
    operator delete(v27[0]);
  if ( (char)v30 < 0 )
    operator delete(v29[0]);
  if ( SHIBYTE(v38) < 0 )
    operator delete(v37[1]);
  if ( SHIBYTE(v37[0]) < 0 )
    operator delete(v36[0]);
  if ( v35 < 0 )
    operator delete(v34);
  return inited;
}