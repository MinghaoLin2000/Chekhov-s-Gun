__ZN12PlyConverter9makeStageEv
serialize::Prim *__fastcall PlyConverter::makeStage(PlyConverter *this)
{
  serialize::Prim *inited; // x19
  char *v3; // x21
  size_t v4; // x22
  void **v5; // x23
  void **v6; // x1
  _OWORD *v7; // x0
  int v8; // w8
  void *v10[2]; // [xsp+0h] [xbp-D0h] BYREF
  __int64 v11; // [xsp+10h] [xbp-C0h]
  void *v12[2]; // [xsp+18h] [xbp-B8h] BYREF
  unsigned __int8 v13; // [xsp+2Fh] [xbp-A1h]
  void *__p[2]; // [xsp+30h] [xbp-A0h] BYREF
  __int64 v15; // [xsp+40h] [xbp-90h]
  _BYTE v16[8]; // [xsp+48h] [xbp-88h] BYREF
  void *v17; // [xsp+50h] [xbp-80h] BYREF
  char v18; // [xsp+67h] [xbp-69h]
  void *v19[2]; // [xsp+68h] [xbp-68h]
  void *v20[2]; // [xsp+78h] [xbp-58h]
  __int128 v21; // [xsp+88h] [xbp-48h]
  char v22; // [xsp+9Fh] [xbp-31h] BYREF

  if ( !*((_BYTE *)this + 168) )
    return 0LL;
  if ( *((char *)this + 47) < 0 )
  {
    sub_100006E68(__p, *((void **)this + 3));
  }
  else
  {
    *(_OWORD *)__p = *(_OWORD *)((char *)this + 24);
    v15 = *((_QWORD *)this + 5);
  }
  fileFormatUtils::makeValidIdentifier(&v17, __p);
  v21 = 0u;
  *(_OWORD *)v20 = 0u;
  *(_OWORD *)v19 = 0u;
  if ( SHIBYTE(v15) < 0 )
    operator delete(__p[0]);
  inited = (serialize::Prim *)fileFormatUtils::Asset::initStage((fileFormatUtils::Asset *)v16);
  fileFormatUtils::Asset::getMaterialsPath((__int64 *)v12, (fileFormatUtils::Asset *)v16);
  v3 = (char *)operator new(0x40uLL);
  if ( (v13 & 0x80u) == 0 )
    v4 = v13;
  else
    v4 = (size_t)v12[1];
  v5 = v10;
  sub_100007F94(v10, v4 + 8, &v22);
  if ( v11 < 0 )
    v5 = (void **)v10[0];
  if ( v4 )
  {
    if ( (v13 & 0x80u) == 0 )
      v6 = v12;
    else
      v6 = (void **)v12[0];
    memmove(v5, v6, v4);
  }
  strcpy((char *)v5 + v4, "/default");
  *(_QWORD *)v3 = off_1000185F8;
  *((_DWORD *)v3 + 2) = 6;
  v7 = v3 + 16;
  if ( SHIBYTE(v11) < 0 )
  {
    sub_100006E68(v7, v10[0]);
    v8 = SHIBYTE(v11);
    *((_QWORD *)v3 + 6) = 0LL;
    *((_QWORD *)v3 + 7) = 0LL;
    *((_QWORD *)v3 + 5) = 0LL;
    *(_QWORD *)v3 = &off_100018758;
    if ( v8 < 0 )
      operator delete(v10[0]);
  }
  else
  {
    *v7 = *(_OWORD *)v10;
    *((_QWORD *)v3 + 4) = v11;
    *((_QWORD *)v3 + 6) = 0LL;
    *((_QWORD *)v3 + 7) = 0LL;
    *((_QWORD *)v3 + 5) = 0LL;
    *(_QWORD *)v3 = &off_100018758;
  }
  serialize::Prim::addChild(inited, (serialize::Prim *)v3);
  fileFormatUtils::Asset::getGeomPath((__int64 *)v10, (fileFormatUtils::Asset *)v16);
  if ( *((_QWORD *)this + 19) != *((_QWORD *)this + 18) || *((_QWORD *)this + 7) == *((_QWORD *)this + 6) )
    PlyConverter::createMesh((__int64)this, (__int64)v10, (__int64)v3, inited);
  else
    PlyConverter::createPointCloud(this, (__int64)v10, (__int64)v3, inited);
  if ( SHIBYTE(v11) < 0 )
    operator delete(v10[0]);
  if ( (char)v13 < 0 )
    operator delete(v12[0]);
  if ( SHIBYTE(v21) < 0 )
    operator delete(v20[1]);
  if ( SHIBYTE(v20[0]) < 0 )
    operator delete(v19[0]);
  if ( v18 < 0 )
    operator delete(v17);
  return inited;
}