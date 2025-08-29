__ZN12ObjConverter8parseMtlERNSt3__113basic_istreamIcNS0_11char_traitsIcEEEE
void __fastcall ObjConverter::parseMtl(__int64 a1, __int64 a2)
{
  std::string::size_type size; // x8
  __int64 v5; // x8
  _WORD *v10; // x8
  __int64 v14; // x1
  void *__p[2]; // [xsp+0h] [xbp-1B0h] BYREF
  char v17; // [xsp+17h] [xbp-199h]
  void *v18; // [xsp+18h] [xbp-198h] BYREF
  __int64 v19; // [xsp+20h] [xbp-190h]
  __int64 v20; // [xsp+28h] [xbp-188h]
  _QWORD v21[2]; // [xsp+30h] [xbp-180h] BYREF
  _QWORD v22[8]; // [xsp+40h] [xbp-170h] BYREF
  std::string v23; // [xsp+80h] [xbp-130h] BYREF
  __int64 v24; // [xsp+A8h] [xbp-108h] BYREF
  std::string __str; // [xsp+140h] [xbp-70h] BYREF

  memset(&__str, 0, sizeof(__str));
  sub_100005108(v21);
  while ( (unsigned int)sub_10000E9C8(a2, &__str) )
  {
    size = HIBYTE(__str.__r_.__value_.__r.__words[2]);
    if ( (__str.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) != 0LL )
      size = __str.__r_.__value_.__l.__size_;
    if ( size )
    {
      std::ios_base::clear((std::ios_base *)((char *)v21 + *(_QWORD *)(v21[0] - 24LL)), 0);
      std::string::operator=(&v23, &__str);
      sub_10000736C(v22);
      v18 = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      sub_1000052A0(v21, &v18);
      if ( (SHIBYTE(v20) & 0x80000000) == 0 )
      {
        switch ( HIBYTE(v20) )
        {
          case 1:
            goto LABEL_77;
          case 2:
            goto LABEL_8;
          case 4:
            if ( (_DWORD)v18 == 1886221666 )
              goto LABEL_72;
            if ( HIBYTE(v20) == 1 )
              goto LABEL_77;
            if ( HIBYTE(v20) != 2 )
              goto LABEL_88;
LABEL_8:
            if ( (unsigned __int16)v18 == 25675 )
              goto LABEL_73;
            if ( HIBYTE(v20) == 1 )
            {
LABEL_77:
              if ( (unsigned __int8)v18 != 100 )
                goto LABEL_88;
              goto LABEL_78;
            }
LABEL_83:
            if ( HIBYTE(v20) != 2 )
              goto LABEL_88;
LABEL_84:
            if ( (unsigned __int16)v18 == 28513 )
              goto LABEL_99;
LABEL_85:
            if ( HIBYTE(v20) != 2 )
              goto LABEL_88;
            v10 = &v18;
            break;
          case 5:
LABEL_79:
            if ( (_DWORD)v18 == 1601200493 && BYTE4(v18) == 100 )
              goto LABEL_94;
            goto LABEL_83;
          case 6:
            if ( (_DWORD)v18 == 1836541294 && WORD2(v18) == 27764 )
              goto LABEL_74;
LABEL_60:
            if ( (_DWORD)v18 != 1601200493 || WORD2(v18) != 25675 )
            {
              switch ( HIBYTE(v20) )
              {
                case 1:
                  goto LABEL_77;
                case 2:
                  goto LABEL_84;
                case 5:
                  goto LABEL_79;
                case 6:
                  if ( (_DWORD)v18 != 1601200493 || WORD2(v18) != 28513 )
                    goto LABEL_85;
                  goto LABEL_70;
                default:
                  goto LABEL_88;
              }
            }
            goto LABEL_75;
          case 8:
            if ( v18 != (void *)0x706D75625F70616DLL )
            {
              switch ( HIBYTE(v20) )
              {
                case 1:
                  goto LABEL_77;
                case 2:
                  goto LABEL_8;
                case 5:
                  goto LABEL_79;
                case 6:
                  goto LABEL_60;
                default:
                  goto LABEL_88;
              }
            }
            goto LABEL_72;
          default:
            goto LABEL_88;
        }
LABEL_87:
        if ( *v10 == 25931 )
        {
          v14 = 3LL;
          goto LABEL_103;
        }
        goto LABEL_88;
      }
      v5 = v19;
      if ( v19 == 4 )
      {
        if ( *(_DWORD *)v18 == 1886221666 )
          goto LABEL_72;
        v5 = v19;
      }
      else if ( v19 == 6 && *(_DWORD *)v18 == 1836541294 && *((_WORD *)v18 + 2) == 27764 )
      {
LABEL_74:
        sub_10000EDA0(__p, v21);
        ObjConverter::updateMaterial(a1, (__int64)__p);
        goto LABEL_95;
      }
      if ( v5 == 8 )
      {
        if ( *(_QWORD *)v18 == 0x706D75625F70616DLL )
        {
LABEL_72:
          sub_10000EDA0(__p, v21);
          ObjConverter::addMapToMaterial(a1, 0LL, __p);
          goto LABEL_95;
        }
        v5 = v19;
      }
      if ( v5 == 2 )
      {
        if ( *(_WORD *)v18 == 25675 )
        {
LABEL_73:
          v14 = 1LL;
LABEL_103:
          ObjConverter::addInputToMaterial(a1, v14, v21);
          goto LABEL_104;
        }
        v5 = v19;
      }
      if ( v5 == 6 )
      {
        if ( *(_DWORD *)v18 == 1601200493 && *((_WORD *)v18 + 2) == 25675 )
        {
LABEL_75:
          sub_10000EDA0(__p, v21);
          ObjConverter::addMapToMaterial(a1, 1LL, __p);
          goto LABEL_95;
        }
        v5 = v19;
      }
      if ( v5 == 1 )
      {
        if ( *(_BYTE *)v18 == 100 )
        {
LABEL_78:
          v14 = 2LL;
          goto LABEL_103;
        }
        v5 = v19;
      }
      if ( v5 == 5 )
      {
        if ( *(_DWORD *)v18 == 1601200493 && *((_BYTE *)v18 + 4) == 100 )
        {
LABEL_94:
          sub_10000EDA0(__p, v21);
          ObjConverter::addMapToMaterial(a1, 2LL, __p);
          goto LABEL_95;
        }
        v5 = v19;
      }
      if ( v5 == 2 )
      {
        if ( *(_WORD *)v18 == 28513 )
        {
LABEL_99:
          v14 = 4LL;
          goto LABEL_103;
        }
        v5 = v19;
      }
      if ( v5 == 6 )
      {
        if ( *(_DWORD *)v18 == 1601200493 && *((_WORD *)v18 + 2) == 28513 )
        {
LABEL_70:
          sub_10000EDA0(__p, v21);
          ObjConverter::addMapToMaterial(a1, 4LL, __p);
          goto LABEL_95;
        }
        v5 = v19;
      }
      if ( v5 == 2 )
      {
        v10 = v18;
        goto LABEL_87;
      }
LABEL_88:
      if ( (unsigned int)sub_100005570((int)&v18, "map_Ke") )
      {
        sub_10000EDA0(__p, v21);
        ObjConverter::addMapToMaterial(a1, 3LL, __p);
        goto LABEL_95;
      }
      if ( (sub_100005570((int)&v18, "metallic") & 1) != 0 )
      {
        v14 = 5LL;
        goto LABEL_103;
      }
      if ( (unsigned int)sub_100005570((int)&v18, "map_metallic") )
      {
        sub_10000EDA0(__p, v21);
        ObjConverter::addMapToMaterial(a1, 5LL, __p);
        goto LABEL_95;
      }
      if ( (unsigned int)sub_100005570((int)&v18, "roughness") )
      {
        v14 = 6LL;
        goto LABEL_103;
      }
      if ( (unsigned int)sub_100005570((int)&v18, "map_roughness") )
      {
        sub_10000EDA0(__p, v21);
        ObjConverter::addMapToMaterial(a1, 6LL, __p);
LABEL_95:
        if ( v17 < 0 )
          operator delete(__p[0]);
      }
LABEL_104:
      if ( SHIBYTE(v20) < 0 )
        operator delete(v18);
    }
  }
  v21[0] = `VTT for'std::istringstream[0];
  *(_QWORD *)((char *)v21 + *(_QWORD *)(`VTT for'std::istringstream[0] - 24LL)) = `VTT for'std::istringstream[3];
  v22[0] = &`vtable for'std::stringbuf.~basic_stringbuf;
  if ( SHIBYTE(v23.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v23.__r_.__value_.__l.__data_);
  std::streambuf::~streambuf(v22);
  std::istream::~istream(v21, &`VTT for'std::istringstream[1]);
  std::ios::~ios(&v24);
  if ( SHIBYTE(__str.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(__str.__r_.__value_.__l.__data_);
}