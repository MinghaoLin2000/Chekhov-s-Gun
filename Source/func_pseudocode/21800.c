__ZN12PlyConverter14parsePlyHeaderERNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERNS0_13basic_istreamIcS3_EE
void __fastcall PlyConverter::parsePlyHeader(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int16 *p_p; // x9
  int v7; // w10
  int v8; // w9
  void **v10; // x28
  std::string::size_type size; // x8
  char v12; // w8
  unsigned __int16 *v13; // x9
  __int64 v14; // x9
  __int64 v16; // x10
  int v17; // w9
  char v19; // w23
  void **v20; // x8
  unsigned __int64 v22; // x8
  void *v23; // x9
  __int64 v24; // x23
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x1
  __int128 v28; // q0
  __int64 v29; // x23
  int v30; // w8
  void *v31; // x0
  int v32; // w25
  int v33; // w23
  __int128 *v34; // x10
  unsigned int v35; // w9
  __int64 v36; // x9
  unsigned __int64 v41; // x11
  unsigned __int64 v42; // x9
  int v43; // w9
  void **v45; // x27
  int v46; // w28
  __int64 v47; // x25
  int v48; // w0
  int v49; // w26
  unsigned __int64 v50; // x10
  int *v51; // x9
  _DWORD *v52; // x23
  int *v53; // x0
  unsigned __int64 v54; // x24
  unsigned __int64 v55; // x11
  unsigned __int64 v56; // x10
  __int64 v57; // x1
  __int64 v58; // x8
  int *v59; // x10
  int *v60; // x11
  __int64 v61; // t1
  int v62; // w13
  void *v63[2]; // [xsp+10h] [xbp-230h] BYREF
  __int64 v64; // [xsp+20h] [xbp-220h]
  void *v65; // [xsp+28h] [xbp-218h] BYREF
  char v66; // [xsp+3Fh] [xbp-201h]
  __int64 v67; // [xsp+40h] [xbp-200h]
  int v68; // [xsp+4Ch] [xbp-1F4h] BYREF
  _QWORD v69[2]; // [xsp+50h] [xbp-1F0h] BYREF
  __int64 v70; // [xsp+60h] [xbp-1E0h]
  void *v71; // [xsp+68h] [xbp-1D8h] BYREF
  __int64 v72; // [xsp+70h] [xbp-1D0h]
  __int64 v73; // [xsp+78h] [xbp-1C8h]
  void *__p; // [xsp+80h] [xbp-1C0h] BYREF
  __int64 v75; // [xsp+88h] [xbp-1B8h]
  __int64 v76; // [xsp+90h] [xbp-1B0h]
  _QWORD v77[2]; // [xsp+98h] [xbp-1A8h] BYREF
  _QWORD v78[8]; // [xsp+A8h] [xbp-198h] BYREF
  std::string v79; // [xsp+E8h] [xbp-158h] BYREF
  __int64 v80; // [xsp+110h] [xbp-130h] BYREF
  std::string __str; // [xsp+1A8h] [xbp-98h] BYREF
  __int128 v82; // [xsp+1C0h] [xbp-80h] BYREF
  __int64 v83; // [xsp+1D0h] [xbp-70h]
  __int64 v84; // [xsp+1D8h] [xbp-68h]
  _QWORD *v85; // [xsp+1E0h] [xbp-60h]

  memset(&__str, 0, sizeof(__str));
  if ( (sub_100004EF8(a3, &__str) & 1) == 0 )
    goto LABEL_16;
  sub_100005108(v77);
  std::string::operator=(&v79, &__str);
  sub_10000736C(v78);
  __p = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  sub_1000052A0(v77, &__p);
  if ( SHIBYTE(v76) < 0 )
  {
    if ( v75 != 6 )
      goto LABEL_12;
    p_p = (unsigned __int16 *)__p;
  }
  else
  {
    if ( SHIBYTE(v76) != 6 )
      goto LABEL_13;
    p_p = (unsigned __int16 *)&__p;
  }
  v7 = *(_DWORD *)p_p;
  v8 = p_p[2];
  if ( v7 != 1836216166 || v8 != 29793 )
  {
    if ( v76 < 0 )
      goto LABEL_12;
    goto LABEL_13;
  }
  sub_1000052A0(v77, a2);
  v10 = &v65;
  while ( (unsigned int)sub_100004EF8(a3, &__str) )
  {
    size = HIBYTE(__str.__r_.__value_.__r.__words[2]);
    if ( (__str.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) != 0LL )
      size = __str.__r_.__value_.__l.__size_;
    if ( size )
    {
      std::ios_base::clear((std::ios_base *)((char *)v77 + *(_QWORD *)(v77[0] - 24LL)), 0);
      std::string::operator=(&v79, &__str);
      sub_10000736C(v78);
      v71 = 0LL;
      v72 = 0LL;
      v73 = 0LL;
      sub_1000052A0(v77, &v71);
      v12 = HIBYTE(v73);
      if ( SHIBYTE(v73) < 0 )
      {
        v14 = v72;
        if ( v72 == 7 )
        {
          if ( *(_DWORD *)v71 == 1835363429 && *(_DWORD *)((char *)v71 + 3) == 1953391981 )
            goto LABEL_56;
          v14 = v72;
LABEL_38:
          if ( v14 != 10 )
            goto LABEL_168;
          v13 = (unsigned __int16 *)v71;
LABEL_40:
          v16 = *(_QWORD *)v13;
          v17 = v13[4];
          if ( v16 != 0x646165685F646E65LL || v17 != 29285 )
            goto LABEL_168;
          v19 = 1;
          goto LABEL_169;
        }
        if ( v72 != 8 || *(_QWORD *)v71 != 0x79747265706F7270LL )
          goto LABEL_38;
      }
      else
      {
        if ( HIBYTE(v73) == 7 )
        {
          if ( (_DWORD)v71 == 1835363429 && *(_DWORD *)((char *)&v71 + 3) == 1953391981 )
          {
LABEL_56:
            v69[0] = 0LL;
            v69[1] = 0LL;
            v70 = 0LL;
            sub_1000052A0(v77, v69);
            v68 = 0;
            std::istream::operator>>(v77, &v68);
            sub_100006D8C(v63, v69, v68);
            v22 = a1[1];
            if ( v22 >= a1[2] )
            {
              v24 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v22 - *a1) >> 3);
              if ( (unsigned __int64)(v24 + 1) > 0x492492492492492LL )
                sub_100007480(a1);
              v85 = a1 + 2;
              v25 = sub_100007558();
              v26 = v25 + 56 * v24;
              *(_QWORD *)&v82 = v25;
              *((_QWORD *)&v82 + 1) = v26;
              v84 = v25 + 56 * v27;
              *(_QWORD *)v26 = 0LL;
              *(_QWORD *)(v26 + 8) = 0LL;
              *(_QWORD *)(v26 + 16) = 0LL;
              *(_OWORD *)v26 = *(_OWORD *)v63;
              *(_QWORD *)(v26 + 16) = v64;
              v63[0] = 0LL;
              v63[1] = 0LL;
              v64 = 0LL;
              v28 = *(_OWORD *)v10;
              *(_QWORD *)(v26 + 40) = v10[2];
              *(_OWORD *)(v26 + 24) = v28;
              v10[1] = 0LL;
              v10[2] = 0LL;
              *v10 = 0LL;
              *(_QWORD *)(v26 + 48) = v67;
              v83 = v26 + 56;
              sub_1000074E0(a1, &v82);
              v29 = a1[1];
              sub_1000076F4(&v82);
              v30 = v66;
              a1[1] = v29;
              if ( v30 < 0 )
                operator delete(v65);
            }
            else
            {
              *(_QWORD *)v22 = 0LL;
              *(_QWORD *)(v22 + 8) = 0LL;
              *(_QWORD *)(v22 + 16) = 0LL;
              *(_OWORD *)v22 = *(_OWORD *)v63;
              *(_QWORD *)(v22 + 16) = v64;
              v63[0] = 0LL;
              v63[1] = 0LL;
              v64 = 0LL;
              v23 = v10[2];
              *(_OWORD *)(v22 + 24) = *(_OWORD *)v10;
              *(_QWORD *)(v22 + 40) = v23;
              v10[1] = 0LL;
              v10[2] = 0LL;
              *v10 = 0LL;
              *(_QWORD *)(v22 + 48) = v67;
              a1[1] = v22 + 56;
            }
            if ( v63[0] )
            {
              v63[1] = v63[0];
              operator delete(v63[0]);
            }
            if ( SHIBYTE(v70) < 0 )
            {
              v31 = (void *)v69[0];
              goto LABEL_167;
            }
          }
LABEL_168:
          v19 = 0;
          v12 = HIBYTE(v73);
          goto LABEL_169;
        }
        if ( HIBYTE(v73) != 8 )
        {
          if ( HIBYTE(v73) != 10 )
            goto LABEL_168;
          v13 = (unsigned __int16 *)&v71;
          goto LABEL_40;
        }
        if ( v71 != (void *)0x79747265706F7270LL )
          goto LABEL_168;
      }
      if ( a1[1] != *a1 )
      {
        v63[0] = 0LL;
        v63[1] = 0LL;
        v64 = 0LL;
        sub_1000052A0(v77, v63);
        if ( (SHIBYTE(v64) & 0x80000000) == 0 )
        {
          if ( SHIBYTE(v64) == 4 )
          {
            v20 = v63;
            goto LABEL_68;
          }
          goto LABEL_69;
        }
        if ( v63[1] != (void *)4 )
          goto LABEL_69;
        v20 = (void **)v63[0];
LABEL_68:
        if ( *(_DWORD *)v20 == 1953720684 )
        {
          sub_1000052A0(v77, v63);
          v32 = sub_100005604((int)v63);
          sub_1000052A0(v77, v63);
        }
        else
        {
LABEL_69:
          v32 = 8;
        }
        v82 = 0uLL;
        v83 = 0LL;
        sub_1000052A0(v77, &v82);
        if ( SHIBYTE(v83) < 0 )
        {
          v36 = *((_QWORD *)&v82 + 1);
          if ( *((_QWORD *)&v82 + 1) == 1LL )
          {
            v35 = *(unsigned __int8 *)v82 - 120;
            if ( v35 >= 3 )
              LOBYTE(v35) = 10;
LABEL_109:
            v33 = (unsigned __int8)v35;
          }
          else
          {
            if ( *((_QWORD *)&v82 + 1) != 2LL )
              goto LABEL_76;
            if ( *(_WORD *)v82 == 30830 )
            {
LABEL_134:
              v33 = 3;
              goto LABEL_147;
            }
            if ( *(_WORD *)v82 == 31086 )
            {
LABEL_138:
              v33 = 4;
              goto LABEL_147;
            }
            v33 = *(_WORD *)v82 == 31342 ? 5 : 10;
            if ( *(_WORD *)v82 != 31342 )
            {
LABEL_76:
              if ( *((_QWORD *)&v82 + 1) == 3LL )
              {
                if ( *(_WORD *)v82 == 25970 && *(_BYTE *)(v82 + 2) == 100 )
                {
                  v33 = 6;
                  goto LABEL_147;
                }
                v36 = *((_QWORD *)&v82 + 1);
              }
              if ( v36 == 5 )
              {
                if ( *(_DWORD *)v82 == 1701147239 && *(_BYTE *)(v82 + 4) == 110 )
                {
LABEL_135:
                  v33 = 7;
                  goto LABEL_147;
                }
                v36 = *((_QWORD *)&v82 + 1);
              }
              if ( v36 == 4 )
              {
                if ( *(_DWORD *)v82 == 1702194274 )
                {
                  v33 = 8;
                  goto LABEL_147;
                }
                v36 = *((_QWORD *)&v82 + 1);
              }
              if ( v36 == 14 )
              {
                if ( *(_QWORD *)v82 == 0x695F786574726576LL && *(_QWORD *)(v82 + 6) == 0x73656369646E695FLL )
                {
LABEL_136:
                  v33 = 9;
                  goto LABEL_147;
                }
                v36 = *((_QWORD *)&v82 + 1);
              }
              if ( v36 == 12 )
              {
                v34 = (__int128 *)v82;
                goto LABEL_120;
              }
              v33 = 10;
            }
          }
        }
        else
        {
          v33 = 10;
          v34 = &v82;
          switch ( HIBYTE(v83) )
          {
            case 1:
              v35 = (unsigned __int8)v82 - 120;
              if ( v35 < 3 )
                goto LABEL_109;
              goto LABEL_147;
            case 2:
              switch ( (unsigned __int16)v82 )
              {
                case 0x786Eu:
                  goto LABEL_134;
                case 0x796Eu:
                  goto LABEL_138;
                case 0x7A6Eu:
                  v33 = 5;
                  break;
              }
              goto LABEL_147;
            case 3:
              if ( (unsigned __int16)v82 ^ 0x6572 | BYTE2(v82) ^ 0x64 )
                v33 = 10;
              else
                v33 = 6;
              goto LABEL_147;
            case 4:
              goto LABEL_131;
            case 5:
              if ( (_DWORD)v82 == 1701147239 && BYTE4(v82) == 110 )
                goto LABEL_135;
              if ( HIBYTE(v83) == 4 )
              {
LABEL_131:
                if ( (_DWORD)v82 == 1702194274 )
                  v33 = 8;
                else
                  v33 = 10;
              }
              goto LABEL_147;
            case 0xC:
              break;
            case 0xE:
              if ( (_QWORD)v82 == 0x695F786574726576LL && *(_QWORD *)((char *)&v82 + 6) == 0x73656369646E695FLL )
                goto LABEL_136;
              if ( HIBYTE(v83) != 12 )
                goto LABEL_147;
              v34 = &v82;
              break;
            default:
              goto LABEL_147;
          }
LABEL_120:
          v41 = 0x7665727465785F69LL;
          v42 = bswap64(*(_QWORD *)v34);
          if ( v42 == 0x7665727465785F69LL )
          {
            v42 = bswap32(*((_DWORD *)v34 + 2));
            if ( (_DWORD)v42 == 1852073336 )
            {
              v43 = 0;
              goto LABEL_144;
            }
            v41 = 1852073336LL;
          }
          if ( v42 < v41 )
            v43 = -1;
          else
            v43 = 1;
LABEL_144:
          if ( v43 )
            v33 = 10;
          else
            v33 = 9;
        }
LABEL_147:
        v45 = v10;
        v46 = v32;
        v47 = a1[1] - 56LL;
        v48 = sub_100005604((int)v63);
        v49 = v48;
        v50 = *(_QWORD *)(v47 + 16);
        v51 = *(int **)(v47 + 8);
        if ( (unsigned __int64)v51 >= v50 )
        {
          v53 = *(int **)v47;
          v54 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v51 - *(_QWORD *)v47) >> 2);
          v55 = v54 + 1;
          if ( v54 + 1 > 0x1555555555555555LL )
            sub_100007480(v47);
          v56 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v50 - (_QWORD)v53) >> 2);
          if ( 2 * v56 > v55 )
            v55 = 2 * v56;
          if ( v56 >= 0xAAAAAAAAAAAAAAALL )
            v57 = 0x1555555555555555LL;
          else
            v57 = v55;
          if ( v57 )
          {
            v58 = sub_100007498(v47 + 16);
            v53 = *(int **)v47;
            v51 = *(int **)(v47 + 8);
          }
          else
          {
            v58 = 0LL;
          }
          v59 = (int *)(v58 + 12 * v54);
          *v59 = v33;
          v59[1] = v49;
          v59[2] = v46;
          v60 = v59;
          v10 = v45;
          if ( v51 != v53 )
          {
            do
            {
              v61 = *(_QWORD *)(v51 - 3);
              v51 -= 3;
              v62 = v51[2];
              *(_QWORD *)(v60 - 3) = v61;
              v60 -= 3;
              v60[2] = v62;
            }
            while ( v51 != v53 );
            v53 = *(int **)v47;
          }
          v52 = v59 + 3;
          *(_QWORD *)v47 = v60;
          *(_QWORD *)(v47 + 8) = v59 + 3;
          *(_QWORD *)(v47 + 16) = v58 + 12 * v57;
          if ( v53 )
            operator delete(v53);
        }
        else
        {
          *v51 = v33;
          v51[1] = v48;
          v52 = v51 + 3;
          v51[2] = v46;
          v10 = v45;
        }
        *(_QWORD *)(v47 + 8) = v52;
        if ( SHIBYTE(v83) < 0 )
          operator delete((void *)v82);
        if ( SHIBYTE(v64) < 0 )
        {
          v31 = v63[0];
LABEL_167:
          operator delete(v31);
        }
        goto LABEL_168;
      }
      v19 = 0;
LABEL_169:
      if ( v12 < 0 )
      {
        operator delete(v71);
        if ( (v19 & 1) != 0 )
          break;
      }
      else if ( (v19 & 1) != 0 )
      {
        break;
      }
    }
  }
  if ( v76 < 0 )
LABEL_12:
    operator delete(__p);
LABEL_13:
  v77[0] = `VTT for'std::istringstream[0];
  *(_QWORD *)((char *)v77 + *(_QWORD *)(`VTT for'std::istringstream[0] - 24LL)) = `VTT for'std::istringstream[3];
  v78[0] = &`vtable for'std::stringbuf.~basic_stringbuf;
  if ( SHIBYTE(v79.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v79.__r_.__value_.__l.__data_);
  std::streambuf::~streambuf(v78);
  std::istream::~istream(v77, &`VTT for'std::istringstream[1]);
  std::ios::~ios(&v80);
LABEL_16:
  if ( SHIBYTE(__str.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(__str.__r_.__value_.__l.__data_);
}