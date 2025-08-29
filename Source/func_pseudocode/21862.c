__ZN12ObjConverter18addInputToMaterialEN9serialize12MapInputNameERNSt3__119basic_istringstreamIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
__int64 __fastcall ObjConverter::addInputToMaterial(__int64 result, int a2, __int64 a3)
{
  int v3; // w8
  __int64 v5; // x20
  __int64 v6; // x21
  void **v7; // x22
  void **v8; // x23
  void **v9; // x24
  _OWORD *v10; // x22
  __int64 v11; // x9
  int v12; // w8
  __int64 v13; // x10
  __int64 v14; // x0
  void *v20; // [xsp+8h] [xbp-108h] BYREF
  char v21; // [xsp+1Fh] [xbp-F1h]
  void *v22; // [xsp+20h] [xbp-F0h] BYREF
  char v23; // [xsp+37h] [xbp-D9h]
  void *v24[2]; // [xsp+38h] [xbp-D8h] BYREF
  char v25; // [xsp+4Fh] [xbp-C1h]
  void *__dst[2]; // [xsp+50h] [xbp-C0h] BYREF
  __int64 v27; // [xsp+60h] [xbp-B0h]
  __int128 v28; // [xsp+68h] [xbp-A8h]
  __int64 v29; // [xsp+78h] [xbp-98h]
  __int128 __p; // [xsp+80h] [xbp-90h]
  __int64 v31; // [xsp+90h] [xbp-80h]
  __int128 v32; // [xsp+98h] [xbp-78h]
  __int64 v33; // [xsp+A8h] [xbp-68h]
  __int64 v34; // [xsp+B0h] [xbp-60h]
  int v35; // [xsp+B8h] [xbp-58h]
  int v36; // [xsp+C0h] [xbp-50h] BYREF
  char v37; // [xsp+C7h] [xbp-49h] BYREF
  int *v38; // [xsp+C8h] [xbp-48h] BYREF

  v36 = a2;
  v3 = *(_DWORD *)(result + 212);
  if ( v3 != -1 )
  {
    v5 = *(_QWORD *)(result + 160) + 48LL * v3;
    if ( (fileFormatUtils::Material::hasInput(v5) & 1) == 0 )
    {
      sub_100009C90((int)v24, (char *)&unk_100017422);
      sub_100009C90((int)&v22, (char *)&unk_100017422);
      sub_100009C90((int)&v20, "st");
      sub_100010BF8(__dst);
      v38 = &v36;
      v6 = sub_100011BD8(v5, &v36, &std::piecewise_construct, &v38, &v37);
      v7 = (void **)(v6 + 40);
      if ( *(char *)(v6 + 63) < 0 )
        operator delete(*v7);
      *(_QWORD *)(v6 + 56) = v27;
      *(_OWORD *)v7 = *(_OWORD *)__dst;
      HIBYTE(v27) = 0;
      LOBYTE(__dst[0]) = 0;
      v8 = (void **)(v6 + 64);
      if ( *(char *)(v6 + 87) < 0 )
        operator delete(*v8);
      *(_QWORD *)(v6 + 80) = v29;
      *(_OWORD *)v8 = v28;
      HIBYTE(v29) = 0;
      LOBYTE(v28) = 0;
      v9 = (void **)(v6 + 88);
      if ( *(char *)(v6 + 111) < 0 )
        operator delete(*v9);
      *(_QWORD *)(v6 + 104) = v31;
      *(_OWORD *)v9 = __p;
      HIBYTE(v31) = 0;
      LOBYTE(__p) = 0;
      v10 = (_OWORD *)(v6 + 112);
      if ( *(char *)(v6 + 135) < 0 )
      {
        operator delete(*(void **)(v6 + 112));
        v12 = SHIBYTE(v31);
        *v10 = v32;
        v13 = v34;
        *(_QWORD *)(v6 + 128) = v33;
        HIBYTE(v33) = 0;
        LOBYTE(v32) = 0;
        *(_QWORD *)(v6 + 136) = v13;
        *(_DWORD *)(v6 + 144) = v35;
        if ( v12 < 0 )
          operator delete((void *)__p);
      }
      else
      {
        *v10 = v32;
        v11 = v34;
        *(_QWORD *)(v6 + 128) = v33;
        HIBYTE(v33) = 0;
        LOBYTE(v32) = 0;
        *(_QWORD *)(v6 + 136) = v11;
        *(_DWORD *)(v6 + 144) = v35;
      }
      if ( SHIBYTE(v29) < 0 )
        operator delete((void *)v28);
      if ( SHIBYTE(v27) < 0 )
        operator delete(__dst[0]);
      if ( v21 < 0 )
        operator delete(v20);
      if ( v23 < 0 )
        operator delete(v22);
      if ( v25 < 0 )
        operator delete(v24[0]);
    }
    __dst[0] = &v36;
    v14 = sub_100011BD8(v5, &v36, &std::piecewise_construct, __dst, v24);
    __asm { FMOV            V0.2S, #1.0 }
    *(_QWORD *)(v14 + 136) = _D0;
    *(_DWORD *)(v14 + 144) = 1065353216;
    std::istream::operator>>(a3);
    std::istream::operator>>(a3);
    return std::istream::operator>>(a3);
  }
  return result;
}