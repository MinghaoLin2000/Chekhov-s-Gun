__ZN12ObjConverter9makeStageEv
_QWORD *__fastcall ObjConverter::makeStage(ObjConverter *this)
{
  fileFormatUtils::Asset *v2; // x21
  _QWORD *inited; // x19
  fileFormatUtils::Material *v4; // x22
  fileFormatUtils::Material *v5; // x26
  char **v6; // x23
  __int64 SerializeMaterial; // x0
  __int64 v8; // x25
  unsigned __int64 v9; // x8
  __int64 *v10; // x27
  _QWORD *v11; // x27
  __int64 v12; // x27
  __int64 v13; // x8
  __int64 v14; // x9
  __int64 v15; // x1
  __int64 v16; // x0
  __int64 *v17; // x9
  char *v18; // x8
  char *v19; // x10
  __int64 v20; // t1
  ObjConverter *v21; // x22
  ObjConverter *v22; // x9
  ObjConverter *v23; // x8
  bool v24; // zf
  void *__p[2]; // [xsp+0h] [xbp-A0h] BYREF
  __int64 v27; // [xsp+10h] [xbp-90h]
  void *v28[2]; // [xsp+20h] [xbp-80h] BYREF
  char v29; // [xsp+37h] [xbp-69h]
  void *v30; // [xsp+38h] [xbp-68h] BYREF
  char v31; // [xsp+4Fh] [xbp-51h]

  v2 = (ObjConverter *)((char *)this + 248);
  inited = (_QWORD *)fileFormatUtils::Asset::initStage((ObjConverter *)((char *)this + 248));
  fileFormatUtils::Asset::getMaterialsPath((__int64 *)&v30, v2);
  v4 = (fileFormatUtils::Material *)*((_QWORD *)this + 20);
  v5 = (fileFormatUtils::Material *)*((_QWORD *)this + 21);
  if ( v4 != v5 )
  {
    v6 = (char **)((char *)this + 216);
    do
    {
      SerializeMaterial = fileFormatUtils::Material::makeSerializeMaterial(v4, v2);
      v8 = SerializeMaterial;
      v10 = (__int64 *)*((_QWORD *)this + 28);
      v9 = *((_QWORD *)this + 29);
      if ( (unsigned __int64)v10 >= v9 )
      {
        v12 = ((char *)v10 - *v6) >> 3;
        if ( (unsigned __int64)(v12 + 1) >> 61 )
          sub_100007480((char *)this + 216);
        v13 = v9 - (_QWORD)*v6;
        v14 = v13 >> 2;
        if ( v13 >> 2 <= (unsigned __int64)(v12 + 1) )
          v14 = v12 + 1;
        if ( (unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL )
          v15 = 0x1FFFFFFFFFFFFFFFLL;
        else
          v15 = v14;
        if ( v15 )
          v16 = sub_100008574((char *)this + 232);
        else
          v16 = 0LL;
        v17 = (__int64 *)(v16 + 8 * v12);
        *v17 = v8;
        v11 = v17 + 1;
        v19 = (char *)*((_QWORD *)this + 27);
        v18 = (char *)*((_QWORD *)this + 28);
        if ( v18 != v19 )
        {
          do
          {
            v20 = *((_QWORD *)v18 - 1);
            v18 -= 8;
            *--v17 = v20;
          }
          while ( v18 != v19 );
          v18 = *v6;
        }
        *((_QWORD *)this + 27) = v17;
        *((_QWORD *)this + 28) = v11;
        *((_QWORD *)this + 29) = v16 + 8 * v15;
        if ( v18 )
          operator delete(v18);
      }
      else
      {
        *v10 = SerializeMaterial;
        v11 = v10 + 1;
      }
      *((_QWORD *)this + 28) = v11;
      v4 = (fileFormatUtils::Material *)((char *)v4 + 48);
    }
    while ( v4 != v5 );
  }
  fileFormatUtils::Asset::getGeomPath((__int64 *)v28, v2);
  v21 = (ObjConverter *)*((_QWORD *)this + 13);
  if ( v21 != (ObjConverter *)((char *)this + 112) )
  {
    do
    {
      if ( *((char *)v21 + 55) < 0 )
      {
        sub_100006E68(__p, *((void **)v21 + 4));
      }
      else
      {
        *(_OWORD *)__p = *((_OWORD *)v21 + 2);
        v27 = *((_QWORD *)v21 + 6);
      }
      ObjConverter::createMesh(this, (__int64)v28, *((__int64 ***)v21 + 7), (__int64)__p, inited);
      if ( SHIBYTE(v27) < 0 )
        operator delete(__p[0]);
      v22 = (ObjConverter *)*((_QWORD *)v21 + 1);
      if ( v22 )
      {
        do
        {
          v23 = v22;
          v22 = *(ObjConverter **)v22;
        }
        while ( v22 );
      }
      else
      {
        do
        {
          v23 = (ObjConverter *)*((_QWORD *)v21 + 2);
          v24 = *(_QWORD *)v23 == (_QWORD)v21;
          v21 = v23;
        }
        while ( !v24 );
      }
      v21 = v23;
    }
    while ( v23 != (ObjConverter *)((char *)this + 112) );
  }
  if ( v29 < 0 )
    operator delete(v28[0]);
  if ( v31 < 0 )
    operator delete(v30);
  return inited;
}