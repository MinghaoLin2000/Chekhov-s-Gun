__ZN12StlConverter13parseStlAsciiERNSt3__113basic_istreamIcNS0_11char_traitsIcEEEE
void __fastcall StlConverter::parseStlAscii(_QWORD *a1, __int64 a2)
{
  char v4; // w26
  char v5; // w25
  std::string::size_type size; // x8
  unsigned __int16 *v7; // x9
  int v8; // w10
  int v9; // w9
  int *v11; // x9
  __int64 v12; // x9
  int v13; // w10
  int v14; // w9
  int v16; // w10
  int v17; // w10
  int v18; // w9
  int v20; // w11
  int v21; // w9
  int v23; // w11
  int v24; // w9
  void *__p[2]; // [xsp+0h] [xbp-1B0h] BYREF
  __int64 v27; // [xsp+10h] [xbp-1A0h]
  void *v28; // [xsp+18h] [xbp-198h] BYREF
  __int64 v29; // [xsp+20h] [xbp-190h]
  __int64 v30; // [xsp+28h] [xbp-188h]
  _QWORD v31[2]; // [xsp+30h] [xbp-180h] BYREF
  _QWORD v32[8]; // [xsp+40h] [xbp-170h] BYREF
  std::string v33; // [xsp+80h] [xbp-130h] BYREF
  __int64 v34; // [xsp+A8h] [xbp-108h] BYREF
  std::string __str; // [xsp+140h] [xbp-70h] BYREF

  memset(&__str, 0, sizeof(__str));
  sub_100005108(v31);
  v4 = 0;
  v5 = 0;
  while ( (unsigned int)sub_100004EF8(a2, &__str) )
  {
    size = HIBYTE(__str.__r_.__value_.__r.__words[2]);
    if ( (__str.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) != 0LL )
      size = __str.__r_.__value_.__l.__size_;
    if ( size )
    {
      std::ios_base::clear((std::ios_base *)((char *)v31 + *(_QWORD *)(v31[0] - 24LL)), 0);
      std::string::operator=(&v33, &__str);
      sub_10000736C(v32);
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      sub_1000052A0(v31, &v28);
      if ( (v5 & 1) == 0 )
        goto LABEL_16;
      if ( v30 < 0 )
      {
        if ( v29 != 6 )
          goto LABEL_16;
        v7 = (unsigned __int16 *)v28;
      }
      else
      {
        if ( HIBYTE(v30) != 6 )
          goto LABEL_16;
        v7 = (unsigned __int16 *)&v28;
      }
      v8 = *(_DWORD *)v7;
      v9 = v7[2];
      if ( v8 == 1953654134 && v9 == 30821 )
      {
        StlConverter::addVertex((__int64)a1, (__int64)v31);
LABEL_43:
        v5 = 1;
        goto LABEL_82;
      }
LABEL_16:
      if ( (v4 & 1) != 0 )
      {
        if ( v30 < 0 )
        {
          v12 = v29;
          if ( v29 != 5 )
            goto LABEL_45;
          v11 = (int *)v28;
        }
        else
        {
          v11 = (int *)&v28;
          if ( HIBYTE(v30) != 5 )
            goto LABEL_28;
        }
        v13 = *v11;
        v14 = *((unsigned __int8 *)v11 + 4);
        if ( v13 == 1702131055 && v14 == 114 )
        {
          v4 = 1;
          goto LABEL_43;
        }
      }
      if ( (v30 & 0x8000000000000000LL) == 0 )
      {
        v11 = (int *)&v28;
        if ( HIBYTE(v30) != 5 )
        {
LABEL_28:
          v16 = 0;
          if ( HIBYTE(v30) == 7 )
            goto LABEL_52;
          if ( HIBYTE(v30) != 8 )
            goto LABEL_82;
          goto LABEL_47;
        }
        goto LABEL_33;
      }
      v12 = v29;
      if ( v29 == 5 )
      {
        v11 = (int *)v28;
LABEL_33:
        v17 = *v11;
        v18 = *((unsigned __int8 *)v11 + 4);
        if ( v17 == 1701011814 && v18 == 116 )
        {
          StlConverter::addNormal((__int64)a1, (__int64)v31);
          v4 = 1;
          goto LABEL_82;
        }
        if ( (v30 & 0x8000000000000000LL) == 0 )
        {
          if ( HIBYTE(v30) != 5 )
            goto LABEL_82;
          v16 = 0;
          v11 = (int *)&v28;
          goto LABEL_68;
        }
        v12 = v29;
      }
LABEL_45:
      if ( v12 != 8 )
        goto LABEL_50;
      v16 = 1;
      v11 = (int *)v28;
LABEL_47:
      if ( *(_QWORD *)v11 == 0x7465636166646E65LL )
      {
        v4 = 0;
LABEL_61:
        v5 = 0;
        goto LABEL_82;
      }
      if ( !v16 )
      {
        v11 = (int *)&v28;
        if ( HIBYTE(v30) == 5 )
          goto LABEL_68;
        if ( HIBYTE(v30) != 7 )
        {
LABEL_66:
          if ( HIBYTE(v30) != 8 )
            goto LABEL_82;
          goto LABEL_80;
        }
        goto LABEL_52;
      }
      v12 = v29;
LABEL_50:
      if ( v12 != 7 )
        goto LABEL_58;
      v16 = 1;
      v11 = (int *)v28;
LABEL_52:
      v20 = *v11;
      v21 = *(int *)((char *)v11 + 3);
      if ( v20 == 1818521189 && v21 == 1886351212 )
        goto LABEL_61;
      if ( v16 )
      {
        v12 = v29;
LABEL_58:
        if ( v12 != 5 )
          goto LABEL_74;
        v16 = 1;
        v11 = (int *)v28;
        goto LABEL_68;
      }
      v11 = (int *)&v28;
      if ( HIBYTE(v30) != 5 )
        goto LABEL_66;
      v16 = 0;
LABEL_68:
      v23 = *v11;
      v24 = *((unsigned __int8 *)v11 + 4);
      if ( v23 != 1768714099 || v24 != 100 )
      {
        if ( v16 )
        {
          v12 = v29;
LABEL_74:
          if ( v12 != 8 )
            goto LABEL_82;
          v11 = (int *)v28;
        }
        else
        {
          if ( HIBYTE(v30) != 8 )
            goto LABEL_82;
          v11 = (int *)&v28;
        }
LABEL_80:
        if ( *(_QWORD *)v11 == 0x64696C6F73646E65LL )
          a1[4] = 0LL;
        goto LABEL_82;
      }
      __p[0] = 0LL;
      __p[1] = 0LL;
      v27 = 0LL;
      sub_1000052A0(v31, __p);
      StlConverter::addSolid(a1, (__int64)__p);
      if ( SHIBYTE(v27) < 0 )
        operator delete(__p[0]);
LABEL_82:
      if ( SHIBYTE(v30) < 0 )
        operator delete(v28);
    }
  }
  v31[0] = `VTT for'std::istringstream[0];
  *(_QWORD *)((char *)v31 + *(_QWORD *)(`VTT for'std::istringstream[0] - 24LL)) = `VTT for'std::istringstream[3];
  v32[0] = &`vtable for'std::stringbuf.~basic_stringbuf;
  if ( SHIBYTE(v33.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v33.__r_.__value_.__l.__data_);
  std::streambuf::~streambuf(v32);
  std::istream::~istream(v31, &`VTT for'std::istringstream[1]);
  std::ios::~ios(&v34);
  if ( SHIBYTE(__str.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(__str.__r_.__value_.__l.__data_);
}