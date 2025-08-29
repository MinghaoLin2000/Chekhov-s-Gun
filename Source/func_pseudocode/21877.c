__ZN15fileFormatUtils8Material26_addMapToSerializeMaterialEN9serialize12MapInputNameEPNS1_3MatEPNS1_5StageE
void __fastcall fileFormatUtils::Material::_addMapToSerializeMaterial(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // x10
  __int64 v5; // x9
  int v6; // w11
  bool v7; // cc
  __int64 *v8; // x11
  __int64 v9; // x21
  _QWORD *v10; // x0
  char *v11; // x9
  void *v12; // x8
  unsigned __int64 v13; // x11
  std::string *v14; // x12
  char *v15; // x20
  __int64 v16; // x8
  serialize::Prim *Shader; // x0
  void *__p[2]; // [xsp+0h] [xbp-80h] BYREF
  __int64 v19; // [xsp+10h] [xbp-70h]
  std::string __str; // [xsp+20h] [xbp-60h] BYREF
  void *v21[2]; // [xsp+40h] [xbp-40h] BYREF
  unsigned __int8 v22; // [xsp+57h] [xbp-29h] BYREF
  unsigned int v23; // [xsp+5Ch] [xbp-24h] BYREF

  v23 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v5 = a1 + 8;
    do
    {
      v6 = *(_DWORD *)(v3 + 32);
      v7 = v6 < a2;
      if ( v6 >= a2 )
        v8 = (__int64 *)v3;
      else
        v8 = (__int64 *)(v3 + 8);
      if ( !v7 )
        v5 = v3;
      v3 = *v8;
    }
    while ( *v8 );
    if ( v5 != a1 + 8 && *(_DWORD *)(v5 + 32) <= a2 )
    {
      v21[0] = &v23;
      v9 = sub_100011BD8(a1, &v23, &std::piecewise_construct, v21, &__str);
      v10 = sub_100013B1C(v21, v23);
      v11 = (char *)(v9 + 63);
      if ( *(char *)(v9 + 63) < 0 )
        v12 = *(void **)(v9 + 48);
      else
        v12 = (void *)*(unsigned __int8 *)(v9 + 63);
      v13 = v22;
      if ( (v22 & 0x80u) != 0 )
        v13 = (unsigned __int64)v21[1];
      if ( v12 == (void *)v13 )
        v14 = (std::string *)(v9 + 40);
      else
        v14 = (std::string *)v21;
      if ( v12 != (void *)v13 )
        v11 = (char *)&v22;
      if ( *v11 < 0 )
        v10 = (_QWORD *)sub_100006E68(&__str, v14->__r_.__value_.__l.__data_);
      else
        __str = *v14;
      if ( *(char *)(v9 + 87) < 0 )
      {
        if ( *(_QWORD *)(v9 + 72) )
        {
LABEL_26:
          if ( *(char *)(a3 + 39) < 0 )
          {
            v10 = (_QWORD *)sub_100006E68(__p, *(void **)(a3 + 16));
          }
          else
          {
            *(_OWORD *)__p = *(_OWORD *)(a3 + 16);
            v19 = *(_QWORD *)(a3 + 32);
          }
          Shader = (serialize::Prim *)fileFormatUtils::Material::_makeShader(v10, __p, v9 + 40, v23, &__str);
          serialize::Prim::addChild((serialize::Prim *)a3, Shader);
          if ( SHIBYTE(v19) < 0 )
            operator delete(__p[0]);
          goto LABEL_33;
        }
      }
      else if ( *(_BYTE *)(v9 + 87) )
      {
        goto LABEL_26;
      }
      v15 = (char *)operator new(0x68uLL);
      sub_100009AD4(v15, v23);
      v16 = *(_QWORD *)(v9 + 136);
      *((_DWORD *)v15 + 19) = *(_DWORD *)(v9 + 144);
      *(_QWORD *)(v15 + 68) = v16;
      std::string::operator=((std::string *)(v15 + 80), &__str);
      serialize::Prim::addChild((serialize::Prim *)a3, (serialize::Prim *)v15);
LABEL_33:
      if ( SHIBYTE(__str.__r_.__value_.__r.__words[2]) < 0 )
        operator delete(__str.__r_.__value_.__l.__data_);
      if ( (char)v22 < 0 )
        operator delete(v21[0]);
    }
  }
}