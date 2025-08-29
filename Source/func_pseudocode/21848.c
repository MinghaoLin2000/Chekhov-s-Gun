__ZN12ObjConverter8parseObjERNSt3__113basic_istreamIcNS0_11char_traitsIcEEEE
void __fastcall ObjConverter::parseObj(ObjConverter *a1, __int64 a2)
{
  std::string::size_type size; // x8
  unsigned __int16 *v6; // x8
  __int64 v7; // x8
  int v8; // w9
  int v10; // w9
  int v11; // w8
  void *__p[2]; // [xsp+0h] [xbp-1B0h] BYREF
  char v14; // [xsp+17h] [xbp-199h]
  void *v15; // [xsp+18h] [xbp-198h] BYREF
  __int64 v16; // [xsp+20h] [xbp-190h]
  __int64 v17; // [xsp+28h] [xbp-188h]
  _QWORD v18[2]; // [xsp+30h] [xbp-180h] BYREF
  _QWORD v19[8]; // [xsp+40h] [xbp-170h] BYREF
  std::string v20; // [xsp+80h] [xbp-130h] BYREF
  __int64 v21; // [xsp+A8h] [xbp-108h] BYREF
  std::string __str; // [xsp+140h] [xbp-70h] BYREF

  memset(&__str, 0, sizeof(__str));
  sub_100005108(v18);
  while ( (unsigned int)sub_10000E9C8(a2, &__str) )
  {
    size = HIBYTE(__str.__r_.__value_.__r.__words[2]);
    if ( (__str.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) != 0LL )
      size = __str.__r_.__value_.__l.__size_;
    if ( size )
    {
      std::ios_base::clear((std::ios_base *)((char *)v18 + *(_QWORD *)(v18[0] - 24LL)), 0);
      std::string::operator=(&v20, &__str);
      sub_10000736C(v19);
      v15 = 0LL;
      v16 = 0LL;
      v17 = 0LL;
      sub_1000052A0(v18, &v15);
      if ( SHIBYTE(v17) < 0 )
      {
        v7 = v16;
        if ( v16 == 1 && *(_BYTE *)v15 == 118 )
        {
LABEL_48:
          ObjConverter::addVertex(a1, v18);
          goto LABEL_52;
        }
        if ( v16 == 2 )
        {
          if ( *(_WORD *)v15 == 29814 )
            goto LABEL_43;
          v7 = v16;
          if ( *(_WORD *)v15 == 28278 )
            goto LABEL_42;
        }
        if ( v7 == 1 )
        {
          v8 = *(unsigned __int8 *)v15;
          if ( v8 == 102 )
            goto LABEL_44;
          v7 = v16;
          if ( v16 == 1 && (v8 | 8) == 0x6F )
            goto LABEL_49;
        }
        if ( v7 != 6 )
          goto LABEL_52;
        v6 = (unsigned __int16 *)v15;
        if ( *(_DWORD *)v15 == 1835365237 && *((_WORD *)v15 + 2) == 27764 )
        {
LABEL_45:
          sub_10000EDA0(__p, v18);
          ObjConverter::setMaterial(a1, __p);
          goto LABEL_50;
        }
        if ( v16 != 6 )
          goto LABEL_52;
        goto LABEL_30;
      }
      switch ( HIBYTE(v17) )
      {
        case 1u:
          if ( (unsigned __int8)v15 <= 0x6Eu )
          {
            if ( (unsigned __int8)v15 == 102 )
            {
LABEL_44:
              ObjConverter::addFace(a1, v18);
              goto LABEL_52;
            }
            if ( (unsigned __int8)v15 != 103 )
              goto LABEL_52;
LABEL_49:
            sub_10000EDA0(__p, v18);
            ObjConverter::setGroup((__int64)a1, (__int64)__p);
LABEL_50:
            if ( v14 < 0 )
              operator delete(__p[0]);
            goto LABEL_52;
          }
          if ( (unsigned __int8)v15 == 111 )
            goto LABEL_49;
          if ( (unsigned __int8)v15 == 118 )
            goto LABEL_48;
LABEL_52:
          if ( SHIBYTE(v17) < 0 )
            operator delete(v15);
          break;
        case 2u:
          if ( (unsigned __int16)v15 == 29814 )
          {
LABEL_43:
            ObjConverter::addUV(a1, v18);
            goto LABEL_52;
          }
          if ( (unsigned __int16)v15 == 28278 )
          {
LABEL_42:
            ObjConverter::addNormal(a1, v18);
            goto LABEL_52;
          }
          goto LABEL_52;
        case 6u:
          if ( (_DWORD)v15 == 1835365237 && WORD2(v15) == 27764 )
            goto LABEL_45;
          v6 = (unsigned __int16 *)&v15;
LABEL_30:
          v10 = *(_DWORD *)v6;
          v11 = v6[2];
          if ( v10 == 1819047021 && v11 == 25193 )
          {
            sub_10000EDA0(__p, v18);
            ObjConverter::loadMaterialFile(a1, __p);
            goto LABEL_50;
          }
          goto LABEL_52;
      }
    }
  }
  ObjConverter::checkLastSubMaterials(a1);
  v18[0] = `VTT for'std::istringstream[0];
  *(_QWORD *)((char *)v18 + *(_QWORD *)(`VTT for'std::istringstream[0] - 24LL)) = `VTT for'std::istringstream[3];
  v19[0] = &`vtable for'std::stringbuf.~basic_stringbuf;
  if ( SHIBYTE(v20.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v20.__r_.__value_.__l.__data_);
  std::streambuf::~streambuf(v19);
  std::istream::~istream(v18, &`VTT for'std::istringstream[1]);
  std::ios::~ios(&v21);
  if ( SHIBYTE(__str.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(__str.__r_.__value_.__l.__data_);
}