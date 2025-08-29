__ZN12PlyConverter8parsePlyERNSt3__113basic_istreamIcNS0_11char_traitsIcEEEE
bool __fastcall PlyConverter::parsePly(_QWORD *a1, _QWORD *a2)
{
  const std::locale::facet *v4; // x0
  __int64 v5; // x21
  _QWORD *v6; // x0
  void **v7; // x1
  _BOOL8 v8; // x21
  bool v10; // zf
  __int64 *v12; // x8
  __int64 v13; // x8
  bool v14; // zf
  __int64 v17; // x9
  __int64 v18; // x10
  int v19; // w8
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 (__fastcall *v24)(); // x16
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x24
  __int64 v29; // x25
  unsigned __int64 v30; // x1
  _DWORD *v31; // x8
  int v32; // w9
  __int64 v34; // x9
  __int64 v36; // x22
  int *v37; // x23
  int *v38; // x27
  __int64 v39; // x0
  char v40; // w28
  unsigned __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x26
  int *v44; // x27
  unsigned int v45; // w24
  int i; // w22
  int v47; // w28
  unsigned __int64 v48; // x8
  int *v49; // x9
  _DWORD *v50; // x23
  int *v51; // x0
  __int64 v52; // x23
  unsigned __int64 v53; // x10
  __int64 v54; // x8
  __int64 v55; // x1
  __int64 v56; // x8
  int *v57; // x10
  int v58; // t1
  unsigned __int64 v59; // x8
  unsigned int *v60; // x9
  _DWORD *v61; // x22
  __int64 v62; // x0
  char v63; // w28
  unsigned int *v64; // x0
  __int64 v65; // x22
  unsigned __int64 v66; // x10
  __int64 v67; // x8
  __int64 v68; // x1
  __int64 v69; // x8
  unsigned int *v70; // x10
  unsigned int v71; // t1
  int *v72; // x8
  int *v73; // x9
  char v74; // w26
  char v75; // w23
  int v76; // t1
  unsigned __int64 v77; // x24
  int *v78; // x22
  int *v79; // x27
  __int64 v80; // x0
  char v81; // w28
  unsigned __int64 v82; // x8
  __int64 v83; // x0
  unsigned __int64 v84; // x8
  __int64 v85; // x0
  unsigned __int64 v86; // x8
  __int64 v87; // x0
  __int64 v88; // [xsp+8h] [xbp-1E8h]
  __int64 v89; // [xsp+10h] [xbp-1E0h]
  __int64 v90; // [xsp+10h] [xbp-1E0h]
  _QWORD *v91; // [xsp+18h] [xbp-1D8h]
  _QWORD *v92; // [xsp+20h] [xbp-1D0h]
  _QWORD *v93; // [xsp+30h] [xbp-1C0h]
  void **v94; // [xsp+38h] [xbp-1B8h]
  void **v95; // [xsp+48h] [xbp-1A8h]
  __int64 v96; // [xsp+50h] [xbp-1A0h] BYREF
  float v97; // [xsp+58h] [xbp-198h]
  __int64 v98; // [xsp+60h] [xbp-190h] BYREF
  float v99; // [xsp+68h] [xbp-188h]
  void *v100; // [xsp+70h] [xbp-180h] BYREF
  __int64 v101; // [xsp+78h] [xbp-178h]
  __int64 v102; // [xsp+80h] [xbp-170h]
  void *__p[2]; // [xsp+88h] [xbp-168h] BYREF
  __int64 v104; // [xsp+98h] [xbp-158h]
  _BYTE v105[32]; // [xsp+A0h] [xbp-150h] BYREF
  _BYTE v106[32]; // [xsp+C0h] [xbp-130h] BYREF
  _BYTE v107[32]; // [xsp+E0h] [xbp-110h] BYREF
  _BYTE v108[24]; // [xsp+100h] [xbp-F0h] BYREF
  __int64 v109; // [xsp+118h] [xbp-D8h]
  _BYTE v110[24]; // [xsp+120h] [xbp-D0h] BYREF
  __int64 v111; // [xsp+138h] [xbp-B8h]
  _BYTE v112[24]; // [xsp+140h] [xbp-B0h] BYREF
  __int64 v113; // [xsp+158h] [xbp-98h]
  std::locale v114; // [xsp+160h] [xbp-90h] BYREF
  __int64 (__fastcall *v115)(); // [xsp+168h] [xbp-88h]
  std::locale *v116; // [xsp+178h] [xbp-78h]

  __p[0] = 0LL;
  __p[1] = 0LL;
  v104 = 0LL;
  std::ios_base::getloc((const std::ios_base *)((char *)a2 + *(_QWORD *)(*a2 - 24LL)));
  v4 = std::locale::use_facet(&v114, &std::ctype<char>::id);
  v5 = ((__int64 (__fastcall *)(const std::locale::facet *, __int64))v4->__vftable[2].~facet_0)(v4, 10LL);
  std::locale::~locale(&v114);
  v6 = (_QWORD *)sub_100006FE4(a2, __p, v5);
  if ( (*((_BYTE *)v6 + *(_QWORD *)(*v6 - 24LL) + 32) & 5) != 0
    || (v104 >= 0 ? (v7 = __p) : (v7 = (void **)__p[0]), strncmp("ply", (const char *)v7, 3uLL)) )
  {
    v8 = 0LL;
    goto LABEL_7;
  }
  v100 = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  PlyConverter::parsePlyHeader(a1, &v100, a2);
  v113 = 0LL;
  v111 = 0LL;
  v109 = 0LL;
  if ( v102 < 0 )
  {
    v13 = v101;
    if ( v101 != 5 || (*(_DWORD *)v100 == 1768125281 ? (v14 = *((_BYTE *)v100 + 4) == 105) : (v14 = 0), !v14) )
    {
      if ( v101 == 20 )
      {
        if ( *(_QWORD *)v100 == 0x6C5F7972616E6962LL
          && *((_QWORD *)v100 + 1) == 0x6E655F656C747469LL
          && *((_DWORD *)v100 + 4) == 1851877732 )
        {
LABEL_55:
          v114.__locale_ = (std::locale::__imp *)&off_100018448;
          v115 = sub_100005D6C;
          v116 = &v114;
          sub_1000079B0(&v114, v112);
          v26 = sub_1000077E8(&v114);
          v114.__locale_ = (std::locale::__imp *)&off_1000184F8;
          v115 = sub_100005E8C;
          v116 = &v114;
          sub_1000079B0(v26, v110);
          v23 = sub_1000077E8(&v114);
          v114.__locale_ = (std::locale::__imp *)&off_1000184F8;
          v24 = sub_100005FCC;
          goto LABEL_57;
        }
        v13 = v101;
      }
      if ( v13 != 17 )
      {
LABEL_52:
        v8 = 0LL;
        goto LABEL_53;
      }
      v12 = (__int64 *)v100;
      goto LABEL_39;
    }
LABEL_56:
    v114.__locale_ = (std::locale::__imp *)&off_100018448;
    v115 = sub_100005B9C;
    v116 = &v114;
    sub_1000079B0(&v114, v112);
    v27 = sub_1000077E8(&v114);
    v114.__locale_ = (std::locale::__imp *)&off_1000184F8;
    v115 = sub_100005C60;
    v116 = &v114;
    sub_1000079B0(v27, v110);
    v23 = sub_1000077E8(&v114);
    v114.__locale_ = (std::locale::__imp *)&off_1000184F8;
    v24 = sub_100005D2C;
    goto LABEL_57;
  }
  if ( HIBYTE(v102) == 5 )
  {
    if ( (_DWORD)v100 != 1768125281 || BYTE4(v100) != 105 )
      goto LABEL_52;
    goto LABEL_56;
  }
  if ( HIBYTE(v102) != 17 )
  {
    if ( HIBYTE(v102) != 20 )
      goto LABEL_52;
    v10 = v100 == (void *)0x6C5F7972616E6962LL && v101 == 0x6E655F656C747469LL;
    if ( !v10 || (_DWORD)v102 != 1851877732 )
      goto LABEL_52;
    goto LABEL_55;
  }
  v12 = (__int64 *)&v100;
LABEL_39:
  v17 = *v12;
  v18 = v12[1];
  v19 = *((unsigned __int8 *)v12 + 16);
  if ( v17 != 0x625F7972616E6962LL || v18 != 0x6169646E655F6769LL || v19 != 110 )
    goto LABEL_52;
  v114.__locale_ = (std::locale::__imp *)&off_100018448;
  v115 = sub_10000600C;
  v116 = &v114;
  sub_1000079B0(&v114, v112);
  v22 = sub_1000077E8(&v114);
  v114.__locale_ = (std::locale::__imp *)&off_1000184F8;
  v115 = sub_10000612C;
  v116 = &v114;
  sub_1000079B0(v22, v110);
  v23 = sub_1000077E8(&v114);
  v114.__locale_ = (std::locale::__imp *)&off_1000184F8;
  v24 = sub_100006268;
LABEL_57:
  v115 = v24;
  v116 = &v114;
  sub_1000079B0(v23, v108);
  sub_1000077E8(&v114);
  v29 = *a1;
  v28 = a1[1];
  if ( *a1 != v28 )
  {
    v95 = (void **)(a1 + 15);
    v93 = a1 + 6;
    v94 = (void **)(a1 + 18);
    v92 = a1 + 9;
    v91 = a1 + 12;
    while ( 1 )
    {
      v30 = *(_QWORD *)(v29 + 48);
      v8 = v30 >> 28 == 0;
      if ( v30 >> 28 )
        goto LABEL_53;
      v31 = (_DWORD *)(v29 + 24);
      if ( *(char *)(v29 + 47) < 0 )
      {
        v34 = *(_QWORD *)(v29 + 32);
        if ( v34 == 4 )
        {
          v31 = *(_DWORD **)v31;
LABEL_77:
          if ( *v31 == 1701011814 )
          {
            sub_1000063CC(v95, 3 * v30);
            sub_1000063CC(v94, *(_QWORD *)(v29 + 48));
            v41 = *(_QWORD *)(v29 + 48);
            if ( v41 )
            {
              v42 = 0LL;
              v89 = v28;
              do
              {
                v88 = v42;
                v44 = *(int **)v29;
                v43 = *(int **)(v29 + 8);
                if ( *(int **)v29 != v43 )
                {
                  do
                  {
                    if ( *v44 == 9 )
                    {
                      v45 = (int)sub_100005B48(v112, a2, (unsigned int)v44[2]);
                      if ( v45 > 0x400 )
                        goto LABEL_52;
                      if ( v45 )
                      {
                        for ( i = 0; i != v45; ++i )
                        {
                          v47 = (int)sub_100005B48(v112, a2, (unsigned int)v44[1]);
                          v49 = (int *)a1[16];
                          v48 = a1[17];
                          if ( (unsigned __int64)v49 >= v48 )
                          {
                            v51 = (int *)*v95;
                            v52 = ((char *)v49 - (_BYTE *)*v95) >> 2;
                            v53 = v52 + 1;
                            if ( (unsigned __int64)(v52 + 1) >> 62 )
                              sub_100007480(v95);
                            v54 = v48 - (_QWORD)v51;
                            if ( v54 >> 1 > v53 )
                              v53 = v54 >> 1;
                            if ( (unsigned __int64)v54 >= 0x7FFFFFFFFFFFFFFCLL )
                              v55 = 0x3FFFFFFFFFFFFFFFLL;
                            else
                              v55 = v53;
                            if ( v55 )
                            {
                              v56 = sub_100007F5C(a1 + 17);
                              v51 = (int *)a1[15];
                              v49 = (int *)a1[16];
                            }
                            else
                            {
                              v56 = 0LL;
                            }
                            v57 = (int *)(v56 + 4 * v52);
                            *v57 = v47;
                            v50 = v57 + 1;
                            while ( v49 != v51 )
                            {
                              v58 = *--v49;
                              *--v57 = v58;
                            }
                            a1[15] = v57;
                            a1[16] = v50;
                            a1[17] = v56 + 4 * v55;
                            if ( v51 )
                              operator delete(v51);
                          }
                          else
                          {
                            *v49 = v47;
                            v50 = v49 + 1;
                          }
                          a1[16] = v50;
                        }
                      }
                      v60 = (unsigned int *)a1[19];
                      v59 = a1[20];
                      if ( (unsigned __int64)v60 >= v59 )
                      {
                        v64 = (unsigned int *)*v94;
                        v65 = ((char *)v60 - (_BYTE *)*v94) >> 2;
                        v66 = v65 + 1;
                        if ( (unsigned __int64)(v65 + 1) >> 62 )
                          sub_100007480(v94);
                        v67 = v59 - (_QWORD)v64;
                        if ( v67 >> 1 > v66 )
                          v66 = v67 >> 1;
                        if ( (unsigned __int64)v67 >= 0x7FFFFFFFFFFFFFFCLL )
                          v68 = 0x3FFFFFFFFFFFFFFFLL;
                        else
                          v68 = v66;
                        if ( v68 )
                        {
                          v69 = sub_100007F5C(a1 + 20);
                          v64 = (unsigned int *)a1[18];
                          v60 = (unsigned int *)a1[19];
                        }
                        else
                        {
                          v69 = 0LL;
                        }
                        v70 = (unsigned int *)(v69 + 4 * v65);
                        *v70 = v45;
                        v61 = v70 + 1;
                        while ( v60 != v64 )
                        {
                          v71 = *--v60;
                          *--v70 = v71;
                        }
                        a1[18] = v70;
                        a1[19] = v61;
                        a1[20] = v69 + 4 * v68;
                        if ( v64 )
                          operator delete(v64);
                      }
                      else
                      {
                        *v60 = v45;
                        v61 = v60 + 1;
                      }
                      a1[19] = v61;
                    }
                    else
                    {
                      v62 = sub_100007D58(v106, v112);
                      v63 = PlyConverter::skipUnknownProperty(v62, v44, a2, v106);
                      sub_1000077E8(v106);
                      if ( (v63 & 1) == 0 )
                        goto LABEL_52;
                    }
                    v44 += 3;
                  }
                  while ( v44 != v43 );
                  v41 = *(_QWORD *)(v29 + 48);
                }
                v28 = v89;
                v42 = v88 + 1;
              }
              while ( v88 + 1 < v41 );
            }
            goto LABEL_173;
          }
          goto LABEL_78;
        }
        if ( v34 == 6 && **(_DWORD **)v31 == 1953654134 && *(_WORD *)(*(_QWORD *)v31 + 4LL) == 30821 )
        {
LABEL_133:
          v90 = v28;
          v72 = *(int **)v29;
          v73 = *(int **)(v29 + 8);
          if ( *(int **)v29 == v73 )
          {
            v75 = 0;
            v74 = 0;
          }
          else
          {
            v74 = 0;
            v75 = 0;
            do
            {
              v76 = *v72;
              v72 += 3;
              v74 |= v76 == 3;
              v75 |= v76 == 6;
            }
            while ( v72 != v73 );
          }
          sub_1000062A8(v93);
          if ( (v74 & 1) != 0 )
            sub_1000062A8(v92);
          if ( (v75 & 1) != 0 )
            sub_1000062A8(v91);
          v114.__locale_ = 0LL;
          LODWORD(v115) = 0;
          v98 = 0x3F80000000000000LL;
          v99 = 0.0;
          v96 = 0LL;
          v97 = 0.0;
          if ( *(_QWORD *)(v29 + 48) )
          {
            v77 = 0LL;
            do
            {
              v79 = *(int **)v29;
              v78 = *(int **)(v29 + 8);
              while ( v79 != v78 )
              {
                switch ( *v79 )
                {
                  case 0:
                    LODWORD(v114.__locale_) = sub_100005B48(v110, a2, (unsigned int)v79[1]);
                    goto LABEL_157;
                  case 1:
                    HIDWORD(v114.__locale_) = sub_100005B48(v110, a2, (unsigned int)v79[1]);
                    goto LABEL_157;
                  case 2:
                    LODWORD(v115) = sub_100005B48(v110, a2, (unsigned int)v79[1]);
                    goto LABEL_157;
                  case 3:
                    LODWORD(v98) = sub_100005B48(v110, a2, (unsigned int)v79[1]);
                    goto LABEL_157;
                  case 4:
                    HIDWORD(v98) = sub_100005B48(v110, a2, (unsigned int)v79[1]);
                    goto LABEL_157;
                  case 5:
                    v99 = sub_100005B48(v110, a2, (unsigned int)v79[1]);
                    goto LABEL_157;
                  case 6:
                    LODWORD(v96) = sub_100005B48(v108, a2, (unsigned int)v79[1]);
                    goto LABEL_157;
                  case 7:
                    HIDWORD(v96) = sub_100005B48(v108, a2, (unsigned int)v79[1]);
                    goto LABEL_157;
                  case 8:
                    v97 = sub_100005B48(v108, a2, (unsigned int)v79[1]);
                    goto LABEL_157;
                  default:
                    v80 = sub_100007D58(v107, v112);
                    v81 = PlyConverter::skipUnknownProperty(v80, v79, a2, v107);
                    sub_1000077E8(v107);
                    if ( (v81 & 1) == 0 )
                      goto LABEL_52;
LABEL_157:
                    v79 += 3;
                    break;
                }
              }
              v82 = a1[7];
              if ( v82 >= a1[8] )
              {
                v83 = sub_100007DF0(v93, &v114);
              }
              else
              {
                *(std::locale *)v82 = v114;
                *(_DWORD *)(v82 + 8) = (_DWORD)v115;
                v83 = v82 + 12;
              }
              a1[7] = v83;
              if ( (v74 & 1) != 0 )
              {
                v84 = a1[10];
                if ( v84 >= a1[11] )
                {
                  v85 = sub_100007DF0(v92, &v98);
                }
                else
                {
                  *(_QWORD *)v84 = v98;
                  *(float *)(v84 + 8) = v99;
                  v85 = v84 + 12;
                }
                a1[10] = v85;
              }
              if ( (v75 & 1) != 0 )
              {
                v86 = a1[13];
                if ( v86 >= a1[14] )
                {
                  v87 = sub_100007DF0(v91, &v96);
                }
                else
                {
                  *(_QWORD *)v86 = v96;
                  *(float *)(v86 + 8) = v97;
                  v87 = v86 + 12;
                }
                a1[13] = v87;
              }
              ++v77;
            }
            while ( v77 < *(_QWORD *)(v29 + 48) );
          }
          v28 = v90;
          goto LABEL_173;
        }
      }
      else
      {
        v32 = *(unsigned __int8 *)(v29 + 47);
        if ( v32 == 4 )
          goto LABEL_77;
        if ( v32 == 6 && *v31 == 1953654134 && *(_WORD *)(v29 + 28) == 30821 )
          goto LABEL_133;
      }
LABEL_78:
      if ( v30 )
      {
        v36 = 0LL;
        while ( 1 )
        {
          v38 = *(int **)v29;
          v37 = *(int **)(v29 + 8);
          if ( *(int **)v29 != v37 )
            break;
LABEL_84:
          if ( ++v36 >= v30 )
            goto LABEL_173;
        }
        while ( 1 )
        {
          v39 = sub_100007D58(v105, v112);
          v40 = PlyConverter::skipUnknownProperty(v39, v38, a2, v105);
          sub_1000077E8(v105);
          if ( (v40 & 1) == 0 )
            goto LABEL_52;
          v38 += 3;
          if ( v38 == v37 )
          {
            v30 = *(_QWORD *)(v29 + 48);
            goto LABEL_84;
          }
        }
      }
LABEL_173:
      v29 += 56LL;
      if ( v29 == v28 )
        goto LABEL_53;
    }
  }
  v8 = 1LL;
LABEL_53:
  sub_1000077E8(v108);
  sub_1000077E8(v110);
  sub_1000077E8(v112);
  if ( SHIBYTE(v102) < 0 )
    operator delete(v100);
LABEL_7:
  if ( SHIBYTE(v104) < 0 )
    operator delete(__p[0]);
  return v8;
}