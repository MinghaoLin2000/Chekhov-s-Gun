__ZN12ObjConverter16addMapToMaterialEN9serialize12MapInputNameERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
void __fastcall ObjConverter::addMapToMaterial(__int64 a1, int a2, const std::string *a3)
{
  int v3; // w8
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x19
  void **v8; // x20
  void **v9; // x21
  void **v10; // x21
  _OWORD *v11; // x20
  __int64 v12; // x9
  int v13; // w8
  __int64 v14; // x10
  void *v15; // [xsp+0h] [xbp-D0h] BYREF
  char v16; // [xsp+17h] [xbp-B9h]
  void *v17[2]; // [xsp+18h] [xbp-B8h] BYREF
  char v18; // [xsp+2Fh] [xbp-A1h]
  void *__dst[2]; // [xsp+30h] [xbp-A0h] BYREF
  __int64 v20; // [xsp+40h] [xbp-90h]
  __int128 v21; // [xsp+48h] [xbp-88h]
  __int64 v22; // [xsp+58h] [xbp-78h]
  __int128 __p; // [xsp+60h] [xbp-70h]
  __int64 v24; // [xsp+70h] [xbp-60h]
  __int128 v25; // [xsp+78h] [xbp-58h]
  __int64 v26; // [xsp+88h] [xbp-48h]
  __int64 v27; // [xsp+90h] [xbp-40h]
  int v28; // [xsp+98h] [xbp-38h]
  int v29; // [xsp+A0h] [xbp-30h] BYREF
  char v30; // [xsp+A7h] [xbp-29h] BYREF
  int *v31; // [xsp+A8h] [xbp-28h] BYREF

  v29 = a2;
  v3 = *(_DWORD *)(a1 + 212);
  if ( v3 != -1 )
  {
    v5 = *(_QWORD *)(a1 + 160) + 48LL * v3;
    if ( (fileFormatUtils::Material::hasInput(v5) & 1) != 0 )
    {
      __dst[0] = &v29;
      v6 = sub_100011BD8(v5, &v29, &std::piecewise_construct, __dst, v17);
      std::string::operator=((std::string *)(v6 + 64), a3);
    }
    else
    {
      sub_100009C90((int)v17, (char *)&unk_100017422);
      sub_100009C90((int)&v15, "st");
      sub_100010BF8(__dst);
      v31 = &v29;
      v7 = sub_100011BD8(v5, &v29, &std::piecewise_construct, &v31, &v30);
      v8 = (void **)(v7 + 40);
      if ( *(char *)(v7 + 63) < 0 )
        operator delete(*v8);
      *(_QWORD *)(v7 + 56) = v20;
      *(_OWORD *)v8 = *(_OWORD *)__dst;
      HIBYTE(v20) = 0;
      LOBYTE(__dst[0]) = 0;
      v9 = (void **)(v7 + 64);
      if ( *(char *)(v7 + 87) < 0 )
        operator delete(*v9);
      *(_QWORD *)(v7 + 80) = v22;
      *(_OWORD *)v9 = v21;
      HIBYTE(v22) = 0;
      LOBYTE(v21) = 0;
      v10 = (void **)(v7 + 88);
      if ( *(char *)(v7 + 111) < 0 )
        operator delete(*v10);
      *(_QWORD *)(v7 + 104) = v24;
      *(_OWORD *)v10 = __p;
      HIBYTE(v24) = 0;
      LOBYTE(__p) = 0;
      v11 = (_OWORD *)(v7 + 112);
      if ( *(char *)(v7 + 135) < 0 )
      {
        operator delete(*(void **)(v7 + 112));
        v13 = SHIBYTE(v24);
        *v11 = v25;
        v14 = v27;
        *(_QWORD *)(v7 + 128) = v26;
        HIBYTE(v26) = 0;
        LOBYTE(v25) = 0;
        *(_QWORD *)(v7 + 136) = v14;
        *(_DWORD *)(v7 + 144) = v28;
        if ( v13 < 0 )
          operator delete((void *)__p);
      }
      else
      {
        *v11 = v25;
        v12 = v27;
        *(_QWORD *)(v7 + 128) = v26;
        HIBYTE(v26) = 0;
        LOBYTE(v25) = 0;
        *(_QWORD *)(v7 + 136) = v12;
        *(_DWORD *)(v7 + 144) = v28;
      }
      if ( SHIBYTE(v22) < 0 )
        operator delete((void *)v21);
      if ( SHIBYTE(v20) < 0 )
        operator delete(__dst[0]);
      if ( v16 < 0 )
        operator delete(v15);
      if ( v18 < 0 )
        operator delete(v17[0]);
    }
  }
}